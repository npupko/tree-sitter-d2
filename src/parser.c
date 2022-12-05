#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym__word = 1,
  sym__root_attr_key = 2,
  anon_sym_style = 3,
  anon_sym_shape = 4,
  anon_sym_label = 5,
  anon_sym_constraint = 6,
  anon_sym_icon = 7,
  anon_sym_width = 8,
  anon_sym_height = 9,
  anon_sym_opacity = 10,
  anon_sym_fill = 11,
  anon_sym_stroke = 12,
  anon_sym_stroke_DASHwidth = 13,
  anon_sym_stroke_DASHdash = 14,
  anon_sym_border_DASHradius = 15,
  anon_sym_font_DASHcolor = 16,
  anon_sym_shadow = 17,
  anon_sym_multiple = 18,
  anon_sym_animated = 19,
  anon_sym_3d = 20,
  anon_sym_link = 21,
  sym__text_attr_key = 22,
  anon_sym_ = 23,
  anon_sym_COLON = 24,
  sym__dash = 25,
  anon_sym_DASH_DASH = 26,
  anon_sym_LT_DASH = 27,
  anon_sym_GT = 28,
  anon_sym_DASH_GT = 29,
  sym__unquoted_string = 30,
  anon_sym_SQUOTE = 31,
  aux_sym_string_token1 = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_string_token2 = 34,
  anon_sym_BQUOTE = 35,
  aux_sym_string_token3 = 36,
  anon_sym_SEMI = 37,
  anon_sym_LF = 38,
  anon_sym_2 = 39,
  sym_dot = 40,
  sym_source_file = 41,
  sym__definition = 42,
  sym_connection = 43,
  sym_shape = 44,
  sym_identifier = 45,
  sym_label = 46,
  sym_attr_value = 47,
  sym__root_attribute = 48,
  sym__style_attribute = 49,
  sym__shape_attribute = 50,
  sym__shape_attr_key = 51,
  sym__style_attr_key = 52,
  sym__identifier = 53,
  sym__colon = 54,
  sym_arrow = 55,
  sym_string = 56,
  sym__end = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_connection_repeat1 = 59,
  aux_sym_shape_repeat1 = 60,
  aux_sym__identifier_repeat1 = 61,
  aux_sym__identifier_repeat2 = 62,
  aux_sym_arrow_repeat1 = 63,
  aux_sym_string_repeat1 = 64,
  aux_sym_string_repeat2 = 65,
  aux_sym_string_repeat3 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [sym__root_attr_key] = "attr_key",
  [anon_sym_style] = "attr_key",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_opacity] = "opacity",
  [anon_sym_fill] = "fill",
  [anon_sym_stroke] = "stroke",
  [anon_sym_stroke_DASHwidth] = "stroke-width",
  [anon_sym_stroke_DASHdash] = "stroke-dash",
  [anon_sym_border_DASHradius] = "border-radius",
  [anon_sym_font_DASHcolor] = "font-color",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_3d] = "3d",
  [anon_sym_link] = "link",
  [sym__text_attr_key] = "_text_attr_key",
  [anon_sym_] = " ",
  [anon_sym_COLON] = ":",
  [sym__dash] = "_dash",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_2] = " ",
  [sym_dot] = "dot",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_connection] = "connection",
  [sym_shape] = "shape",
  [sym_identifier] = "identifier",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__root_attribute] = "_root_attribute",
  [sym__style_attribute] = "_style_attribute",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__identifier] = "_identifier",
  [sym__colon] = "_colon",
  [sym_arrow] = "arrow",
  [sym_string] = "string",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_shape_repeat1] = "shape_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__identifier_repeat2] = "_identifier_repeat2",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [sym__root_attr_key] = sym__root_attr_key,
  [anon_sym_style] = sym__root_attr_key,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_stroke_DASHwidth] = anon_sym_stroke_DASHwidth,
  [anon_sym_stroke_DASHdash] = anon_sym_stroke_DASHdash,
  [anon_sym_border_DASHradius] = anon_sym_border_DASHradius,
  [anon_sym_font_DASHcolor] = anon_sym_font_DASHcolor,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_link] = anon_sym_link,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_] = anon_sym_,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__dash] = sym__dash,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_2] = anon_sym_2,
  [sym_dot] = sym_dot,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_connection] = sym_connection,
  [sym_shape] = sym_shape,
  [sym_identifier] = sym_identifier,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__root_attribute] = sym__root_attribute,
  [sym__style_attribute] = sym__style_attribute,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__identifier] = sym__identifier,
  [sym__colon] = sym__colon,
  [sym_arrow] = sym_arrow,
  [sym_string] = sym_string,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_shape_repeat1] = aux_sym_shape_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__identifier_repeat2] = aux_sym__identifier_repeat2,
  [aux_sym_arrow_repeat1] = aux_sym_arrow_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHdash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHradius] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [sym__text_attr_key] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_connection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shape_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat3] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 8,
  [34] = 34,
  [35] = 35,
  [36] = 7,
  [37] = 37,
  [38] = 10,
  [39] = 18,
  [40] = 11,
  [41] = 17,
  [42] = 20,
  [43] = 12,
  [44] = 24,
  [45] = 19,
  [46] = 23,
  [47] = 21,
  [48] = 13,
  [49] = 14,
  [50] = 16,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 37,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 15,
  [67] = 67,
  [68] = 68,
  [69] = 15,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 87,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 75,
  [111] = 111,
  [112] = 112,
  [113] = 96,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 116,
  [121] = 119,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(90);
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '3') ADVANCE(122);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(161);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(161);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(109);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 87:
      if (eof) ADVANCE(90);
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '3') ADVANCE(122);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '`') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 88:
      if (eof) ADVANCE(90);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(159);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(119);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__root_attr_key);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 88},
  [3] = {.lex_state = 88},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 88},
  [6] = {.lex_state = 88},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 88},
  [52] = {.lex_state = 88},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 88},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 88},
  [70] = {.lex_state = 88},
  [71] = {.lex_state = 88},
  [72] = {.lex_state = 88},
  [73] = {.lex_state = 88},
  [74] = {.lex_state = 88},
  [75] = {.lex_state = 88},
  [76] = {.lex_state = 88},
  [77] = {.lex_state = 88},
  [78] = {.lex_state = 88},
  [79] = {.lex_state = 88},
  [80] = {.lex_state = 88},
  [81] = {.lex_state = 88},
  [82] = {.lex_state = 88},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 88},
  [85] = {.lex_state = 88},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 88},
  [88] = {.lex_state = 88},
  [89] = {.lex_state = 88},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 88},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 88},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 88},
  [99] = {.lex_state = 88},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 88},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 88},
  [114] = {.lex_state = 88},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 86},
  [117] = {.lex_state = 88},
  [118] = {.lex_state = 88},
  [119] = {.lex_state = 86},
  [120] = {.lex_state = 86},
  [121] = {.lex_state = 86},
  [122] = {.lex_state = 86},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 86},
  [125] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym__root_attr_key] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_3d] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(125),
    [sym__definition] = STATE(6),
    [sym_connection] = STATE(6),
    [sym_shape] = STATE(6),
    [sym_identifier] = STATE(4),
    [sym__root_attribute] = STATE(6),
    [sym__identifier] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym__identifier_repeat1] = STATE(71),
    [aux_sym__identifier_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [sym__root_attr_key] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(15), 1,
      anon_sym_style,
    ACTIONS(19), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__dash,
    STATE(37), 1,
      sym__identifier,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
    STATE(58), 1,
      sym_identifier,
    STATE(72), 1,
      aux_sym__identifier_repeat1,
    STATE(85), 1,
      sym__shape_attr_key,
    STATE(83), 2,
      sym__style_attribute,
      sym__shape_attribute,
    ACTIONS(17), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [40] = 11,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(15), 1,
      anon_sym_style,
    ACTIONS(19), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__dash,
    STATE(37), 1,
      sym__identifier,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
    STATE(58), 1,
      sym_identifier,
    STATE(72), 1,
      aux_sym__identifier_repeat1,
    STATE(85), 1,
      sym__shape_attr_key,
    STATE(86), 2,
      sym__style_attribute,
      sym__shape_attribute,
    ACTIONS(17), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [80] = 15,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      sym__dash,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LT_DASH,
    ACTIONS(33), 1,
      anon_sym_DASH_GT,
    ACTIONS(37), 1,
      sym_dot,
    STATE(27), 1,
      aux_sym_connection_repeat1,
    STATE(34), 1,
      aux_sym_shape_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(65), 1,
      sym__colon,
    STATE(70), 1,
      sym__end,
    STATE(99), 1,
      aux_sym__identifier_repeat1,
    STATE(111), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(35), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [128] = 10,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym__word,
    ACTIONS(44), 1,
      sym__root_attr_key,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(50), 1,
      sym__dash,
    STATE(4), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym__identifier_repeat2,
    STATE(37), 1,
      sym__identifier,
    STATE(71), 1,
      aux_sym__identifier_repeat1,
    STATE(5), 5,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      aux_sym_source_file_repeat1,
  [163] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      sym__root_attr_key,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym__identifier_repeat2,
    STATE(37), 1,
      sym__identifier,
    STATE(71), 1,
      aux_sym__identifier_repeat1,
    STATE(5), 5,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      aux_sym_source_file_repeat1,
  [198] = 6,
    ACTIONS(55), 1,
      sym__word,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(61), 1,
      sym__dash,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [224] = 6,
    ACTIONS(55), 1,
      sym__word,
    ACTIONS(63), 1,
      anon_sym_,
    ACTIONS(67), 1,
      sym__dash,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(65), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [250] = 3,
    ACTIONS(71), 1,
      anon_sym_stroke,
    STATE(82), 1,
      sym__style_attr_key,
    ACTIONS(69), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [270] = 6,
    ACTIONS(55), 1,
      sym__word,
    ACTIONS(73), 1,
      anon_sym_,
    ACTIONS(77), 1,
      sym__dash,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(75), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [296] = 3,
    ACTIONS(79), 1,
      sym__word,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(82), 10,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [315] = 4,
    ACTIONS(84), 1,
      sym__word,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(65), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [336] = 4,
    ACTIONS(84), 1,
      sym__word,
    ACTIONS(88), 1,
      anon_sym_,
    STATE(22), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(90), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [357] = 4,
    ACTIONS(84), 1,
      sym__word,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(90), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [378] = 3,
    ACTIONS(94), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(92), 10,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [397] = 4,
    ACTIONS(63), 1,
      anon_sym_,
    ACTIONS(84), 1,
      sym__word,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(65), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [418] = 5,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(101), 1,
      sym__dash,
    STATE(14), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(65), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [441] = 5,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(105), 1,
      sym__dash,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [464] = 4,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(84), 1,
      sym__word,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [485] = 5,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(107), 1,
      anon_sym_,
    ACTIONS(109), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(75), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [508] = 4,
    ACTIONS(84), 1,
      sym__word,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [529] = 3,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(111), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [547] = 1,
    ACTIONS(113), 11,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [561] = 1,
    ACTIONS(82), 11,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [575] = 3,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(65), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [593] = 3,
    ACTIONS(63), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(65), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [611] = 10,
    ACTIONS(27), 1,
      sym__dash,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LT_DASH,
    ACTIONS(33), 1,
      anon_sym_DASH_GT,
    ACTIONS(117), 1,
      anon_sym_LF,
    STATE(35), 1,
      aux_sym_connection_repeat1,
    STATE(54), 1,
      sym_arrow,
    STATE(80), 1,
      sym__end,
    STATE(111), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(115), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [643] = 5,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym__colon,
    STATE(99), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(119), 7,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [665] = 3,
    ACTIONS(88), 1,
      anon_sym_,
    STATE(22), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(90), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [683] = 3,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [701] = 3,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(90), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [719] = 3,
    ACTIONS(86), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [737] = 6,
    ACTIONS(63), 1,
      anon_sym_,
    ACTIONS(121), 1,
      sym__word,
    ACTIONS(123), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(65), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [760] = 8,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(127), 1,
      sym_dot,
    STATE(56), 1,
      aux_sym_shape_repeat1,
    STATE(63), 1,
      sym__colon,
    STATE(81), 1,
      sym__end,
    STATE(99), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [787] = 9,
    ACTIONS(129), 1,
      sym__dash,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(135), 1,
      anon_sym_LT_DASH,
    ACTIONS(138), 1,
      anon_sym_DASH_GT,
    ACTIONS(141), 1,
      anon_sym_LF,
    STATE(35), 1,
      aux_sym_connection_repeat1,
    STATE(54), 1,
      sym_arrow,
    STATE(111), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(119), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [816] = 6,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(121), 1,
      sym__word,
    ACTIONS(143), 1,
      sym__dash,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(59), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [839] = 1,
    ACTIONS(145), 10,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [852] = 6,
    ACTIONS(73), 1,
      anon_sym_,
    ACTIONS(121), 1,
      sym__word,
    ACTIONS(147), 1,
      sym__dash,
    STATE(32), 1,
      aux_sym__identifier_repeat1,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(75), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [875] = 5,
    ACTIONS(149), 1,
      sym__word,
    ACTIONS(151), 1,
      anon_sym_,
    ACTIONS(153), 1,
      sym__dash,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [895] = 4,
    ACTIONS(155), 1,
      sym__word,
    ACTIONS(158), 1,
      sym__dash,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(82), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [913] = 5,
    ACTIONS(149), 1,
      sym__word,
    ACTIONS(160), 1,
      anon_sym_,
    ACTIONS(162), 1,
      sym__dash,
    STATE(49), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(65), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [933] = 5,
    ACTIONS(149), 1,
      sym__word,
    ACTIONS(164), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__dash,
    STATE(47), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(75), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [953] = 4,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(168), 1,
      sym__word,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(65), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [970] = 2,
    ACTIONS(158), 1,
      sym__dash,
    ACTIONS(82), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [983] = 4,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(168), 1,
      sym__word,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1000] = 2,
    ACTIONS(170), 1,
      sym__dash,
    ACTIONS(113), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1013] = 4,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(168), 1,
      sym__word,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1030] = 4,
    ACTIONS(88), 1,
      anon_sym_,
    ACTIONS(168), 1,
      sym__word,
    STATE(22), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(90), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1047] = 4,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(168), 1,
      sym__word,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(90), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1064] = 4,
    ACTIONS(63), 1,
      anon_sym_,
    ACTIONS(168), 1,
      sym__word,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(65), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1081] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    STATE(10), 1,
      aux_sym__identifier_repeat2,
    STATE(28), 1,
      sym_identifier,
    STATE(37), 1,
      sym__identifier,
    STATE(71), 1,
      aux_sym__identifier_repeat1,
  [1103] = 7,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__dash,
    STATE(37), 1,
      sym__identifier,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
    STATE(58), 1,
      sym_identifier,
    STATE(72), 1,
      aux_sym__identifier_repeat1,
  [1125] = 2,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(119), 6,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_2,
  [1137] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    STATE(10), 1,
      aux_sym__identifier_repeat2,
    STATE(53), 1,
      sym_identifier,
    STATE(55), 1,
      sym__identifier,
    STATE(71), 1,
      aux_sym__identifier_repeat1,
  [1159] = 2,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(145), 6,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_2,
  [1171] = 3,
    ACTIONS(176), 1,
      sym_dot,
    STATE(56), 1,
      aux_sym_shape_repeat1,
    ACTIONS(174), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [1185] = 3,
    ACTIONS(179), 1,
      anon_sym_,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(181), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1198] = 1,
    ACTIONS(174), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1207] = 6,
    ACTIONS(183), 1,
      sym__unquoted_string,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    STATE(100), 1,
      sym_attr_value,
    STATE(107), 1,
      sym_string,
  [1226] = 3,
    ACTIONS(191), 1,
      anon_sym_,
    STATE(62), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(193), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1239] = 6,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(195), 1,
      sym__unquoted_string,
    STATE(92), 1,
      sym_label,
    STATE(102), 1,
      sym_string,
  [1258] = 3,
    ACTIONS(197), 1,
      anon_sym_,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(181), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1271] = 6,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(195), 1,
      sym__unquoted_string,
    STATE(83), 1,
      sym_label,
    STATE(102), 1,
      sym_string,
  [1290] = 6,
    ACTIONS(183), 1,
      sym__unquoted_string,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    STATE(95), 1,
      sym_attr_value,
    STATE(107), 1,
      sym_string,
  [1309] = 6,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(195), 1,
      sym__unquoted_string,
    STATE(86), 1,
      sym_label,
    STATE(102), 1,
      sym_string,
  [1328] = 3,
    ACTIONS(199), 1,
      anon_sym_,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(92), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1341] = 3,
    ACTIONS(197), 1,
      anon_sym_,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(202), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1354] = 6,
    ACTIONS(183), 1,
      sym__unquoted_string,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    STATE(90), 1,
      sym_attr_value,
    STATE(107), 1,
      sym_string,
  [1373] = 4,
    ACTIONS(204), 1,
      anon_sym_,
    ACTIONS(207), 1,
      sym__dash,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(92), 2,
      anon_sym_COLON,
      sym__word,
  [1387] = 2,
    ACTIONS(211), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1397] = 5,
    ACTIONS(213), 1,
      sym__word,
    ACTIONS(215), 1,
      anon_sym_,
    ACTIONS(217), 1,
      sym__dash,
    STATE(7), 1,
      aux_sym__identifier_repeat2,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
  [1413] = 5,
    ACTIONS(215), 1,
      anon_sym_,
    ACTIONS(219), 1,
      sym__word,
    ACTIONS(221), 1,
      sym__dash,
    STATE(36), 1,
      aux_sym__identifier_repeat2,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
  [1429] = 4,
    ACTIONS(223), 1,
      sym__word,
    ACTIONS(227), 1,
      anon_sym_GT,
    STATE(77), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(225), 2,
      anon_sym_,
      sym__dash,
  [1443] = 2,
    ACTIONS(231), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1453] = 4,
    ACTIONS(235), 1,
      anon_sym_,
    ACTIONS(237), 1,
      sym__dash,
    STATE(75), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(233), 2,
      sym__word,
      anon_sym_GT,
  [1467] = 2,
    ACTIONS(242), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1477] = 4,
    ACTIONS(244), 1,
      sym__word,
    ACTIONS(248), 1,
      anon_sym_GT,
    STATE(75), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(246), 2,
      anon_sym_,
      sym__dash,
  [1491] = 2,
    ACTIONS(252), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(250), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1501] = 2,
    ACTIONS(256), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1511] = 2,
    ACTIONS(260), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1521] = 2,
    ACTIONS(264), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(262), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1531] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      anon_sym_,
    STATE(59), 1,
      sym__colon,
    STATE(99), 1,
      aux_sym__identifier_repeat1,
  [1544] = 3,
    ACTIONS(270), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym__end,
    ACTIONS(268), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1555] = 3,
    ACTIONS(223), 1,
      sym__word,
    STATE(91), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(225), 2,
      anon_sym_,
      sym__dash,
  [1566] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      anon_sym_,
    STATE(64), 1,
      sym__colon,
    STATE(99), 1,
      aux_sym__identifier_repeat1,
  [1579] = 3,
    ACTIONS(274), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym__end,
    ACTIONS(272), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1590] = 4,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(276), 1,
      anon_sym_,
    ACTIONS(278), 1,
      sym__dash,
    STATE(96), 1,
      aux_sym__identifier_repeat1,
  [1603] = 4,
    ACTIONS(149), 1,
      sym__word,
    ACTIONS(280), 1,
      anon_sym_,
    ACTIONS(282), 1,
      sym__dash,
    STATE(113), 1,
      aux_sym__identifier_repeat1,
  [1616] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      anon_sym_,
    STATE(68), 1,
      sym__colon,
    STATE(99), 1,
      aux_sym__identifier_repeat1,
  [1629] = 3,
    ACTIONS(286), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym__end,
    ACTIONS(284), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1640] = 3,
    ACTIONS(244), 1,
      sym__word,
    STATE(75), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(246), 2,
      anon_sym_,
      sym__dash,
  [1651] = 3,
    ACTIONS(290), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym__end,
    ACTIONS(288), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1662] = 3,
    ACTIONS(292), 1,
      anon_sym_BQUOTE,
    ACTIONS(294), 1,
      aux_sym_string_token3,
    STATE(115), 1,
      aux_sym_string_repeat3,
  [1672] = 3,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      aux_sym_string_token2,
    STATE(94), 1,
      aux_sym_string_repeat2,
  [1682] = 2,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(301), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1690] = 3,
    ACTIONS(84), 1,
      sym__word,
    ACTIONS(215), 1,
      anon_sym_,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
  [1700] = 3,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    ACTIONS(307), 1,
      aux_sym_string_token1,
    STATE(108), 1,
      aux_sym_string_repeat1,
  [1710] = 2,
    ACTIONS(309), 1,
      sym__word,
    ACTIONS(311), 2,
      anon_sym_,
      sym__dash,
  [1718] = 3,
    ACTIONS(215), 1,
      anon_sym_,
    ACTIONS(313), 1,
      anon_sym_COLON,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
  [1728] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(315), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1736] = 2,
    ACTIONS(244), 1,
      sym__word,
    ACTIONS(246), 2,
      anon_sym_,
      sym__dash,
  [1744] = 2,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(319), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1752] = 3,
    ACTIONS(323), 1,
      anon_sym_BQUOTE,
    ACTIONS(325), 1,
      aux_sym_string_token3,
    STATE(103), 1,
      aux_sym_string_repeat3,
  [1762] = 3,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      aux_sym_string_token2,
    STATE(94), 1,
      aux_sym_string_repeat2,
  [1772] = 3,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      aux_sym_string_token2,
    STATE(104), 1,
      aux_sym_string_repeat2,
  [1782] = 3,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_string_token1,
    STATE(97), 1,
      aux_sym_string_repeat1,
  [1792] = 2,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(334), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1800] = 3,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
    ACTIONS(340), 1,
      aux_sym_string_token1,
    STATE(108), 1,
      aux_sym_string_repeat1,
  [1810] = 2,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(343), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1818] = 3,
    ACTIONS(235), 1,
      anon_sym_DASH_GT,
    ACTIONS(347), 1,
      sym__dash,
    STATE(110), 1,
      aux_sym_arrow_repeat1,
  [1828] = 3,
    ACTIONS(350), 1,
      sym__dash,
    ACTIONS(352), 1,
      anon_sym_DASH_GT,
    STATE(110), 1,
      aux_sym_arrow_repeat1,
  [1838] = 2,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(354), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1846] = 3,
    ACTIONS(168), 1,
      sym__word,
    ACTIONS(215), 1,
      anon_sym_,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
  [1856] = 2,
    ACTIONS(223), 1,
      sym__word,
    ACTIONS(225), 2,
      anon_sym_,
      sym__dash,
  [1864] = 3,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(358), 1,
      aux_sym_string_token3,
    STATE(103), 1,
      aux_sym_string_repeat3,
  [1874] = 2,
    ACTIONS(360), 1,
      sym__word,
    STATE(8), 1,
      aux_sym__identifier_repeat2,
  [1881] = 2,
    ACTIONS(362), 1,
      anon_sym_,
    ACTIONS(364), 1,
      anon_sym_COLON,
  [1888] = 2,
    ACTIONS(366), 1,
      anon_sym_,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [1895] = 2,
    ACTIONS(370), 1,
      sym__word,
    STATE(36), 1,
      aux_sym__identifier_repeat2,
  [1902] = 2,
    ACTIONS(372), 1,
      sym__word,
    STATE(33), 1,
      aux_sym__identifier_repeat2,
  [1909] = 2,
    ACTIONS(374), 1,
      sym__word,
    STATE(7), 1,
      aux_sym__identifier_repeat2,
  [1916] = 1,
    ACTIONS(376), 1,
      sym__word,
  [1920] = 1,
    ACTIONS(378), 1,
      sym_dot,
  [1924] = 1,
    ACTIONS(380), 1,
      sym__word,
  [1928] = 1,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 163,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 224,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 296,
  [SMALL_STATE(12)] = 315,
  [SMALL_STATE(13)] = 336,
  [SMALL_STATE(14)] = 357,
  [SMALL_STATE(15)] = 378,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 441,
  [SMALL_STATE(19)] = 464,
  [SMALL_STATE(20)] = 485,
  [SMALL_STATE(21)] = 508,
  [SMALL_STATE(22)] = 529,
  [SMALL_STATE(23)] = 547,
  [SMALL_STATE(24)] = 561,
  [SMALL_STATE(25)] = 575,
  [SMALL_STATE(26)] = 593,
  [SMALL_STATE(27)] = 611,
  [SMALL_STATE(28)] = 643,
  [SMALL_STATE(29)] = 665,
  [SMALL_STATE(30)] = 683,
  [SMALL_STATE(31)] = 701,
  [SMALL_STATE(32)] = 719,
  [SMALL_STATE(33)] = 737,
  [SMALL_STATE(34)] = 760,
  [SMALL_STATE(35)] = 787,
  [SMALL_STATE(36)] = 816,
  [SMALL_STATE(37)] = 839,
  [SMALL_STATE(38)] = 852,
  [SMALL_STATE(39)] = 875,
  [SMALL_STATE(40)] = 895,
  [SMALL_STATE(41)] = 913,
  [SMALL_STATE(42)] = 933,
  [SMALL_STATE(43)] = 953,
  [SMALL_STATE(44)] = 970,
  [SMALL_STATE(45)] = 983,
  [SMALL_STATE(46)] = 1000,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1030,
  [SMALL_STATE(49)] = 1047,
  [SMALL_STATE(50)] = 1064,
  [SMALL_STATE(51)] = 1081,
  [SMALL_STATE(52)] = 1103,
  [SMALL_STATE(53)] = 1125,
  [SMALL_STATE(54)] = 1137,
  [SMALL_STATE(55)] = 1159,
  [SMALL_STATE(56)] = 1171,
  [SMALL_STATE(57)] = 1185,
  [SMALL_STATE(58)] = 1198,
  [SMALL_STATE(59)] = 1207,
  [SMALL_STATE(60)] = 1226,
  [SMALL_STATE(61)] = 1239,
  [SMALL_STATE(62)] = 1258,
  [SMALL_STATE(63)] = 1271,
  [SMALL_STATE(64)] = 1290,
  [SMALL_STATE(65)] = 1309,
  [SMALL_STATE(66)] = 1328,
  [SMALL_STATE(67)] = 1341,
  [SMALL_STATE(68)] = 1354,
  [SMALL_STATE(69)] = 1373,
  [SMALL_STATE(70)] = 1387,
  [SMALL_STATE(71)] = 1397,
  [SMALL_STATE(72)] = 1413,
  [SMALL_STATE(73)] = 1429,
  [SMALL_STATE(74)] = 1443,
  [SMALL_STATE(75)] = 1453,
  [SMALL_STATE(76)] = 1467,
  [SMALL_STATE(77)] = 1477,
  [SMALL_STATE(78)] = 1491,
  [SMALL_STATE(79)] = 1501,
  [SMALL_STATE(80)] = 1511,
  [SMALL_STATE(81)] = 1521,
  [SMALL_STATE(82)] = 1531,
  [SMALL_STATE(83)] = 1544,
  [SMALL_STATE(84)] = 1555,
  [SMALL_STATE(85)] = 1566,
  [SMALL_STATE(86)] = 1579,
  [SMALL_STATE(87)] = 1590,
  [SMALL_STATE(88)] = 1603,
  [SMALL_STATE(89)] = 1616,
  [SMALL_STATE(90)] = 1629,
  [SMALL_STATE(91)] = 1640,
  [SMALL_STATE(92)] = 1651,
  [SMALL_STATE(93)] = 1662,
  [SMALL_STATE(94)] = 1672,
  [SMALL_STATE(95)] = 1682,
  [SMALL_STATE(96)] = 1690,
  [SMALL_STATE(97)] = 1700,
  [SMALL_STATE(98)] = 1710,
  [SMALL_STATE(99)] = 1718,
  [SMALL_STATE(100)] = 1728,
  [SMALL_STATE(101)] = 1736,
  [SMALL_STATE(102)] = 1744,
  [SMALL_STATE(103)] = 1752,
  [SMALL_STATE(104)] = 1762,
  [SMALL_STATE(105)] = 1772,
  [SMALL_STATE(106)] = 1782,
  [SMALL_STATE(107)] = 1792,
  [SMALL_STATE(108)] = 1800,
  [SMALL_STATE(109)] = 1810,
  [SMALL_STATE(110)] = 1818,
  [SMALL_STATE(111)] = 1828,
  [SMALL_STATE(112)] = 1838,
  [SMALL_STATE(113)] = 1846,
  [SMALL_STATE(114)] = 1856,
  [SMALL_STATE(115)] = 1864,
  [SMALL_STATE(116)] = 1874,
  [SMALL_STATE(117)] = 1881,
  [SMALL_STATE(118)] = 1888,
  [SMALL_STATE(119)] = 1895,
  [SMALL_STATE(120)] = 1902,
  [SMALL_STATE(121)] = 1909,
  [SMALL_STATE(122)] = 1916,
  [SMALL_STATE(123)] = 1920,
  [SMALL_STATE(124)] = 1924,
  [SMALL_STATE(125)] = 1928,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(87),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(15),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(111),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(84),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(73),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(114),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(88),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(52),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(66),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 3),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(69),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(75),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 6),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(94),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shape_attribute, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__style_attribute, 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(103),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(108),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(110),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__style_attr_key, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shape_attr_key, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [382] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_d2(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
