/// <reference types="./types/dsl" />
// @ts-check

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
      alias($._equals, $.separator)
    ),

    _equals: $ => token(prec(1, repeat1("="))),

    _dashes: $ => token(prec(1, seq("---", repeat("-"))))
  }
});
