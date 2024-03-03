#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 3
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  aux_sym_test_token1 = 1,
  aux_sym_header_token1 = 2,
  sym_skip = 3,
  sym_error = 4,
  sym_fail_fast = 5,
  anon_sym_COLONlanguage = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COLONplatform = 9,
  sym__lang = 10,
  sym__os = 11,
  sym__equals = 12,
  sym__dashes = 13,
  sym_file = 14,
  sym_test = 15,
  sym_header = 16,
  sym_attributes = 17,
  sym_language = 18,
  sym_platform = 19,
  aux_sym_file_repeat1 = 20,
  aux_sym_test_repeat1 = 21,
  aux_sym_header_repeat1 = 22,
  aux_sym_attributes_repeat1 = 23,
  alias_sym_input = 24,
  alias_sym_name = 25,
  alias_sym_output = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_test_token1] = "test_token1",
  [aux_sym_header_token1] = "header_token1",
  [sym_skip] = "skip",
  [sym_error] = "error",
  [sym_fail_fast] = "fail_fast",
  [anon_sym_COLONlanguage] = ":language",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLONplatform] = ":platform",
  [sym__lang] = "parameter",
  [sym__os] = "parameter",
  [sym__equals] = "separator",
  [sym__dashes] = "separator",
  [sym_file] = "file",
  [sym_test] = "test",
  [sym_header] = "header",
  [sym_attributes] = "attributes",
  [sym_language] = "language",
  [sym_platform] = "platform",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_test_repeat1] = "test_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [alias_sym_input] = "input",
  [alias_sym_name] = "name",
  [alias_sym_output] = "output",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_test_token1] = aux_sym_test_token1,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [sym_skip] = sym_skip,
  [sym_error] = sym_error,
  [sym_fail_fast] = sym_fail_fast,
  [anon_sym_COLONlanguage] = anon_sym_COLONlanguage,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLONplatform] = anon_sym_COLONplatform,
  [sym__lang] = sym__lang,
  [sym__os] = sym__lang,
  [sym__equals] = sym__equals,
  [sym__dashes] = sym__equals,
  [sym_file] = sym_file,
  [sym_test] = sym_test,
  [sym_header] = sym_header,
  [sym_attributes] = sym_attributes,
  [sym_language] = sym_language,
  [sym_platform] = sym_platform,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_test_repeat1] = aux_sym_test_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [alias_sym_input] = alias_sym_input,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_output] = alias_sym_output,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_test_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_skip] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_fail_fast] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLONlanguage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym__equals] = {
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
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_platform] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_repeat1] = {
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
};

enum ts_field_identifiers {
  field_attribute = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attribute] = "attribute",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attribute, 0},
  [1] =
    {field_attribute, 0, .inherited = true},
  [2] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = alias_sym_name,
  },
  [4] = {
    [1] = alias_sym_input,
  },
  [6] = {
    [1] = alias_sym_input,
    [3] = alias_sym_output,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_test_repeat1, 3,
    aux_sym_test_repeat1,
    alias_sym_input,
    alias_sym_output,
  aux_sym_header_repeat1, 2,
    aux_sym_header_repeat1,
    alias_sym_name,
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
  [17] = 14,
  [18] = 18,
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(81)
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(85);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') ADVANCE(85);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 78:
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 79:
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 81:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(82)
      END_STATE();
    case 82:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(81)
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(83)
      if (lookahead == '\r') ADVANCE(85);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_test_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_test_token1);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_header_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_skip);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_fail_fast);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLONlanguage);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLONplatform);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__lang);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__os);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__equals);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__dashes);
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 83},
  [13] = {.lex_state = 83},
  [14] = {.lex_state = 83},
  [15] = {.lex_state = 83},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_header_token1] = ACTIONS(1),
    [sym_skip] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
    [sym_fail_fast] = ACTIONS(1),
    [anon_sym_COLONlanguage] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLONplatform] = ACTIONS(1),
    [sym__lang] = ACTIONS(1),
    [sym__equals] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(27),
    [sym_test] = STATE(10),
    [sym_header] = STATE(20),
    [aux_sym_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__equals] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      aux_sym_header_token1,
    ACTIONS(11), 1,
      anon_sym_COLONlanguage,
    ACTIONS(13), 1,
      anon_sym_COLONplatform,
    ACTIONS(15), 1,
      sym__equals,
    STATE(4), 1,
      aux_sym_attributes_repeat1,
    STATE(5), 1,
      aux_sym_header_repeat1,
    STATE(28), 1,
      sym_attributes,
    STATE(7), 2,
      sym_language,
      sym_platform,
    ACTIONS(9), 3,
      sym_skip,
      sym_error,
      sym_fail_fast,
  [31] = 6,
    ACTIONS(20), 1,
      anon_sym_COLONlanguage,
    ACTIONS(23), 1,
      anon_sym_COLONplatform,
    ACTIONS(26), 1,
      sym__equals,
    STATE(3), 1,
      aux_sym_attributes_repeat1,
    STATE(7), 2,
      sym_language,
      sym_platform,
    ACTIONS(17), 3,
      sym_skip,
      sym_error,
      sym_fail_fast,
  [53] = 6,
    ACTIONS(11), 1,
      anon_sym_COLONlanguage,
    ACTIONS(13), 1,
      anon_sym_COLONplatform,
    ACTIONS(28), 1,
      sym__equals,
    STATE(3), 1,
      aux_sym_attributes_repeat1,
    STATE(7), 2,
      sym_language,
      sym_platform,
    ACTIONS(9), 3,
      sym_skip,
      sym_error,
      sym_fail_fast,
  [75] = 3,
    ACTIONS(30), 1,
      aux_sym_header_token1,
    STATE(5), 1,
      aux_sym_header_repeat1,
    ACTIONS(33), 6,
      sym_skip,
      sym_error,
      sym_fail_fast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__equals,
  [90] = 2,
    ACTIONS(35), 1,
      aux_sym_header_token1,
    ACTIONS(37), 6,
      sym_skip,
      sym_error,
      sym_fail_fast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__equals,
  [102] = 1,
    ACTIONS(39), 6,
      sym_skip,
      sym_error,
      sym_fail_fast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__equals,
  [111] = 1,
    ACTIONS(41), 6,
      sym_skip,
      sym_error,
      sym_fail_fast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__equals,
  [120] = 1,
    ACTIONS(43), 6,
      sym_skip,
      sym_error,
      sym_fail_fast,
      anon_sym_COLONlanguage,
      anon_sym_COLONplatform,
      sym__equals,
  [129] = 4,
    ACTIONS(5), 1,
      sym__equals,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_header,
    STATE(11), 2,
      sym_test,
      aux_sym_file_repeat1,
  [143] = 4,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym__equals,
    STATE(20), 1,
      sym_header,
    STATE(11), 2,
      sym_test,
      aux_sym_file_repeat1,
  [157] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_test_token1,
    ACTIONS(56), 1,
      sym__equals,
    STATE(14), 1,
      aux_sym_test_repeat1,
  [170] = 4,
    ACTIONS(54), 1,
      aux_sym_test_token1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym__equals,
    STATE(12), 1,
      aux_sym_test_repeat1,
  [183] = 4,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_test_token1,
    ACTIONS(67), 1,
      sym__equals,
    STATE(14), 1,
      aux_sym_test_repeat1,
  [196] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 2,
      aux_sym_test_token1,
      sym__equals,
  [204] = 3,
    ACTIONS(73), 1,
      aux_sym_test_token1,
    ACTIONS(75), 1,
      sym__dashes,
    STATE(17), 1,
      aux_sym_test_repeat1,
  [214] = 3,
    ACTIONS(67), 1,
      sym__dashes,
    ACTIONS(77), 1,
      aux_sym_test_token1,
    STATE(17), 1,
      aux_sym_test_repeat1,
  [224] = 2,
    ACTIONS(80), 1,
      aux_sym_header_token1,
    STATE(2), 1,
      aux_sym_header_repeat1,
  [231] = 1,
    ACTIONS(71), 2,
      aux_sym_test_token1,
      sym__dashes,
  [236] = 2,
    ACTIONS(82), 1,
      aux_sym_test_token1,
    STATE(16), 1,
      aux_sym_test_repeat1,
  [243] = 1,
    ACTIONS(84), 1,
      aux_sym_test_token1,
  [247] = 1,
    ACTIONS(86), 1,
      aux_sym_test_token1,
  [251] = 1,
    ACTIONS(88), 1,
      sym__lang,
  [255] = 1,
    ACTIONS(90), 1,
      sym__os,
  [259] = 1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
  [263] = 1,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
  [267] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [271] = 1,
    ACTIONS(98), 1,
      sym__equals,
  [275] = 1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
  [279] = 1,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 236,
  [SMALL_STATE(21)] = 243,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 251,
  [SMALL_STATE(24)] = 255,
  [SMALL_STATE(25)] = 259,
  [SMALL_STATE(26)] = 263,
  [SMALL_STATE(27)] = 267,
  [SMALL_STATE(28)] = 271,
  [SMALL_STATE(29)] = 275,
  [SMALL_STATE(30)] = 279,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, .production_id = 5), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, .production_id = 5), SHIFT_REPEAT(30),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, .production_id = 5), SHIFT_REPEAT(29),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, .production_id = 5),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, .production_id = 3),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(18),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, .production_id = 6),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4, .production_id = 6),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, .production_id = 4),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3, .production_id = 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(15),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_repeat1, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(19),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TS_PUBLIC
#undef TS_PUBLIC
#endif

#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_test() {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
