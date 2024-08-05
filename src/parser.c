#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 4
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym__line = 1,
  anon_sym_COLONskip = 2,
  anon_sym_COLONerror = 3,
  anon_sym_COLONfail_DASHfast = 4,
  anon_sym_COLON = 5,
  aux_sym_custom_attr_token1 = 6,
  anon_sym_LPAREN = 7,
  aux_sym_custom_attr_token2 = 8,
  anon_sym_BSLASH_RPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COLONlanguage = 11,
  anon_sym_COLONplatform = 12,
  sym__lang = 13,
  sym__os = 14,
  sym__eol = 15,
  sym__equals_begin = 16,
  sym__equals_end = 17,
  sym__dashes = 18,
  sym_file = 19,
  sym_test = 20,
  aux_sym__body = 21,
  sym_header = 22,
  sym_attributes = 23,
  sym_attribute = 24,
  sym_custom_attr = 25,
  sym__language = 26,
  sym__platform = 27,
  aux_sym_file_repeat1 = 28,
  aux_sym_header_repeat1 = 29,
  aux_sym_attributes_repeat1 = 30,
  aux_sym_custom_attr_repeat1 = 31,
  alias_sym_input = 32,
  alias_sym_name = 33,
  alias_sym_output = 34,
  alias_sym_value = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__line] = "_line",
  [anon_sym_COLONskip] = ":skip",
  [anon_sym_COLONerror] = ":error",
  [anon_sym_COLONfail_DASHfast] = ":fail-fast",
  [anon_sym_COLON] = ":",
  [aux_sym_custom_attr_token1] = "custom_attr_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_custom_attr_token2] = "custom_attr_token2",
  [anon_sym_BSLASH_RPAREN] = "\\)",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLONlanguage] = ":language",
  [anon_sym_COLONplatform] = ":platform",
  [sym__lang] = "parameter",
  [sym__os] = "parameter",
  [sym__eol] = "_eol",
  [sym__equals_begin] = "separator",
  [sym__equals_end] = "separator",
  [sym__dashes] = "separator",
  [sym_file] = "file",
  [sym_test] = "test",
  [aux_sym__body] = "_body",
  [sym_header] = "header",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_custom_attr] = "custom_attr",
  [sym__language] = "_language",
  [sym__platform] = "_platform",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_custom_attr_repeat1] = "custom_attr_repeat1",
  [alias_sym_input] = "input",
  [alias_sym_name] = "name",
  [alias_sym_output] = "output",
  [alias_sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__line] = sym__line,
  [anon_sym_COLONskip] = anon_sym_COLONskip,
  [anon_sym_COLONerror] = anon_sym_COLONerror,
  [anon_sym_COLONfail_DASHfast] = anon_sym_COLONfail_DASHfast,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_custom_attr_token1] = aux_sym_custom_attr_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_custom_attr_token2] = aux_sym_custom_attr_token2,
  [anon_sym_BSLASH_RPAREN] = anon_sym_BSLASH_RPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLONlanguage] = anon_sym_COLONlanguage,
  [anon_sym_COLONplatform] = anon_sym_COLONplatform,
  [sym__lang] = sym__lang,
  [sym__os] = sym__lang,
  [sym__eol] = sym__eol,
  [sym__equals_begin] = sym__equals_begin,
  [sym__equals_end] = sym__equals_begin,
  [sym__dashes] = sym__equals_begin,
  [sym_file] = sym_file,
  [sym_test] = sym_test,
  [aux_sym__body] = aux_sym__body,
  [sym_header] = sym_header,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_custom_attr] = sym_custom_attr,
  [sym__language] = sym__language,
  [sym__platform] = sym__platform,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_custom_attr_repeat1] = aux_sym_custom_attr_repeat1,
  [alias_sym_input] = alias_sym_input,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_output] = alias_sym_output,
  [alias_sym_value] = alias_sym_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLONskip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfail_DASHfast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_custom_attr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_custom_attr_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONlanguage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONplatform] = {
    .visible = true,
    .named = false,
  },
  [sym__lang] = {
    .visible = true,
    .named = true,
  },
  [sym__os] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__equals_begin] = {
    .visible = true,
    .named = true,
  },
  [sym__equals_end] = {
    .visible = true,
    .named = true,
  },
  [sym__dashes] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__body] = {
    .visible = false,
    .named = false,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__language] = {
    .visible = false,
    .named = true,
  },
  [sym__platform] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_attr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_input] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_output] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_language = 1,
  field_platform = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
  [field_platform] = "platform",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_language, 0, .inherited = true},
  [1] =
    {field_platform, 0, .inherited = true},
  [2] =
    {field_language, 2},
  [3] =
    {field_platform, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = alias_sym_name,
  },
  [4] = {
    [1] = alias_sym_input,
  },
  [5] = {
    [1] = alias_sym_input,
    [3] = alias_sym_output,
  },
  [6] = {
    [2] = alias_sym_value,
    [3] = alias_sym_value,
  },
  [9] = {
    [2] = alias_sym_value,
    [3] = alias_sym_value,
    [4] = alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__body, 3,
    aux_sym__body,
    alias_sym_input,
    alias_sym_output,
  aux_sym_header_repeat1, 2,
    aux_sym_header_repeat1,
    alias_sym_name,
  aux_sym_custom_attr_repeat1, 2,
    aux_sym_custom_attr_repeat1,
    alias_sym_value,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 18,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'a', 107,
        'd', 118,
        'f', 119,
        'i', 112,
        'l', 102,
        'm', 87,
        'n', 95,
        'o', 117,
        's', 113,
        'w', 104,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'k') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'p') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLONskip);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLONskip);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLONerror);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLONerror);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLONfail_DASHfast);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLONfail_DASHfast);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_custom_attr_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_custom_attr_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_custom_attr_token2);
      if (lookahead == ')') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASH_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLONlanguage);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLONlanguage);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLONplatform);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLONplatform);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'a') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'a') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'b') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'c') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'd') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'd') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'f') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'g') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'i') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'i') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'o') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'o') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'p') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 's') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'u') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'w') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'x') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__os);
      if (lookahead == 'y') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__os);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(130);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 34, .external_lex_state = 2},
  [2] = {.lex_state = 34, .external_lex_state = 3},
  [3] = {.lex_state = 34, .external_lex_state = 3},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 34, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 34, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 1, .external_lex_state = 3},
  [14] = {.lex_state = 1, .external_lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 3},
  [16] = {.lex_state = 34, .external_lex_state = 2},
  [17] = {.lex_state = 34, .external_lex_state = 2},
  [18] = {.lex_state = 35, .external_lex_state = 2},
  [19] = {.lex_state = 35, .external_lex_state = 2},
  [20] = {.lex_state = 35, .external_lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 35, .external_lex_state = 2},
  [24] = {.lex_state = 35, .external_lex_state = 4},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 35, .external_lex_state = 4},
  [27] = {.lex_state = 35, .external_lex_state = 4},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 34},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_custom_attr_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_custom_attr_token2] = ACTIONS(1),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__equals_begin] = ACTIONS(1),
    [sym__equals_end] = ACTIONS(1),
    [sym__dashes] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(38),
    [sym_test] = STATE(16),
    [sym_header] = STATE(28),
    [aux_sym_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__eol] = ACTIONS(5),
    [sym__equals_begin] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      sym__line,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_COLONlanguage,
    ACTIONS(17), 1,
      anon_sym_COLONplatform,
    ACTIONS(19), 1,
      sym__eol,
    ACTIONS(21), 1,
      sym__equals_end,
    STATE(6), 1,
      aux_sym_header_repeat1,
    STATE(9), 1,
      sym_custom_attr,
    STATE(12), 1,
      sym__language,
    STATE(13), 1,
      sym__platform,
    STATE(37), 1,
      sym_attributes,
    STATE(5), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(11), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [43] = 13,
    ACTIONS(9), 1,
      sym__line,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_COLONlanguage,
    ACTIONS(17), 1,
      anon_sym_COLONplatform,
    ACTIONS(19), 1,
      sym__eol,
    ACTIONS(23), 1,
      sym__equals_end,
    STATE(2), 1,
      aux_sym_header_repeat1,
    STATE(9), 1,
      sym_custom_attr,
    STATE(12), 1,
      sym__language,
    STATE(13), 1,
      sym__platform,
    STATE(40), 1,
      sym_attributes,
    STATE(5), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(11), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [86] = 10,
    ACTIONS(28), 1,
      anon_sym_COLON,
    ACTIONS(31), 1,
      anon_sym_COLONlanguage,
    ACTIONS(34), 1,
      anon_sym_COLONplatform,
    ACTIONS(37), 1,
      sym__eol,
    ACTIONS(40), 1,
      sym__equals_end,
    STATE(9), 1,
      sym_custom_attr,
    STATE(12), 1,
      sym__language,
    STATE(13), 1,
      sym__platform,
    STATE(4), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(25), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [120] = 10,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(44), 1,
      anon_sym_COLONlanguage,
    ACTIONS(46), 1,
      anon_sym_COLONplatform,
    ACTIONS(48), 1,
      sym__eol,
    ACTIONS(50), 1,
      sym__equals_end,
    STATE(9), 1,
      sym_custom_attr,
    STATE(12), 1,
      sym__language,
    STATE(13), 1,
      sym__platform,
    STATE(4), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(42), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [154] = 4,
    ACTIONS(52), 1,
      sym__line,
    STATE(6), 1,
      aux_sym_header_repeat1,
    ACTIONS(57), 2,
      sym__equals_end,
      sym__eol,
    ACTIONS(55), 6,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLON,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
  [173] = 3,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [189] = 2,
    ACTIONS(57), 2,
      sym__equals_end,
      sym__eol,
    ACTIONS(55), 7,
      sym__line,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLON,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
  [203] = 2,
    ACTIONS(67), 1,
      anon_sym_COLON,
    ACTIONS(65), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [216] = 2,
    ACTIONS(71), 1,
      anon_sym_COLON,
    ACTIONS(69), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [229] = 2,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(73), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [242] = 2,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(77), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [255] = 2,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(81), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [268] = 2,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(85), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [281] = 2,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(89), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [294] = 5,
    ACTIONS(7), 1,
      sym__equals_begin,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym__eol,
    STATE(28), 1,
      sym_header,
    STATE(17), 2,
      sym_test,
      aux_sym_file_repeat1,
  [311] = 5,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym__eol,
    ACTIONS(102), 1,
      sym__equals_begin,
    STATE(28), 1,
      sym_header,
    STATE(17), 2,
      sym_test,
      aux_sym_file_repeat1,
  [328] = 3,
    STATE(18), 1,
      aux_sym__body,
    ACTIONS(105), 2,
      sym__equals_begin,
      ts_builtin_sym_end,
    ACTIONS(107), 2,
      sym__line,
      sym__eol,
  [340] = 3,
    STATE(18), 1,
      aux_sym__body,
    ACTIONS(110), 2,
      sym__equals_begin,
      ts_builtin_sym_end,
    ACTIONS(112), 2,
      sym__line,
      sym__eol,
  [352] = 3,
    STATE(19), 1,
      aux_sym__body,
    ACTIONS(112), 2,
      sym__line,
      sym__eol,
    ACTIONS(114), 2,
      sym__equals_begin,
      ts_builtin_sym_end,
  [364] = 4,
    ACTIONS(116), 1,
      aux_sym_custom_attr_token2,
    ACTIONS(119), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_custom_attr_repeat1,
  [377] = 4,
    ACTIONS(124), 1,
      aux_sym_custom_attr_token2,
    ACTIONS(126), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_custom_attr_repeat1,
  [390] = 1,
    ACTIONS(130), 4,
      sym__equals_begin,
      ts_builtin_sym_end,
      sym__line,
      sym__eol,
  [397] = 3,
    ACTIONS(105), 1,
      sym__dashes,
    STATE(24), 1,
      aux_sym__body,
    ACTIONS(132), 2,
      sym__line,
      sym__eol,
  [408] = 4,
    ACTIONS(124), 1,
      aux_sym_custom_attr_token2,
    ACTIONS(126), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_custom_attr_repeat1,
  [421] = 3,
    ACTIONS(139), 1,
      sym__dashes,
    STATE(24), 1,
      aux_sym__body,
    ACTIONS(137), 2,
      sym__line,
      sym__eol,
  [432] = 1,
    ACTIONS(130), 3,
      sym__dashes,
      sym__line,
      sym__eol,
  [438] = 2,
    STATE(26), 1,
      aux_sym__body,
    ACTIONS(137), 2,
      sym__line,
      sym__eol,
  [446] = 2,
    ACTIONS(141), 1,
      aux_sym_custom_attr_token2,
    ACTIONS(143), 2,
      anon_sym_BSLASH_RPAREN,
      anon_sym_RPAREN,
  [454] = 1,
    ACTIONS(145), 2,
      sym__line,
      sym__eol,
  [459] = 1,
    ACTIONS(147), 2,
      sym__line,
      sym__eol,
  [464] = 1,
    ACTIONS(149), 2,
      sym__line,
      sym__eol,
  [469] = 1,
    ACTIONS(151), 2,
      sym__line,
      sym__eol,
  [474] = 1,
    ACTIONS(153), 1,
      sym__lang,
  [478] = 1,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
  [482] = 1,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
  [486] = 1,
    ACTIONS(159), 1,
      sym__equals_end,
  [490] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [494] = 1,
    ACTIONS(163), 1,
      sym__os,
  [498] = 1,
    ACTIONS(165), 1,
      sym__equals_end,
  [502] = 1,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
  [506] = 1,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
  [510] = 1,
    ACTIONS(171), 1,
      aux_sym_custom_attr_token1,
  [514] = 1,
    ACTIONS(173), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 229,
  [SMALL_STATE(12)] = 242,
  [SMALL_STATE(13)] = 255,
  [SMALL_STATE(14)] = 268,
  [SMALL_STATE(15)] = 281,
  [SMALL_STATE(16)] = 294,
  [SMALL_STATE(17)] = 311,
  [SMALL_STATE(18)] = 328,
  [SMALL_STATE(19)] = 340,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 364,
  [SMALL_STATE(22)] = 377,
  [SMALL_STATE(23)] = 390,
  [SMALL_STATE(24)] = 397,
  [SMALL_STATE(25)] = 408,
  [SMALL_STATE(26)] = 421,
  [SMALL_STATE(27)] = 432,
  [SMALL_STATE(28)] = 438,
  [SMALL_STATE(29)] = 446,
  [SMALL_STATE(30)] = 454,
  [SMALL_STATE(31)] = 459,
  [SMALL_STATE(32)] = 464,
  [SMALL_STATE(33)] = 469,
  [SMALL_STATE(34)] = 474,
  [SMALL_STATE(35)] = 478,
  [SMALL_STATE(36)] = 482,
  [SMALL_STATE(37)] = 486,
  [SMALL_STATE(38)] = 490,
  [SMALL_STATE(39)] = 494,
  [SMALL_STATE(40)] = 498,
  [SMALL_STATE(41)] = 502,
  [SMALL_STATE(42)] = 506,
  [SMALL_STATE(43)] = 510,
  [SMALL_STATE(44)] = 514,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_attr, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_attr, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__platform, 4, 0, 8),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__platform, 4, 0, 8),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__language, 4, 0, 7),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__language, 4, 0, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_attr, 5, 0, 9),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_attr, 5, 0, 9),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_attr, 4, 0, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_attr, 4, 0, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(23),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, 0, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, 0, 4),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_attr_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_attr_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_attr_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_attr_repeat1, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_attr_repeat1, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__equals_begin = 0,
  ts_external_token__equals_end = 1,
  ts_external_token__dashes = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__equals_begin] = sym__equals_begin,
  [ts_external_token__equals_end] = sym__equals_end,
  [ts_external_token__dashes] = sym__dashes,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__equals_begin] = true,
    [ts_external_token__equals_end] = true,
    [ts_external_token__dashes] = true,
  },
  [2] = {
    [ts_external_token__equals_begin] = true,
  },
  [3] = {
    [ts_external_token__equals_end] = true,
  },
  [4] = {
    [ts_external_token__dashes] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_test_external_scanner_create(void);
void tree_sitter_test_external_scanner_destroy(void *);
bool tree_sitter_test_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_test_external_scanner_serialize(void *, char *);
void tree_sitter_test_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_test(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_test_external_scanner_create,
      tree_sitter_test_external_scanner_destroy,
      tree_sitter_test_external_scanner_scan,
      tree_sitter_test_external_scanner_serialize,
      tree_sitter_test_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
