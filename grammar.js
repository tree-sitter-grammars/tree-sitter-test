/// <reference types="./types/dsl" />
// @ts-check

const I = token.immediate;

module.exports = grammar({
  name: "test",

  extras: _ => [/\r?\n/],

  rules: {
    file: $ => repeat($.test),

    test: $ => seq(
      $.header,
      alias(repeat1(/./), $.input),
      alias($._dashes, $.separator),
      alias(repeat(/./), $.output)
    ),

    header: $ => seq(
      alias($._equals, $.separator),
      alias(repeat1(/[^\r\n]/), $.name),
      optional($.attributes),
      alias($._equals, $.separator)
    ),

    attributes: $ => repeat1(
      field("attribute", choice(
        $.skip,
        $.error,
        $.fail_fast,
        $.language,
        $.platform,
      ))
    ),

    skip: _ => ":skip",

    error: _ => ":error",

    fail_fast: _ => ":fail-fast",

    language: $ => seq(
      ":language",
      I("("),
      alias($._lang, $.parameter),
      I(")")
    ),

    platform: $ => seq(
      ":platform",
      I("("),
      alias($._os, $.parameter),
      I(")")
    ),

    _lang: _ => I(repeat1(/[\w.-]/)),

    _os: _ => I(choice(
      "linux",
      "macos",
      "ios",
      "freebsd",
      "dragonfly",
      "netbsd",
      "openbsd",
      "solaris",
      "android",
      "windows",
    )),

    _equals: $ => token(prec(1, repeat1("="))),

    _dashes: $ => token(prec(1, seq("---", repeat("-"))))
  }
});
