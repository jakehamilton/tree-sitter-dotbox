#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_EQ = 1,
  sym_true = 2,
  sym_false = 3,
  sym_identifier = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_string_content_token1 = 6,
  sym_escape_sequence = 7,
  sym_number = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym_comment = 13,
  sym_document = 14,
  sym__value = 15,
  sym_pair = 16,
  sym_string = 17,
  sym_string_content = 18,
  sym_set = 19,
  sym_list = 20,
  aux_sym_document_repeat1 = 21,
  aux_sym_string_content_repeat1 = 22,
  aux_sym_list_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_pair] = "pair",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_set] = "set",
  [sym_list] = "list",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_pair] = sym_pair,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_set] = sym_set,
  [sym_list] = sym_list,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(34),
    [sym_pair] = STATE(18),
    [sym_string] = STATE(31),
    [aux_sym_document_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(5),
    [sym_string] = STATE(5),
    [sym_set] = STATE(5),
    [sym_list] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(6),
    [sym_string] = STATE(6),
    [sym_set] = STATE(6),
    [sym_list] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(2),
    [sym_string] = STATE(2),
    [sym_set] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__value] = STATE(5),
    [sym_string] = STATE(5),
    [sym_set] = STATE(5),
    [sym_list] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym_number] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [anon_sym_RBRACK] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__value] = STATE(5),
    [sym_string] = STATE(5),
    [sym_set] = STATE(5),
    [sym_list] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 3,
      sym_true,
      sym_false,
      sym_number,
    STATE(29), 4,
      sym__value,
      sym_string,
      sym_set,
      sym_list,
  [24] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 7,
      sym_true,
      sym_false,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [37] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [58] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      sym_true,
      sym_false,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [71] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 7,
      sym_true,
      sym_false,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [84] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 7,
      sym_true,
      sym_false,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [97] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 7,
      sym_true,
      sym_false,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 7,
      sym_true,
      sym_false,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_string,
    STATE(17), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_string,
    STATE(19), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_string,
    STATE(9), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [183] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_string,
    STATE(9), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_string,
    STATE(9), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [234] = 5,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_string_content_repeat1,
    STATE(33), 1,
      sym_string_content,
    ACTIONS(83), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [251] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_string_content_repeat1,
    STATE(32), 1,
      sym_string_content,
    ACTIONS(83), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [319] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(91), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [343] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(98), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_EQ,
  [364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
  [371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
  [378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 24,
  [SMALL_STATE(9)] = 37,
  [SMALL_STATE(10)] = 58,
  [SMALL_STATE(11)] = 71,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 123,
  [SMALL_STATE(16)] = 143,
  [SMALL_STATE(17)] = 163,
  [SMALL_STATE(18)] = 183,
  [SMALL_STATE(19)] = 203,
  [SMALL_STATE(20)] = 223,
  [SMALL_STATE(21)] = 234,
  [SMALL_STATE(22)] = 251,
  [SMALL_STATE(23)] = 268,
  [SMALL_STATE(24)] = 279,
  [SMALL_STATE(25)] = 289,
  [SMALL_STATE(26)] = 299,
  [SMALL_STATE(27)] = 309,
  [SMALL_STATE(28)] = 319,
  [SMALL_STATE(29)] = 333,
  [SMALL_STATE(30)] = 343,
  [SMALL_STATE(31)] = 357,
  [SMALL_STATE(32)] = 364,
  [SMALL_STATE(33)] = 371,
  [SMALL_STATE(34)] = 378,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(22),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(28),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dotbox(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
