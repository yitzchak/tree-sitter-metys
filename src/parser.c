#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 20
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_text = 1,
  sym_open = 2,
  sym_code_sep = 3,
  sym_inline_code_sep = 4,
  sym_group_sep = 5,
  sym_close = 6,
  sym_parameters = 7,
  sym_code = 8,
  sym_document = 9,
  sym__chunk = 10,
  sym_chunk = 11,
  sym__group_contents = 12,
  sym__code_contents = 13,
  sym__inline_code_contents = 14,
  aux_sym_document_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_text] = "text",
  [sym_open] = "open",
  [sym_code_sep] = "code_sep",
  [sym_inline_code_sep] = "inline_code_sep",
  [sym_group_sep] = "group_sep",
  [sym_close] = "close",
  [sym_parameters] = "parameters",
  [sym_code] = "code",
  [sym_document] = "document",
  [sym__chunk] = "_chunk",
  [sym_chunk] = "chunk",
  [sym__group_contents] = "_group_contents",
  [sym__code_contents] = "_code_contents",
  [sym__inline_code_contents] = "_inline_code_contents",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_code_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_code_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_group_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym__group_contents] = {
    .visible = false,
    .named = true,
  },
  [sym__code_contents] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_code_contents] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_parameters);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(3);
      if (lookahead == '|')
        ADVANCE(4);
      if (lookahead == ':' ||
          lookahead == '@')
        ADVANCE(10);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_parameters);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '|')
        ADVANCE(4);
      if (lookahead == ':' ||
          lookahead == '@')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_parameters);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '|')
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_parameters);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == ':' ||
          lookahead == '@' ||
          lookahead == '|')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '\"')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_parameters);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == ':' ||
          lookahead == '@')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '|')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '|')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\"')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(7);
      if (lookahead == '|')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == ':' ||
          lookahead == '@')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '|')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '|')
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_code_sep);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '|')
        ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '|')
        ADVANCE(15);
      if (lookahead == ':' ||
          lookahead == '@')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_open);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_group_sep);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '|')
        ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_inline_code_sep);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_close);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '|')
        ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(23);
      ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '|')
        ADVANCE(15);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '|')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '|')
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_parameters);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '|')
        ADVANCE(5);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_parameters);
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '|')
        ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '@')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_code_sep);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_group_sep);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_inline_code_sep);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '|')
        ADVANCE(9);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '|')
        ADVANCE(9);
      END_STATE();
    case 34:
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '|')
        ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 34},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_text] = ACTIONS(3),
    [sym_open] = ACTIONS(3),
    [sym_code_sep] = ACTIONS(3),
    [sym_inline_code_sep] = ACTIONS(3),
    [sym_group_sep] = ACTIONS(3),
    [sym_close] = ACTIONS(3),
    [sym_parameters] = ACTIONS(3),
    [sym_code] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(3),
    [sym__chunk] = STATE(4),
    [sym_chunk] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
    [sym_open] = ACTIONS(9),
  },
  [2] = {
    [sym_parameters] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
  },
  [4] = {
    [sym__chunk] = STATE(6),
    [sym_chunk] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_text] = ACTIONS(17),
    [sym_open] = ACTIONS(9),
  },
  [5] = {
    [sym__group_contents] = STATE(10),
    [sym__code_contents] = STATE(10),
    [sym__inline_code_contents] = STATE(10),
    [sym_code_sep] = ACTIONS(19),
    [sym_inline_code_sep] = ACTIONS(21),
    [sym_group_sep] = ACTIONS(23),
  },
  [6] = {
    [sym__chunk] = STATE(6),
    [sym_chunk] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_text] = ACTIONS(27),
    [sym_open] = ACTIONS(30),
  },
  [7] = {
    [sym_code] = ACTIONS(33),
  },
  [8] = {
    [sym_code] = ACTIONS(35),
  },
  [9] = {
    [sym__chunk] = STATE(14),
    [sym_chunk] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [sym_text] = ACTIONS(37),
    [sym_open] = ACTIONS(39),
    [sym_close] = ACTIONS(41),
  },
  [10] = {
    [sym_close] = ACTIONS(43),
  },
  [11] = {
    [sym_close] = ACTIONS(45),
  },
  [12] = {
    [sym_close] = ACTIONS(47),
  },
  [13] = {
    [sym_parameters] = ACTIONS(49),
  },
  [14] = {
    [sym__chunk] = STATE(17),
    [sym_chunk] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [sym_text] = ACTIONS(51),
    [sym_open] = ACTIONS(39),
    [sym_close] = ACTIONS(53),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_text] = ACTIONS(57),
    [sym_open] = ACTIONS(57),
  },
  [16] = {
    [sym__group_contents] = STATE(18),
    [sym__code_contents] = STATE(18),
    [sym__inline_code_contents] = STATE(18),
    [sym_code_sep] = ACTIONS(19),
    [sym_inline_code_sep] = ACTIONS(21),
    [sym_group_sep] = ACTIONS(23),
  },
  [17] = {
    [sym__chunk] = STATE(17),
    [sym_chunk] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [sym_text] = ACTIONS(59),
    [sym_open] = ACTIONS(62),
    [sym_close] = ACTIONS(65),
  },
  [18] = {
    [sym_close] = ACTIONS(67),
  },
  [19] = {
    [sym_text] = ACTIONS(57),
    [sym_open] = ACTIONS(57),
    [sym_close] = ACTIONS(57),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(4),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.count = 1, .reusable = false}, SHIFT(11),
  [35] = {.count = 1, .reusable = false}, SHIFT(12),
  [37] = {.count = 1, .reusable = false}, SHIFT(14),
  [39] = {.count = 1, .reusable = false}, SHIFT(13),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym__group_contents, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(15),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym__code_contents, 2),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym__inline_code_contents, 2),
  [49] = {.count = 1, .reusable = false}, SHIFT(16),
  [51] = {.count = 1, .reusable = false}, SHIFT(17),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym__group_contents, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_chunk, 4),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_chunk, 4),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [65] = {.count = 1, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(19),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_metys() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
