#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
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
  aux_sym_unknown_attr_token1 = 6,
  anon_sym_LPAREN = 7,
  aux_sym_unknown_attr_token2 = 8,
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
  sym_unknown_attr = 25,
  sym__language = 26,
  sym__platform = 27,
  aux_sym_file_repeat1 = 28,
  aux_sym_attributes_repeat1 = 29,
  aux_sym_unknown_attr_repeat1 = 30,
  alias_sym_input = 31,
  alias_sym_name = 32,
  alias_sym_output = 33,
  alias_sym_value = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__line] = "_line",
  [anon_sym_COLONskip] = ":skip",
  [anon_sym_COLONerror] = ":error",
  [anon_sym_COLONfail_DASHfast] = ":fail-fast",
  [anon_sym_COLON] = ":",
  [aux_sym_unknown_attr_token1] = "unknown_attr_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_unknown_attr_token2] = "unknown_attr_token2",
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
  [sym_unknown_attr] = "unknown_attr",
  [sym__language] = "_language",
  [sym__platform] = "_platform",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_unknown_attr_repeat1] = "unknown_attr_repeat1",
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
  [aux_sym_unknown_attr_token1] = aux_sym_unknown_attr_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_unknown_attr_token2] = aux_sym_unknown_attr_token2,
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
  [sym_unknown_attr] = sym_unknown_attr,
  [sym__language] = sym__language,
  [sym__platform] = sym__platform,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_unknown_attr_repeat1] = aux_sym_unknown_attr_repeat1,
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
  [aux_sym_unknown_attr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unknown_attr_token2] = {
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
  [sym_unknown_attr] = {
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
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unknown_attr_repeat1] = {
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
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
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
  [1] = {
    [1] = alias_sym_input,
  },
  [2] = {
    [1] = alias_sym_name,
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
  aux_sym_unknown_attr_repeat1, 2,
    aux_sym_unknown_attr_repeat1,
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
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 21,
  [26] = 26,
  [27] = 27,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '\n', 94,
        '\r', 95,
        '(', 85,
        ':', 83,
        'a', 39,
        'd', 60,
        'f', 56,
        'i', 45,
        'l', 28,
        'm', 3,
        'n', 16,
        'o', 53,
        's', 51,
        'w', 32,
      );
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(95);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLONskip);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLONerror);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLONfail_DASHfast);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_unknown_attr_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_unknown_attr_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_unknown_attr_token2);
      if (lookahead == ')') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BSLASH_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLONlanguage);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLONplatform);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__os);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 75, .external_lex_state = 2},
  [2] = {.lex_state = 75, .external_lex_state = 3},
  [3] = {.lex_state = 75, .external_lex_state = 3},
  [4] = {.lex_state = 75, .external_lex_state = 3},
  [5] = {.lex_state = 75, .external_lex_state = 3},
  [6] = {.lex_state = 75, .external_lex_state = 3},
  [7] = {.lex_state = 75, .external_lex_state = 3},
  [8] = {.lex_state = 75, .external_lex_state = 3},
  [9] = {.lex_state = 75, .external_lex_state = 3},
  [10] = {.lex_state = 75, .external_lex_state = 3},
  [11] = {.lex_state = 75, .external_lex_state = 3},
  [12] = {.lex_state = 75, .external_lex_state = 3},
  [13] = {.lex_state = 75, .external_lex_state = 2},
  [14] = {.lex_state = 75, .external_lex_state = 2},
  [15] = {.lex_state = 76, .external_lex_state = 2},
  [16] = {.lex_state = 76, .external_lex_state = 2},
  [17] = {.lex_state = 76, .external_lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 76, .external_lex_state = 4},
  [20] = {.lex_state = 76, .external_lex_state = 4},
  [21] = {.lex_state = 76, .external_lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 76, .external_lex_state = 4},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 75},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 75},
  [39] = {.lex_state = 73},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_unknown_attr_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_unknown_attr_token2] = ACTIONS(1),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__equals_begin] = ACTIONS(1),
    [sym__equals_end] = ACTIONS(1),
    [sym__dashes] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(30),
    [sym_test] = STATE(14),
    [sym_header] = STATE(26),
    [aux_sym_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__eol] = ACTIONS(5),
    [sym__equals_begin] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_COLONlanguage,
    ACTIONS(15), 1,
      anon_sym_COLONplatform,
    ACTIONS(17), 1,
      sym__eol,
    ACTIONS(19), 1,
      sym__equals_end,
    STATE(6), 1,
      sym__platform,
    STATE(7), 1,
      sym_unknown_attr,
    STATE(11), 1,
      sym__language,
    STATE(36), 1,
      sym_attributes,
    STATE(4), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [37] = 10,
    ACTIONS(24), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLONlanguage,
    ACTIONS(30), 1,
      anon_sym_COLONplatform,
    ACTIONS(33), 1,
      sym__eol,
    ACTIONS(36), 1,
      sym__equals_end,
    STATE(6), 1,
      sym__platform,
    STATE(7), 1,
      sym_unknown_attr,
    STATE(11), 1,
      sym__language,
    STATE(3), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(21), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [71] = 10,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_COLONlanguage,
    ACTIONS(15), 1,
      anon_sym_COLONplatform,
    ACTIONS(38), 1,
      sym__eol,
    ACTIONS(40), 1,
      sym__equals_end,
    STATE(6), 1,
      sym__platform,
    STATE(7), 1,
      sym_unknown_attr,
    STATE(11), 1,
      sym__language,
    STATE(3), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [105] = 3,
    ACTIONS(44), 1,
      anon_sym_COLON,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [121] = 2,
    ACTIONS(50), 1,
      anon_sym_COLON,
    ACTIONS(48), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [134] = 2,
    ACTIONS(54), 1,
      anon_sym_COLON,
    ACTIONS(52), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [147] = 2,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(56), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [160] = 2,
    ACTIONS(62), 1,
      anon_sym_COLON,
    ACTIONS(60), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [173] = 2,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(64), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [186] = 2,
    ACTIONS(70), 1,
      anon_sym_COLON,
    ACTIONS(68), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [199] = 2,
    ACTIONS(74), 1,
      anon_sym_COLON,
    ACTIONS(72), 7,
      sym__equals_end,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__eol,
  [212] = 5,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym__eol,
    ACTIONS(81), 1,
      sym__equals_begin,
    STATE(26), 1,
      sym_header,
    STATE(13), 2,
      sym_test,
      aux_sym_file_repeat1,
  [229] = 5,
    ACTIONS(7), 1,
      sym__equals_begin,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      sym__eol,
    STATE(26), 1,
      sym_header,
    STATE(13), 2,
      sym_test,
      aux_sym_file_repeat1,
  [246] = 3,
    STATE(15), 1,
      aux_sym__body,
    ACTIONS(88), 2,
      sym__equals_begin,
      ts_builtin_sym_end,
    ACTIONS(90), 2,
      sym__line,
      sym__eol,
  [258] = 3,
    STATE(17), 1,
      aux_sym__body,
    ACTIONS(93), 2,
      sym__equals_begin,
      ts_builtin_sym_end,
    ACTIONS(95), 2,
      sym__line,
      sym__eol,
  [270] = 3,
    STATE(15), 1,
      aux_sym__body,
    ACTIONS(95), 2,
      sym__line,
      sym__eol,
    ACTIONS(97), 2,
      sym__equals_begin,
      ts_builtin_sym_end,
  [282] = 4,
    ACTIONS(99), 1,
      aux_sym_unknown_attr_token2,
    ACTIONS(101), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_unknown_attr_repeat1,
  [295] = 3,
    ACTIONS(107), 1,
      sym__dashes,
    STATE(20), 1,
      aux_sym__body,
    ACTIONS(105), 2,
      sym__line,
      sym__eol,
  [306] = 3,
    ACTIONS(88), 1,
      sym__dashes,
    STATE(20), 1,
      aux_sym__body,
    ACTIONS(109), 2,
      sym__line,
      sym__eol,
  [317] = 1,
    ACTIONS(112), 4,
      sym__equals_begin,
      ts_builtin_sym_end,
      sym__line,
      sym__eol,
  [324] = 4,
    ACTIONS(114), 1,
      aux_sym_unknown_attr_token2,
    ACTIONS(117), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_unknown_attr_repeat1,
  [337] = 4,
    ACTIONS(99), 1,
      aux_sym_unknown_attr_token2,
    ACTIONS(101), 1,
      anon_sym_BSLASH_RPAREN,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_unknown_attr_repeat1,
  [350] = 2,
    ACTIONS(124), 1,
      aux_sym_unknown_attr_token2,
    ACTIONS(126), 2,
      anon_sym_BSLASH_RPAREN,
      anon_sym_RPAREN,
  [358] = 1,
    ACTIONS(112), 3,
      sym__dashes,
      sym__line,
      sym__eol,
  [364] = 2,
    STATE(19), 1,
      aux_sym__body,
    ACTIONS(105), 2,
      sym__line,
      sym__eol,
  [372] = 1,
    ACTIONS(128), 2,
      sym__line,
      sym__eol,
  [377] = 1,
    ACTIONS(130), 2,
      sym__line,
      sym__eol,
  [382] = 1,
    ACTIONS(132), 1,
      sym__os,
  [386] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [390] = 1,
    ACTIONS(136), 1,
      sym__lang,
  [394] = 1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
  [398] = 1,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [402] = 1,
    ACTIONS(142), 1,
      sym__eol,
  [406] = 1,
    ACTIONS(144), 1,
      sym__line,
  [410] = 1,
    ACTIONS(146), 1,
      sym__equals_end,
  [414] = 1,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
  [418] = 1,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
  [422] = 1,
    ACTIONS(152), 1,
      aux_sym_unknown_attr_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 229,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 258,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 282,
  [SMALL_STATE(19)] = 295,
  [SMALL_STATE(20)] = 306,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 324,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 350,
  [SMALL_STATE(25)] = 358,
  [SMALL_STATE(26)] = 364,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 377,
  [SMALL_STATE(29)] = 382,
  [SMALL_STATE(30)] = 386,
  [SMALL_STATE(31)] = 390,
  [SMALL_STATE(32)] = 394,
  [SMALL_STATE(33)] = 398,
  [SMALL_STATE(34)] = 402,
  [SMALL_STATE(35)] = 406,
  [SMALL_STATE(36)] = 410,
  [SMALL_STATE(37)] = 414,
  [SMALL_STATE(38)] = 418,
  [SMALL_STATE(39)] = 422,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_attr, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_attr, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_attr, 5, 0, 9),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_attr, 5, 0, 9),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__platform, 4, 0, 8),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__platform, 4, 0, 8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__language, 4, 0, 7),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__language, 4, 0, 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_attr, 4, 0, 6),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_attr, 4, 0, 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, 0, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, 0, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(25),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unknown_attr_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unknown_attr_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_attr_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unknown_attr_repeat1, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_attr_repeat1, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
