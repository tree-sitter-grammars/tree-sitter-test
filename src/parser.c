#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 3
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_test_token1 = 1,
  aux_sym_header_token1 = 2,
  sym__equals = 3,
  sym__dashes = 4,
  sym_file = 5,
  sym_test = 6,
  sym_header = 7,
  aux_sym_file_repeat1 = 8,
  aux_sym_test_repeat1 = 9,
  aux_sym_header_repeat1 = 10,
  alias_sym_input = 11,
  alias_sym_name = 12,
  alias_sym_output = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_test_token1] = "test_token1",
  [aux_sym_header_token1] = "header_token1",
  [sym__equals] = "separator",
  [sym__dashes] = "separator",
  [sym_file] = "file",
  [sym_test] = "test",
  [sym_header] = "header",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_test_repeat1] = "test_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [alias_sym_input] = "input",
  [alias_sym_name] = "name",
  [alias_sym_output] = "output",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_test_token1] = aux_sym_test_token1,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [sym__equals] = sym__equals,
  [sym__dashes] = sym__equals,
  [sym_file] = sym_file,
  [sym_test] = sym_test,
  [sym_header] = sym_header,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_test_repeat1] = aux_sym_test_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_name,
  },
  [2] = {
    [1] = alias_sym_input,
  },
  [3] = {
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
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '=') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(2)
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_test_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_test_token1);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_header_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__equals);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__dashes);
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_header_token1] = ACTIONS(1),
    [sym__equals] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(16),
    [sym_test] = STATE(2),
    [sym_header] = STATE(13),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__equals] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym__equals,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_header,
    STATE(3), 2,
      sym_test,
      aux_sym_file_repeat1,
  [14] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym__equals,
    STATE(13), 1,
      sym_header,
    STATE(3), 2,
      sym_test,
      aux_sym_file_repeat1,
  [28] = 4,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      aux_sym_test_token1,
    ACTIONS(18), 1,
      sym__equals,
    STATE(5), 1,
      aux_sym_test_repeat1,
  [41] = 4,
    ACTIONS(16), 1,
      aux_sym_test_token1,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      sym__equals,
    STATE(6), 1,
      aux_sym_test_repeat1,
  [54] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      aux_sym_test_token1,
    ACTIONS(29), 1,
      sym__equals,
    STATE(6), 1,
      aux_sym_test_repeat1,
  [67] = 3,
    ACTIONS(31), 1,
      aux_sym_header_token1,
    ACTIONS(33), 1,
      sym__equals,
    STATE(9), 1,
      aux_sym_header_repeat1,
  [77] = 3,
    ACTIONS(35), 1,
      aux_sym_test_token1,
    ACTIONS(37), 1,
      sym__dashes,
    STATE(10), 1,
      aux_sym_test_repeat1,
  [87] = 3,
    ACTIONS(39), 1,
      aux_sym_header_token1,
    ACTIONS(42), 1,
      sym__equals,
    STATE(9), 1,
      aux_sym_header_repeat1,
  [97] = 3,
    ACTIONS(29), 1,
      sym__dashes,
    ACTIONS(44), 1,
      aux_sym_test_token1,
    STATE(10), 1,
      aux_sym_test_repeat1,
  [107] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      aux_sym_test_token1,
      sym__equals,
  [115] = 2,
    ACTIONS(51), 1,
      aux_sym_header_token1,
    STATE(7), 1,
      aux_sym_header_repeat1,
  [122] = 2,
    ACTIONS(53), 1,
      aux_sym_test_token1,
    STATE(8), 1,
      aux_sym_test_repeat1,
  [129] = 2,
    ACTIONS(55), 1,
      aux_sym_header_token1,
    ACTIONS(57), 1,
      sym__equals,
  [136] = 1,
    ACTIONS(49), 2,
      aux_sym_test_token1,
      sym__dashes,
  [141] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [145] = 1,
    ACTIONS(61), 1,
      aux_sym_test_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 77,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 97,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 115,
  [SMALL_STATE(13)] = 122,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 145,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(12),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, .production_id = 2),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3, .production_id = 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, .production_id = 3),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4, .production_id = 3),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 2), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_repeat1, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1),
  [59] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
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
