(name) @markup.heading

[
  ":skip"
  ":error"
  ":fail-fast"
  ":language"
  ":platform"
] @attribute

(attribute
  language: (parameter) @string)

(attribute
  platform: (parameter) @constant.builtin)

(separator) @punctuation.delimiter

[ "(" ")" ] @punctuation.bracket
