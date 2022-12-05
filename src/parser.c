#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_source_DASHarrowhead = 23,
  anon_sym_target_DASHarrowhead = 24,
  anon_sym_ = 25,
  anon_sym_COLON = 26,
  sym__dash = 27,
  anon_sym_DASH_DASH = 28,
  anon_sym_LT_DASH = 29,
  anon_sym_GT = 30,
  anon_sym_DASH_GT = 31,
  sym__unquoted_string = 32,
  anon_sym_SQUOTE = 33,
  aux_sym_string_token1 = 34,
  anon_sym_DQUOTE = 35,
  aux_sym_string_token2 = 36,
  anon_sym_BQUOTE = 37,
  aux_sym_string_token3 = 38,
  anon_sym_SEMI = 39,
  anon_sym_LF = 40,
  anon_sym_2 = 41,
  sym_dot = 42,
  sym_source_file = 43,
  sym__definition = 44,
  sym_connection = 45,
  sym_shape = 46,
  sym_identifier = 47,
  sym_label = 48,
  sym_attr_value = 49,
  sym__root_attribute = 50,
  sym__style_attribute = 51,
  sym__shape_attribute = 52,
  sym__connection_attribute = 53,
  sym__shape_attr_key = 54,
  sym__style_attr_key = 55,
  sym__connection_attr_key = 56,
  sym__identifier = 57,
  sym__colon = 58,
  sym_arrow = 59,
  sym_string = 60,
  sym__end = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_connection_repeat1 = 63,
  aux_sym_shape_repeat1 = 64,
  aux_sym__identifier_repeat1 = 65,
  aux_sym__identifier_repeat2 = 66,
  aux_sym_arrow_repeat1 = 67,
  aux_sym_string_repeat1 = 68,
  aux_sym_string_repeat2 = 69,
  aux_sym_string_repeat3 = 70,
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
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
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
  [sym__connection_attribute] = "_connection_attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__connection_attr_key] = "attr_key",
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
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
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
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__connection_attr_key] = sym__root_attr_key,
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
  [anon_sym_source_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_DASHarrowhead] = {
    .visible = true,
    .named = false,
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
  [sym__connection_attribute] = {
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
  [sym__connection_attr_key] = {
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
  [33] = 10,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 12,
  [38] = 11,
  [39] = 19,
  [40] = 18,
  [41] = 16,
  [42] = 15,
  [43] = 22,
  [44] = 23,
  [45] = 21,
  [46] = 17,
  [47] = 26,
  [48] = 32,
  [49] = 20,
  [50] = 14,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 13,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 13,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
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
  [86] = 84,
  [87] = 87,
  [88] = 88,
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
  [103] = 73,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 96,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 117,
  [123] = 120,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 127,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      if (lookahead == 0) ADVANCE(204);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '3') ADVANCE(152);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(201);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(115)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(204);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(201);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(204);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(201);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(204);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(204);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(204);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == ';') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(191);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(191);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '>') ADVANCE(188);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(186);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(147);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(188);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'w') ADVANCE(129);
      END_STATE();
    case 111:
      if (lookahead == 'w') ADVANCE(59);
      END_STATE();
    case 112:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 115:
      if (eof) ADVANCE(118);
      if (lookahead == 0) ADVANCE(204);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '3') ADVANCE(152);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(201);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(115)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 116:
      if (eof) ADVANCE(118);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(117)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(117)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(189);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '>') ADVANCE(188);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(188);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 205:
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
  [1] = {.lex_state = 116},
  [2] = {.lex_state = 116},
  [3] = {.lex_state = 116},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 116},
  [7] = {.lex_state = 116},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 17},
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
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 116},
  [52] = {.lex_state = 116},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 116},
  [68] = {.lex_state = 116},
  [69] = {.lex_state = 116},
  [70] = {.lex_state = 116},
  [71] = {.lex_state = 116},
  [72] = {.lex_state = 116},
  [73] = {.lex_state = 116},
  [74] = {.lex_state = 116},
  [75] = {.lex_state = 116},
  [76] = {.lex_state = 116},
  [77] = {.lex_state = 116},
  [78] = {.lex_state = 116},
  [79] = {.lex_state = 116},
  [80] = {.lex_state = 116},
  [81] = {.lex_state = 116},
  [82] = {.lex_state = 116},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 116},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 116},
  [87] = {.lex_state = 116},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 116},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 116},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 116},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 116},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 116},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 116},
  [101] = {.lex_state = 116},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 116},
  [117] = {.lex_state = 114},
  [118] = {.lex_state = 116},
  [119] = {.lex_state = 116},
  [120] = {.lex_state = 114},
  [121] = {.lex_state = 116},
  [122] = {.lex_state = 114},
  [123] = {.lex_state = 114},
  [124] = {.lex_state = 114},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 114},
  [127] = {.lex_state = 0},
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
    [sym_source_file] = STATE(127),
    [sym__definition] = STATE(6),
    [sym_connection] = STATE(6),
    [sym_shape] = STATE(6),
    [sym_identifier] = STATE(4),
    [sym__root_attribute] = STATE(6),
    [sym__identifier] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym__identifier_repeat1] = STATE(69),
    [aux_sym__identifier_repeat2] = STATE(12),
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
    STATE(34), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    STATE(55), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym__identifier_repeat1,
    STATE(87), 1,
      sym__shape_attr_key,
    STATE(88), 2,
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
    STATE(34), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    STATE(55), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym__identifier_repeat1,
    STATE(87), 1,
      sym__shape_attr_key,
    STATE(85), 2,
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
    STATE(5), 1,
      aux_sym_connection_repeat1,
    STATE(35), 1,
      aux_sym_shape_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(54), 1,
      sym__colon,
    STATE(72), 1,
      sym__end,
    STATE(98), 1,
      aux_sym__identifier_repeat1,
    STATE(114), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(35), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [128] = 14,
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
    ACTIONS(41), 1,
      sym_dot,
    STATE(8), 1,
      aux_sym_connection_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(60), 1,
      sym__colon,
    STATE(79), 1,
      sym__end,
    STATE(98), 1,
      aux_sym__identifier_repeat1,
    STATE(114), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [173] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      sym__root_attr_key,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym__identifier_repeat2,
    STATE(34), 1,
      sym__identifier,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
    STATE(7), 5,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      aux_sym_source_file_repeat1,
  [208] = 10,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym__word,
    ACTIONS(50), 1,
      sym__root_attr_key,
    ACTIONS(53), 1,
      anon_sym_,
    ACTIONS(56), 1,
      sym__dash,
    STATE(4), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym__identifier_repeat2,
    STATE(34), 1,
      sym__identifier,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
    STATE(7), 5,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      aux_sym_source_file_repeat1,
  [243] = 8,
    ACTIONS(61), 1,
      sym__dash,
    ACTIONS(64), 1,
      anon_sym_DASH_DASH,
    ACTIONS(67), 1,
      anon_sym_LT_DASH,
    ACTIONS(70), 1,
      anon_sym_DASH_GT,
    STATE(8), 1,
      aux_sym_connection_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(114), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(59), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [273] = 3,
    ACTIONS(75), 1,
      anon_sym_stroke,
    STATE(81), 1,
      sym__style_attr_key,
    ACTIONS(73), 11,
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
  [293] = 6,
    ACTIONS(77), 1,
      sym__word,
    ACTIONS(79), 1,
      anon_sym_,
    ACTIONS(83), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat2,
    STATE(30), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [319] = 6,
    ACTIONS(77), 1,
      sym__word,
    ACTIONS(85), 1,
      anon_sym_,
    ACTIONS(89), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat2,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [345] = 6,
    ACTIONS(77), 1,
      sym__word,
    ACTIONS(91), 1,
      anon_sym_,
    ACTIONS(95), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat2,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(93), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [371] = 3,
    ACTIONS(99), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(97), 10,
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
  [390] = 4,
    ACTIONS(102), 1,
      sym__word,
    ACTIONS(104), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(106), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [411] = 5,
    ACTIONS(108), 1,
      sym__word,
    ACTIONS(110), 1,
      anon_sym_,
    ACTIONS(112), 1,
      sym__dash,
    STATE(14), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [434] = 5,
    ACTIONS(108), 1,
      sym__word,
    ACTIONS(114), 1,
      anon_sym_,
    ACTIONS(116), 1,
      sym__dash,
    STATE(22), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(93), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [457] = 4,
    ACTIONS(79), 1,
      anon_sym_,
    ACTIONS(102), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [478] = 3,
    ACTIONS(118), 1,
      sym__word,
    STATE(18), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(121), 10,
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
  [497] = 5,
    ACTIONS(108), 1,
      sym__word,
    ACTIONS(123), 1,
      anon_sym_,
    ACTIONS(125), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [520] = 4,
    ACTIONS(85), 1,
      anon_sym_,
    ACTIONS(102), 1,
      sym__word,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [541] = 4,
    ACTIONS(102), 1,
      sym__word,
    ACTIONS(104), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [562] = 4,
    ACTIONS(102), 1,
      sym__word,
    ACTIONS(104), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [583] = 4,
    ACTIONS(102), 1,
      sym__word,
    ACTIONS(127), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(106), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [604] = 3,
    ACTIONS(127), 1,
      anon_sym_,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(106), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [622] = 3,
    ACTIONS(104), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(129), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [640] = 1,
    ACTIONS(131), 11,
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
  [654] = 3,
    ACTIONS(104), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [672] = 3,
    ACTIONS(79), 1,
      anon_sym_,
    STATE(30), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [690] = 3,
    ACTIONS(85), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [708] = 3,
    ACTIONS(104), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(106), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [726] = 3,
    ACTIONS(104), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [744] = 1,
    ACTIONS(121), 11,
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
  [758] = 6,
    ACTIONS(79), 1,
      anon_sym_,
    ACTIONS(133), 1,
      sym__word,
    ACTIONS(135), 1,
      sym__dash,
    STATE(30), 1,
      aux_sym__identifier_repeat1,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(81), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [781] = 1,
    ACTIONS(137), 10,
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
  [794] = 8,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(141), 1,
      sym_dot,
    STATE(53), 1,
      aux_sym_shape_repeat1,
    STATE(64), 1,
      sym__colon,
    STATE(77), 1,
      sym__end,
    STATE(98), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [821] = 1,
    ACTIONS(59), 10,
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
  [834] = 6,
    ACTIONS(91), 1,
      anon_sym_,
    ACTIONS(133), 1,
      sym__word,
    ACTIONS(143), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(93), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [857] = 6,
    ACTIONS(85), 1,
      anon_sym_,
    ACTIONS(133), 1,
      sym__word,
    ACTIONS(145), 1,
      sym__dash,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(87), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [880] = 5,
    ACTIONS(147), 1,
      sym__word,
    ACTIONS(149), 1,
      anon_sym_,
    ACTIONS(151), 1,
      sym__dash,
    STATE(45), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [900] = 4,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(156), 1,
      sym__dash,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(121), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [918] = 5,
    ACTIONS(147), 1,
      sym__word,
    ACTIONS(158), 1,
      anon_sym_,
    ACTIONS(160), 1,
      sym__dash,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(93), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [938] = 5,
    ACTIONS(147), 1,
      sym__word,
    ACTIONS(162), 1,
      anon_sym_,
    ACTIONS(164), 1,
      sym__dash,
    STATE(50), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [958] = 4,
    ACTIONS(104), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [975] = 4,
    ACTIONS(127), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(106), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [992] = 4,
    ACTIONS(104), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1009] = 4,
    ACTIONS(79), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1026] = 2,
    ACTIONS(168), 1,
      sym__dash,
    ACTIONS(131), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1039] = 2,
    ACTIONS(156), 1,
      sym__dash,
    ACTIONS(121), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1052] = 4,
    ACTIONS(85), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(87), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1069] = 4,
    ACTIONS(104), 1,
      anon_sym_,
    ACTIONS(166), 1,
      sym__word,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(106), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1086] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    STATE(12), 1,
      aux_sym__identifier_repeat2,
    STATE(34), 1,
      sym__identifier,
    STATE(36), 1,
      sym_identifier,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
  [1108] = 7,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__dash,
    STATE(34), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    STATE(55), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym__identifier_repeat1,
  [1130] = 3,
    ACTIONS(172), 1,
      sym_dot,
    STATE(53), 1,
      aux_sym_shape_repeat1,
    ACTIONS(170), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [1144] = 6,
    ACTIONS(175), 1,
      sym__unquoted_string,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    STATE(88), 1,
      sym_label,
    STATE(111), 1,
      sym_string,
  [1163] = 1,
    ACTIONS(170), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1172] = 3,
    ACTIONS(183), 1,
      anon_sym_,
    STATE(61), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(185), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1185] = 6,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      sym__unquoted_string,
    STATE(97), 1,
      sym_attr_value,
    STATE(109), 1,
      sym_string,
  [1204] = 6,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      sym__unquoted_string,
    STATE(102), 1,
      sym_attr_value,
    STATE(109), 1,
      sym_string,
  [1223] = 6,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      sym__unquoted_string,
    STATE(93), 1,
      sym_attr_value,
    STATE(109), 1,
      sym_string,
  [1242] = 6,
    ACTIONS(175), 1,
      sym__unquoted_string,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    STATE(83), 1,
      sym_label,
    STATE(111), 1,
      sym_string,
  [1261] = 3,
    ACTIONS(189), 1,
      anon_sym_,
    STATE(61), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(97), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1274] = 6,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      sym__unquoted_string,
    STATE(89), 1,
      sym_attr_value,
    STATE(109), 1,
      sym_string,
  [1293] = 3,
    ACTIONS(192), 1,
      anon_sym_,
    STATE(65), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(185), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1306] = 6,
    ACTIONS(175), 1,
      sym__unquoted_string,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE,
    STATE(85), 1,
      sym_label,
    STATE(111), 1,
      sym_string,
  [1325] = 3,
    ACTIONS(183), 1,
      anon_sym_,
    STATE(61), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(194), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1338] = 3,
    ACTIONS(196), 1,
      anon_sym_,
    STATE(56), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(198), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1351] = 4,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(203), 1,
      sym__dash,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(97), 2,
      anon_sym_COLON,
      sym__word,
  [1365] = 2,
    ACTIONS(207), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1375] = 5,
    ACTIONS(209), 1,
      sym__word,
    ACTIONS(211), 1,
      anon_sym_,
    ACTIONS(213), 1,
      sym__dash,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
  [1391] = 5,
    ACTIONS(211), 1,
      anon_sym_,
    ACTIONS(215), 1,
      sym__word,
    ACTIONS(217), 1,
      sym__dash,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
  [1407] = 4,
    ACTIONS(219), 1,
      sym__word,
    ACTIONS(223), 1,
      anon_sym_GT,
    STATE(74), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(221), 2,
      anon_sym_,
      sym__dash,
  [1421] = 2,
    ACTIONS(227), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1431] = 4,
    ACTIONS(231), 1,
      anon_sym_,
    ACTIONS(233), 1,
      sym__dash,
    STATE(73), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(229), 2,
      sym__word,
      anon_sym_GT,
  [1445] = 4,
    ACTIONS(236), 1,
      sym__word,
    ACTIONS(240), 1,
      anon_sym_GT,
    STATE(73), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(238), 2,
      anon_sym_,
      sym__dash,
  [1459] = 2,
    ACTIONS(244), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(242), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1469] = 2,
    ACTIONS(248), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(246), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1479] = 2,
    ACTIONS(252), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(250), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1489] = 2,
    ACTIONS(256), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1499] = 2,
    ACTIONS(260), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1509] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_,
    STATE(58), 1,
      sym__colon,
    STATE(98), 1,
      aux_sym__identifier_repeat1,
  [1522] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_,
    STATE(59), 1,
      sym__colon,
    STATE(98), 1,
      aux_sym__identifier_repeat1,
  [1535] = 3,
    ACTIONS(219), 1,
      sym__word,
    STATE(90), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(221), 2,
      anon_sym_,
      sym__dash,
  [1546] = 3,
    ACTIONS(266), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym__end,
    ACTIONS(264), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1557] = 4,
    ACTIONS(108), 1,
      sym__word,
    ACTIONS(268), 1,
      anon_sym_,
    ACTIONS(270), 1,
      sym__dash,
    STATE(96), 1,
      aux_sym__identifier_repeat1,
  [1570] = 3,
    ACTIONS(274), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym__end,
    ACTIONS(272), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1581] = 4,
    ACTIONS(147), 1,
      sym__word,
    ACTIONS(276), 1,
      anon_sym_,
    ACTIONS(278), 1,
      sym__dash,
    STATE(116), 1,
      aux_sym__identifier_repeat1,
  [1594] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_,
    STATE(57), 1,
      sym__colon,
    STATE(98), 1,
      aux_sym__identifier_repeat1,
  [1607] = 3,
    ACTIONS(282), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym__end,
    ACTIONS(280), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1618] = 3,
    ACTIONS(286), 1,
      anon_sym_LF,
    STATE(75), 1,
      sym__end,
    ACTIONS(284), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1629] = 3,
    ACTIONS(236), 1,
      sym__word,
    STATE(73), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(238), 2,
      anon_sym_,
      sym__dash,
  [1640] = 3,
    STATE(80), 1,
      sym__connection_attr_key,
    STATE(83), 1,
      sym__connection_attribute,
    ACTIONS(288), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
  [1651] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_,
    STATE(62), 1,
      sym__colon,
    STATE(98), 1,
      aux_sym__identifier_repeat1,
  [1664] = 2,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(290), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1672] = 2,
    ACTIONS(219), 1,
      sym__word,
    ACTIONS(221), 2,
      anon_sym_,
      sym__dash,
  [1680] = 3,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    ACTIONS(296), 1,
      aux_sym_string_token3,
    STATE(95), 1,
      aux_sym_string_repeat3,
  [1690] = 3,
    ACTIONS(102), 1,
      sym__word,
    ACTIONS(211), 1,
      anon_sym_,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
  [1700] = 2,
    ACTIONS(301), 1,
      anon_sym_LF,
    ACTIONS(299), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1708] = 3,
    ACTIONS(211), 1,
      anon_sym_,
    ACTIONS(303), 1,
      anon_sym_COLON,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
  [1718] = 2,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(305), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1726] = 2,
    ACTIONS(309), 1,
      sym__word,
    ACTIONS(311), 2,
      anon_sym_,
      sym__dash,
  [1734] = 2,
    ACTIONS(236), 1,
      sym__word,
    ACTIONS(238), 2,
      anon_sym_,
      sym__dash,
  [1742] = 2,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(313), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1750] = 3,
    ACTIONS(231), 1,
      anon_sym_DASH_GT,
    ACTIONS(317), 1,
      sym__dash,
    STATE(103), 1,
      aux_sym_arrow_repeat1,
  [1760] = 3,
    ACTIONS(320), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      aux_sym_string_token1,
    STATE(104), 1,
      aux_sym_string_repeat1,
  [1770] = 2,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(325), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1778] = 3,
    ACTIONS(329), 1,
      anon_sym_BQUOTE,
    ACTIONS(331), 1,
      aux_sym_string_token3,
    STATE(113), 1,
      aux_sym_string_repeat3,
  [1788] = 3,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym_string_token2,
    STATE(115), 1,
      aux_sym_string_repeat2,
  [1798] = 3,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      aux_sym_string_token1,
    STATE(110), 1,
      aux_sym_string_repeat1,
  [1808] = 2,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(337), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1816] = 3,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(343), 1,
      aux_sym_string_token1,
    STATE(104), 1,
      aux_sym_string_repeat1,
  [1826] = 2,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(345), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1834] = 3,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      aux_sym_string_token2,
    STATE(112), 1,
      aux_sym_string_repeat2,
  [1844] = 3,
    ACTIONS(341), 1,
      anon_sym_BQUOTE,
    ACTIONS(354), 1,
      aux_sym_string_token3,
    STATE(95), 1,
      aux_sym_string_repeat3,
  [1854] = 3,
    ACTIONS(356), 1,
      sym__dash,
    ACTIONS(358), 1,
      anon_sym_DASH_GT,
    STATE(103), 1,
      aux_sym_arrow_repeat1,
  [1864] = 3,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      aux_sym_string_token2,
    STATE(112), 1,
      aux_sym_string_repeat2,
  [1874] = 3,
    ACTIONS(166), 1,
      sym__word,
    ACTIONS(211), 1,
      anon_sym_,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
  [1884] = 2,
    ACTIONS(362), 1,
      sym__word,
    STATE(10), 1,
      aux_sym__identifier_repeat2,
  [1891] = 2,
    ACTIONS(364), 1,
      anon_sym_,
    ACTIONS(366), 1,
      anon_sym_COLON,
  [1898] = 2,
    ACTIONS(368), 1,
      anon_sym_,
    ACTIONS(370), 1,
      anon_sym_COLON,
  [1905] = 2,
    ACTIONS(372), 1,
      sym__word,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
  [1912] = 2,
    ACTIONS(374), 1,
      anon_sym_,
    ACTIONS(376), 1,
      anon_sym_COLON,
  [1919] = 2,
    ACTIONS(378), 1,
      sym__word,
    STATE(33), 1,
      aux_sym__identifier_repeat2,
  [1926] = 2,
    ACTIONS(380), 1,
      sym__word,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
  [1933] = 1,
    ACTIONS(382), 1,
      sym__word,
  [1937] = 1,
    ACTIONS(384), 1,
      sym_dot,
  [1941] = 1,
    ACTIONS(386), 1,
      sym__word,
  [1945] = 1,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 173,
  [SMALL_STATE(7)] = 208,
  [SMALL_STATE(8)] = 243,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 319,
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 371,
  [SMALL_STATE(14)] = 390,
  [SMALL_STATE(15)] = 411,
  [SMALL_STATE(16)] = 434,
  [SMALL_STATE(17)] = 457,
  [SMALL_STATE(18)] = 478,
  [SMALL_STATE(19)] = 497,
  [SMALL_STATE(20)] = 520,
  [SMALL_STATE(21)] = 541,
  [SMALL_STATE(22)] = 562,
  [SMALL_STATE(23)] = 583,
  [SMALL_STATE(24)] = 604,
  [SMALL_STATE(25)] = 622,
  [SMALL_STATE(26)] = 640,
  [SMALL_STATE(27)] = 654,
  [SMALL_STATE(28)] = 672,
  [SMALL_STATE(29)] = 690,
  [SMALL_STATE(30)] = 708,
  [SMALL_STATE(31)] = 726,
  [SMALL_STATE(32)] = 744,
  [SMALL_STATE(33)] = 758,
  [SMALL_STATE(34)] = 781,
  [SMALL_STATE(35)] = 794,
  [SMALL_STATE(36)] = 821,
  [SMALL_STATE(37)] = 834,
  [SMALL_STATE(38)] = 857,
  [SMALL_STATE(39)] = 880,
  [SMALL_STATE(40)] = 900,
  [SMALL_STATE(41)] = 918,
  [SMALL_STATE(42)] = 938,
  [SMALL_STATE(43)] = 958,
  [SMALL_STATE(44)] = 975,
  [SMALL_STATE(45)] = 992,
  [SMALL_STATE(46)] = 1009,
  [SMALL_STATE(47)] = 1026,
  [SMALL_STATE(48)] = 1039,
  [SMALL_STATE(49)] = 1052,
  [SMALL_STATE(50)] = 1069,
  [SMALL_STATE(51)] = 1086,
  [SMALL_STATE(52)] = 1108,
  [SMALL_STATE(53)] = 1130,
  [SMALL_STATE(54)] = 1144,
  [SMALL_STATE(55)] = 1163,
  [SMALL_STATE(56)] = 1172,
  [SMALL_STATE(57)] = 1185,
  [SMALL_STATE(58)] = 1204,
  [SMALL_STATE(59)] = 1223,
  [SMALL_STATE(60)] = 1242,
  [SMALL_STATE(61)] = 1261,
  [SMALL_STATE(62)] = 1274,
  [SMALL_STATE(63)] = 1293,
  [SMALL_STATE(64)] = 1306,
  [SMALL_STATE(65)] = 1325,
  [SMALL_STATE(66)] = 1338,
  [SMALL_STATE(67)] = 1351,
  [SMALL_STATE(68)] = 1365,
  [SMALL_STATE(69)] = 1375,
  [SMALL_STATE(70)] = 1391,
  [SMALL_STATE(71)] = 1407,
  [SMALL_STATE(72)] = 1421,
  [SMALL_STATE(73)] = 1431,
  [SMALL_STATE(74)] = 1445,
  [SMALL_STATE(75)] = 1459,
  [SMALL_STATE(76)] = 1469,
  [SMALL_STATE(77)] = 1479,
  [SMALL_STATE(78)] = 1489,
  [SMALL_STATE(79)] = 1499,
  [SMALL_STATE(80)] = 1509,
  [SMALL_STATE(81)] = 1522,
  [SMALL_STATE(82)] = 1535,
  [SMALL_STATE(83)] = 1546,
  [SMALL_STATE(84)] = 1557,
  [SMALL_STATE(85)] = 1570,
  [SMALL_STATE(86)] = 1581,
  [SMALL_STATE(87)] = 1594,
  [SMALL_STATE(88)] = 1607,
  [SMALL_STATE(89)] = 1618,
  [SMALL_STATE(90)] = 1629,
  [SMALL_STATE(91)] = 1640,
  [SMALL_STATE(92)] = 1651,
  [SMALL_STATE(93)] = 1664,
  [SMALL_STATE(94)] = 1672,
  [SMALL_STATE(95)] = 1680,
  [SMALL_STATE(96)] = 1690,
  [SMALL_STATE(97)] = 1700,
  [SMALL_STATE(98)] = 1708,
  [SMALL_STATE(99)] = 1718,
  [SMALL_STATE(100)] = 1726,
  [SMALL_STATE(101)] = 1734,
  [SMALL_STATE(102)] = 1742,
  [SMALL_STATE(103)] = 1750,
  [SMALL_STATE(104)] = 1760,
  [SMALL_STATE(105)] = 1770,
  [SMALL_STATE(106)] = 1778,
  [SMALL_STATE(107)] = 1788,
  [SMALL_STATE(108)] = 1798,
  [SMALL_STATE(109)] = 1808,
  [SMALL_STATE(110)] = 1816,
  [SMALL_STATE(111)] = 1826,
  [SMALL_STATE(112)] = 1834,
  [SMALL_STATE(113)] = 1844,
  [SMALL_STATE(114)] = 1854,
  [SMALL_STATE(115)] = 1864,
  [SMALL_STATE(116)] = 1874,
  [SMALL_STATE(117)] = 1884,
  [SMALL_STATE(118)] = 1891,
  [SMALL_STATE(119)] = 1898,
  [SMALL_STATE(120)] = 1905,
  [SMALL_STATE(121)] = 1912,
  [SMALL_STATE(122)] = 1919,
  [SMALL_STATE(123)] = 1926,
  [SMALL_STATE(124)] = 1933,
  [SMALL_STATE(125)] = 1937,
  [SMALL_STATE(126)] = 1941,
  [SMALL_STATE(127)] = 1945,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(114),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(82),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(71),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(94),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(13),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(84),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(86),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(52),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(61),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 1),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(67),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(73),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__style_attribute, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(95),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shape_attribute, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_attribute, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attribute, 3),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(103),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(104),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(112),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shape_attr_key, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attr_key, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_attr_key, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__style_attr_key, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [388] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
