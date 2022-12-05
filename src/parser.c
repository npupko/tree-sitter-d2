#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
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
  anon_sym_LF = 39,
  anon_sym_2 = 40,
  anon_sym_SEMI = 41,
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
  sym__eof = 61,
  sym__end = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_connection_repeat1 = 64,
  aux_sym_shape_repeat1 = 65,
  aux_sym__identifier_repeat1 = 66,
  aux_sym__identifier_repeat2 = 67,
  aux_sym_arrow_repeat1 = 68,
  aux_sym_string_repeat1 = 69,
  aux_sym_string_repeat2 = 70,
  aux_sym_string_repeat3 = 71,
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
  [anon_sym_LF] = "\n",
  [anon_sym_2] = " ",
  [anon_sym_SEMI] = ";",
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
  [sym__eof] = "_eof",
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
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym__eof] = sym__eof,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym__eof] = {
    .visible = false,
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
  [33] = 33,
  [34] = 34,
  [35] = 10,
  [36] = 36,
  [37] = 9,
  [38] = 11,
  [39] = 21,
  [40] = 22,
  [41] = 20,
  [42] = 23,
  [43] = 16,
  [44] = 14,
  [45] = 18,
  [46] = 13,
  [47] = 26,
  [48] = 19,
  [49] = 25,
  [50] = 15,
  [51] = 17,
  [52] = 52,
  [53] = 27,
  [54] = 28,
  [55] = 30,
  [56] = 56,
  [57] = 33,
  [58] = 32,
  [59] = 31,
  [60] = 60,
  [61] = 29,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 21,
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
  [86] = 77,
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
  [97] = 92,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 81,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 118,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 125,
  [129] = 129,
  [130] = 126,
  [131] = 131,
  [132] = 131,
  [133] = 133,
  [134] = 134,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      if (lookahead == 0) ADVANCE(181);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '3') ADVANCE(136);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == '`') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 's') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(181);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead == '`') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(173);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead == '`') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(122);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == 0) ADVANCE(181);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '>') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 183:
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
  [1] = {.lex_state = 102},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 102},
  [4] = {.lex_state = 102},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 102},
  [7] = {.lex_state = 102},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 102},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 102},
  [39] = {.lex_state = 102},
  [40] = {.lex_state = 102},
  [41] = {.lex_state = 102},
  [42] = {.lex_state = 102},
  [43] = {.lex_state = 102},
  [44] = {.lex_state = 102},
  [45] = {.lex_state = 102},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 102},
  [48] = {.lex_state = 102},
  [49] = {.lex_state = 102},
  [50] = {.lex_state = 102},
  [51] = {.lex_state = 102},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 102},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 102},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 102},
  [76] = {.lex_state = 102},
  [77] = {.lex_state = 102},
  [78] = {.lex_state = 102},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 102},
  [81] = {.lex_state = 102},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 102},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 102},
  [87] = {.lex_state = 102},
  [88] = {.lex_state = 102},
  [89] = {.lex_state = 102},
  [90] = {.lex_state = 102},
  [91] = {.lex_state = 102},
  [92] = {.lex_state = 102},
  [93] = {.lex_state = 102},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 102},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 102},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 102},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 102},
  [119] = {.lex_state = 102},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 102},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 102},
  [126] = {.lex_state = 102},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 102},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 102},
  [131] = {.lex_state = 102},
  [132] = {.lex_state = 102},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
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
    [anon_sym_] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(133),
    [sym__definition] = STATE(6),
    [sym_connection] = STATE(6),
    [sym_shape] = STATE(6),
    [sym_identifier] = STATE(2),
    [sym__root_attribute] = STATE(6),
    [sym__identifier] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym__identifier_repeat1] = STATE(86),
    [aux_sym__identifier_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [sym__root_attr_key] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(13), 1,
      anon_sym_,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_DASH,
    ACTIONS(23), 1,
      anon_sym_DASH_GT,
    ACTIONS(27), 1,
      sym_dot,
    STATE(5), 1,
      aux_sym_connection_repeat1,
    STATE(24), 1,
      aux_sym_shape_repeat1,
    STATE(60), 1,
      sym_arrow,
    STATE(65), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym__identifier_repeat1,
    STATE(107), 1,
      aux_sym_arrow_repeat1,
    STATE(90), 2,
      sym__eof,
      sym__end,
    ACTIONS(25), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [49] = 11,
    ACTIONS(29), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_style,
    ACTIONS(35), 1,
      anon_sym_,
    ACTIONS(37), 1,
      sym__dash,
    STATE(36), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    STATE(71), 1,
      sym_identifier,
    STATE(77), 1,
      aux_sym__identifier_repeat1,
    STATE(98), 1,
      sym__shape_attr_key,
    STATE(85), 2,
      sym__style_attribute,
      sym__shape_attribute,
    ACTIONS(33), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [89] = 11,
    ACTIONS(29), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_style,
    ACTIONS(35), 1,
      anon_sym_,
    ACTIONS(37), 1,
      sym__dash,
    STATE(36), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    STATE(71), 1,
      sym_identifier,
    STATE(77), 1,
      aux_sym__identifier_repeat1,
    STATE(98), 1,
      sym__shape_attr_key,
    STATE(82), 2,
      sym__style_attribute,
      sym__shape_attribute,
    ACTIONS(33), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [129] = 14,
    ACTIONS(13), 1,
      anon_sym_,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_DASH,
    ACTIONS(23), 1,
      anon_sym_DASH_GT,
    ACTIONS(41), 1,
      sym_dot,
    STATE(12), 1,
      aux_sym_connection_repeat1,
    STATE(60), 1,
      sym_arrow,
    STATE(66), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym__identifier_repeat1,
    STATE(107), 1,
      aux_sym_arrow_repeat1,
    STATE(76), 2,
      sym__eof,
      sym__end,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [175] = 10,
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
    STATE(2), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(86), 1,
      aux_sym__identifier_repeat1,
    STATE(7), 5,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      aux_sym_source_file_repeat1,
  [210] = 10,
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
    STATE(2), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__identifier_repeat2,
    STATE(36), 1,
      sym__identifier,
    STATE(86), 1,
      aux_sym__identifier_repeat1,
    STATE(7), 5,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      aux_sym_source_file_repeat1,
  [245] = 3,
    ACTIONS(61), 1,
      anon_sym_stroke,
    STATE(94), 1,
      sym__style_attr_key,
    ACTIONS(59), 11,
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
  [265] = 6,
    ACTIONS(63), 1,
      sym__word,
    ACTIONS(65), 1,
      anon_sym_,
    ACTIONS(69), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat2,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [291] = 6,
    ACTIONS(63), 1,
      sym__word,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(75), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat2,
    STATE(33), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [317] = 6,
    ACTIONS(63), 1,
      sym__word,
    ACTIONS(77), 1,
      anon_sym_,
    ACTIONS(81), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat2,
    STATE(28), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [343] = 8,
    ACTIONS(85), 1,
      sym__dash,
    ACTIONS(88), 1,
      anon_sym_DASH_DASH,
    ACTIONS(91), 1,
      anon_sym_LT_DASH,
    ACTIONS(94), 1,
      anon_sym_DASH_GT,
    STATE(12), 1,
      aux_sym_connection_repeat1,
    STATE(60), 1,
      sym_arrow,
    STATE(107), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(83), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [373] = 5,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(101), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [396] = 5,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(101), 1,
      sym__dash,
    STATE(33), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [419] = 5,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(107), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(105), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [442] = 5,
    ACTIONS(109), 1,
      sym__word,
    ACTIONS(111), 1,
      anon_sym_,
    ACTIONS(113), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [465] = 5,
    ACTIONS(77), 1,
      anon_sym_,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(115), 1,
      sym__dash,
    STATE(28), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [488] = 5,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(107), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(105), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [511] = 5,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(115), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [534] = 4,
    ACTIONS(117), 1,
      sym__word,
    ACTIONS(122), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(120), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [555] = 4,
    ACTIONS(126), 1,
      anon_sym_,
    ACTIONS(129), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(124), 9,
      anon_sym_COLON,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [576] = 5,
    ACTIONS(109), 1,
      sym__word,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(133), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [599] = 5,
    ACTIONS(109), 1,
      sym__word,
    ACTIONS(135), 1,
      anon_sym_,
    ACTIONS(137), 1,
      sym__dash,
    STATE(19), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [622] = 8,
    ACTIONS(13), 1,
      anon_sym_,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(141), 1,
      sym_dot,
    STATE(52), 1,
      aux_sym_shape_repeat1,
    STATE(63), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym__identifier_repeat1,
    STATE(75), 2,
      sym__eof,
      sym__end,
    ACTIONS(139), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [650] = 2,
    ACTIONS(122), 1,
      sym__dash,
    ACTIONS(120), 10,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [666] = 2,
    ACTIONS(145), 1,
      sym__dash,
    ACTIONS(143), 10,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [682] = 4,
    ACTIONS(77), 1,
      anon_sym_,
    ACTIONS(115), 1,
      sym__dash,
    STATE(28), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [702] = 4,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(101), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [722] = 4,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(115), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [742] = 4,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(101), 1,
      sym__dash,
    STATE(33), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [762] = 4,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(149), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(147), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [782] = 4,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(107), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(105), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [802] = 4,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(107), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(105), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [822] = 2,
    ACTIONS(151), 1,
      sym__dash,
    ACTIONS(83), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [837] = 6,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(155), 1,
      anon_sym_,
    ACTIONS(157), 1,
      sym__dash,
    STATE(41), 1,
      aux_sym__identifier_repeat2,
    STATE(57), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [860] = 2,
    ACTIONS(161), 1,
      sym__dash,
    ACTIONS(159), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [875] = 6,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(163), 1,
      anon_sym_,
    ACTIONS(165), 1,
      sym__dash,
    STATE(41), 1,
      aux_sym__identifier_repeat2,
    STATE(61), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [898] = 6,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(167), 1,
      anon_sym_,
    ACTIONS(169), 1,
      sym__dash,
    STATE(41), 1,
      aux_sym__identifier_repeat2,
    STATE(54), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [921] = 3,
    ACTIONS(171), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(124), 7,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [937] = 5,
    ACTIONS(174), 1,
      sym__word,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(178), 1,
      sym__dash,
    STATE(45), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [957] = 3,
    ACTIONS(180), 1,
      sym__word,
    STATE(41), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(120), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [973] = 5,
    ACTIONS(174), 1,
      sym__word,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(185), 1,
      sym__dash,
    STATE(48), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [993] = 5,
    ACTIONS(174), 1,
      sym__word,
    ACTIONS(187), 1,
      anon_sym_,
    ACTIONS(189), 1,
      sym__dash,
    STATE(46), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1013] = 4,
    ACTIONS(155), 1,
      anon_sym_,
    ACTIONS(191), 1,
      sym__word,
    STATE(57), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1030] = 4,
    ACTIONS(191), 1,
      sym__word,
    ACTIONS(193), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(105), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1047] = 4,
    ACTIONS(191), 1,
      sym__word,
    ACTIONS(193), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1064] = 1,
    ACTIONS(143), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1075] = 4,
    ACTIONS(191), 1,
      sym__word,
    ACTIONS(193), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1092] = 1,
    ACTIONS(120), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1103] = 4,
    ACTIONS(191), 1,
      sym__word,
    ACTIONS(195), 1,
      anon_sym_,
    STATE(59), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(105), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1120] = 4,
    ACTIONS(167), 1,
      anon_sym_,
    ACTIONS(191), 1,
      sym__word,
    STATE(54), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1137] = 3,
    ACTIONS(199), 1,
      sym_dot,
    STATE(52), 1,
      aux_sym_shape_repeat1,
    ACTIONS(197), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1151] = 3,
    ACTIONS(167), 1,
      anon_sym_,
    STATE(54), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1165] = 3,
    ACTIONS(193), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1179] = 3,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1193] = 7,
    ACTIONS(35), 1,
      anon_sym_,
    ACTIONS(37), 1,
      sym__dash,
    ACTIONS(202), 1,
      sym__word,
    STATE(36), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    STATE(71), 1,
      sym_identifier,
    STATE(77), 1,
      aux_sym__identifier_repeat1,
  [1215] = 3,
    ACTIONS(193), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(105), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1229] = 3,
    ACTIONS(195), 1,
      anon_sym_,
    STATE(59), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(105), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1243] = 3,
    ACTIONS(193), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(147), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1257] = 7,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(204), 1,
      sym__word,
    STATE(9), 1,
      aux_sym__identifier_repeat2,
    STATE(34), 1,
      sym_identifier,
    STATE(36), 1,
      sym__identifier,
    STATE(86), 1,
      aux_sym__identifier_repeat1,
  [1279] = 3,
    ACTIONS(193), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(79), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1293] = 6,
    ACTIONS(206), 1,
      sym__unquoted_string,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    STATE(102), 1,
      sym_attr_value,
    STATE(105), 1,
      sym_string,
  [1312] = 6,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    ACTIONS(214), 1,
      sym__unquoted_string,
    STATE(85), 1,
      sym_label,
    STATE(104), 1,
      sym_string,
  [1331] = 4,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(218), 1,
      sym__unquoted_string,
    STATE(74), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(220), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1346] = 6,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    ACTIONS(214), 1,
      sym__unquoted_string,
    STATE(82), 1,
      sym_label,
    STATE(104), 1,
      sym_string,
  [1365] = 6,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    ACTIONS(214), 1,
      sym__unquoted_string,
    STATE(83), 1,
      sym_label,
    STATE(104), 1,
      sym_string,
  [1384] = 4,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(222), 1,
      sym__unquoted_string,
    STATE(74), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(224), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1399] = 6,
    ACTIONS(206), 1,
      sym__unquoted_string,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    STATE(103), 1,
      sym_attr_value,
    STATE(105), 1,
      sym_string,
  [1418] = 6,
    ACTIONS(206), 1,
      sym__unquoted_string,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    STATE(105), 1,
      sym_string,
    STATE(117), 1,
      sym_attr_value,
  [1437] = 4,
    ACTIONS(226), 1,
      anon_sym_,
    ACTIONS(228), 1,
      sym__unquoted_string,
    STATE(64), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(230), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1452] = 1,
    ACTIONS(197), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1461] = 6,
    ACTIONS(206), 1,
      sym__unquoted_string,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    STATE(79), 1,
      sym_attr_value,
    STATE(105), 1,
      sym_string,
  [1480] = 4,
    ACTIONS(218), 1,
      sym__unquoted_string,
    ACTIONS(232), 1,
      anon_sym_,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(220), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1495] = 4,
    ACTIONS(129), 1,
      sym__unquoted_string,
    ACTIONS(234), 1,
      anon_sym_,
    STATE(74), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(124), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1510] = 2,
    ACTIONS(239), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1520] = 2,
    ACTIONS(243), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1530] = 5,
    ACTIONS(193), 1,
      anon_sym_,
    ACTIONS(245), 1,
      sym__word,
    ACTIONS(247), 1,
      sym__dash,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
  [1546] = 3,
    ACTIONS(251), 1,
      anon_sym_GT,
    STATE(81), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(249), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1558] = 2,
    STATE(88), 2,
      sym__eof,
      sym__end,
    ACTIONS(253), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1568] = 2,
    ACTIONS(257), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1578] = 3,
    ACTIONS(261), 1,
      sym__dash,
    STATE(81), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(259), 3,
      anon_sym_,
      sym__word,
      anon_sym_GT,
  [1590] = 2,
    STATE(80), 2,
      sym__eof,
      sym__end,
    ACTIONS(264), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1600] = 2,
    STATE(89), 2,
      sym__eof,
      sym__end,
    ACTIONS(266), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1610] = 2,
    ACTIONS(270), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1620] = 2,
    STATE(84), 2,
      sym__eof,
      sym__end,
    ACTIONS(272), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1630] = 5,
    ACTIONS(193), 1,
      anon_sym_,
    ACTIONS(274), 1,
      sym__word,
    ACTIONS(276), 1,
      sym__dash,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
  [1646] = 3,
    ACTIONS(280), 1,
      anon_sym_GT,
    STATE(78), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(278), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1658] = 2,
    ACTIONS(284), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1668] = 2,
    ACTIONS(288), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1678] = 2,
    ACTIONS(292), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(290), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1688] = 2,
    STATE(81), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(249), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1697] = 4,
    ACTIONS(109), 1,
      sym__word,
    ACTIONS(294), 1,
      anon_sym_,
    ACTIONS(296), 1,
      sym__dash,
    STATE(123), 1,
      aux_sym__identifier_repeat1,
  [1710] = 2,
    STATE(91), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(278), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1719] = 4,
    ACTIONS(13), 1,
      anon_sym_,
    ACTIONS(15), 1,
      anon_sym_COLON,
    STATE(68), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym__identifier_repeat1,
  [1732] = 4,
    ACTIONS(13), 1,
      anon_sym_,
    ACTIONS(15), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym__identifier_repeat1,
  [1745] = 3,
    STATE(83), 1,
      sym__connection_attribute,
    STATE(99), 1,
      sym__connection_attr_key,
    ACTIONS(298), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
  [1756] = 4,
    ACTIONS(174), 1,
      sym__word,
    ACTIONS(300), 1,
      anon_sym_,
    ACTIONS(302), 1,
      sym__dash,
    STATE(118), 1,
      aux_sym__identifier_repeat1,
  [1769] = 4,
    ACTIONS(13), 1,
      anon_sym_,
    ACTIONS(15), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym__identifier_repeat1,
  [1782] = 4,
    ACTIONS(13), 1,
      anon_sym_,
    ACTIONS(15), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym__identifier_repeat1,
  [1795] = 3,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      aux_sym_string_token2,
    STATE(110), 1,
      aux_sym_string_repeat2,
  [1805] = 3,
    ACTIONS(193), 1,
      anon_sym_,
    ACTIONS(308), 1,
      anon_sym_COLON,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
  [1815] = 1,
    ACTIONS(310), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1821] = 1,
    ACTIONS(312), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1827] = 1,
    ACTIONS(314), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1833] = 1,
    ACTIONS(316), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1839] = 3,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(318), 1,
      sym__dash,
    STATE(106), 1,
      aux_sym_arrow_repeat1,
  [1849] = 3,
    ACTIONS(280), 1,
      anon_sym_DASH_GT,
    ACTIONS(321), 1,
      sym__dash,
    STATE(106), 1,
      aux_sym_arrow_repeat1,
  [1859] = 1,
    ACTIONS(249), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1865] = 3,
    ACTIONS(323), 1,
      anon_sym_BQUOTE,
    ACTIONS(325), 1,
      aux_sym_string_token3,
    STATE(109), 1,
      aux_sym_string_repeat3,
  [1875] = 3,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      aux_sym_string_token2,
    STATE(110), 1,
      aux_sym_string_repeat2,
  [1885] = 1,
    ACTIONS(278), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1891] = 3,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      aux_sym_string_token1,
    STATE(112), 1,
      aux_sym_string_repeat1,
  [1901] = 1,
    ACTIONS(338), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1907] = 3,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      aux_sym_string_token1,
    STATE(121), 1,
      aux_sym_string_repeat1,
  [1917] = 3,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_string_token2,
    STATE(100), 1,
      aux_sym_string_repeat2,
  [1927] = 3,
    ACTIONS(340), 1,
      anon_sym_BQUOTE,
    ACTIONS(346), 1,
      aux_sym_string_token3,
    STATE(120), 1,
      aux_sym_string_repeat3,
  [1937] = 1,
    ACTIONS(348), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1943] = 3,
    ACTIONS(191), 1,
      sym__word,
    ACTIONS(193), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
  [1953] = 1,
    ACTIONS(350), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [1959] = 3,
    ACTIONS(304), 1,
      anon_sym_BQUOTE,
    ACTIONS(352), 1,
      aux_sym_string_token3,
    STATE(109), 1,
      aux_sym_string_repeat3,
  [1969] = 3,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    ACTIONS(354), 1,
      aux_sym_string_token1,
    STATE(112), 1,
      aux_sym_string_repeat1,
  [1979] = 1,
    ACTIONS(356), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1985] = 3,
    ACTIONS(97), 1,
      sym__word,
    ACTIONS(193), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
  [1995] = 1,
    ACTIONS(358), 2,
      anon_sym_,
      anon_sym_COLON,
  [2000] = 2,
    ACTIONS(274), 1,
      sym__word,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
  [2007] = 2,
    ACTIONS(360), 1,
      sym__word,
    STATE(10), 1,
      aux_sym__identifier_repeat2,
  [2014] = 1,
    ACTIONS(362), 2,
      anon_sym_,
      anon_sym_COLON,
  [2019] = 2,
    ACTIONS(245), 1,
      sym__word,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
  [2026] = 1,
    ACTIONS(364), 2,
      anon_sym_,
      anon_sym_COLON,
  [2031] = 2,
    ACTIONS(366), 1,
      sym__word,
    STATE(35), 1,
      aux_sym__identifier_repeat2,
  [2038] = 1,
    ACTIONS(191), 1,
      sym__word,
  [2042] = 1,
    ACTIONS(97), 1,
      sym__word,
  [2046] = 1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [2050] = 1,
    ACTIONS(370), 1,
      sym_dot,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 175,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 245,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 291,
  [SMALL_STATE(11)] = 317,
  [SMALL_STATE(12)] = 343,
  [SMALL_STATE(13)] = 373,
  [SMALL_STATE(14)] = 396,
  [SMALL_STATE(15)] = 419,
  [SMALL_STATE(16)] = 442,
  [SMALL_STATE(17)] = 465,
  [SMALL_STATE(18)] = 488,
  [SMALL_STATE(19)] = 511,
  [SMALL_STATE(20)] = 534,
  [SMALL_STATE(21)] = 555,
  [SMALL_STATE(22)] = 576,
  [SMALL_STATE(23)] = 599,
  [SMALL_STATE(24)] = 622,
  [SMALL_STATE(25)] = 650,
  [SMALL_STATE(26)] = 666,
  [SMALL_STATE(27)] = 682,
  [SMALL_STATE(28)] = 702,
  [SMALL_STATE(29)] = 722,
  [SMALL_STATE(30)] = 742,
  [SMALL_STATE(31)] = 762,
  [SMALL_STATE(32)] = 782,
  [SMALL_STATE(33)] = 802,
  [SMALL_STATE(34)] = 822,
  [SMALL_STATE(35)] = 837,
  [SMALL_STATE(36)] = 860,
  [SMALL_STATE(37)] = 875,
  [SMALL_STATE(38)] = 898,
  [SMALL_STATE(39)] = 921,
  [SMALL_STATE(40)] = 937,
  [SMALL_STATE(41)] = 957,
  [SMALL_STATE(42)] = 973,
  [SMALL_STATE(43)] = 993,
  [SMALL_STATE(44)] = 1013,
  [SMALL_STATE(45)] = 1030,
  [SMALL_STATE(46)] = 1047,
  [SMALL_STATE(47)] = 1064,
  [SMALL_STATE(48)] = 1075,
  [SMALL_STATE(49)] = 1092,
  [SMALL_STATE(50)] = 1103,
  [SMALL_STATE(51)] = 1120,
  [SMALL_STATE(52)] = 1137,
  [SMALL_STATE(53)] = 1151,
  [SMALL_STATE(54)] = 1165,
  [SMALL_STATE(55)] = 1179,
  [SMALL_STATE(56)] = 1193,
  [SMALL_STATE(57)] = 1215,
  [SMALL_STATE(58)] = 1229,
  [SMALL_STATE(59)] = 1243,
  [SMALL_STATE(60)] = 1257,
  [SMALL_STATE(61)] = 1279,
  [SMALL_STATE(62)] = 1293,
  [SMALL_STATE(63)] = 1312,
  [SMALL_STATE(64)] = 1331,
  [SMALL_STATE(65)] = 1346,
  [SMALL_STATE(66)] = 1365,
  [SMALL_STATE(67)] = 1384,
  [SMALL_STATE(68)] = 1399,
  [SMALL_STATE(69)] = 1418,
  [SMALL_STATE(70)] = 1437,
  [SMALL_STATE(71)] = 1452,
  [SMALL_STATE(72)] = 1461,
  [SMALL_STATE(73)] = 1480,
  [SMALL_STATE(74)] = 1495,
  [SMALL_STATE(75)] = 1510,
  [SMALL_STATE(76)] = 1520,
  [SMALL_STATE(77)] = 1530,
  [SMALL_STATE(78)] = 1546,
  [SMALL_STATE(79)] = 1558,
  [SMALL_STATE(80)] = 1568,
  [SMALL_STATE(81)] = 1578,
  [SMALL_STATE(82)] = 1590,
  [SMALL_STATE(83)] = 1600,
  [SMALL_STATE(84)] = 1610,
  [SMALL_STATE(85)] = 1620,
  [SMALL_STATE(86)] = 1630,
  [SMALL_STATE(87)] = 1646,
  [SMALL_STATE(88)] = 1658,
  [SMALL_STATE(89)] = 1668,
  [SMALL_STATE(90)] = 1678,
  [SMALL_STATE(91)] = 1688,
  [SMALL_STATE(92)] = 1697,
  [SMALL_STATE(93)] = 1710,
  [SMALL_STATE(94)] = 1719,
  [SMALL_STATE(95)] = 1732,
  [SMALL_STATE(96)] = 1745,
  [SMALL_STATE(97)] = 1756,
  [SMALL_STATE(98)] = 1769,
  [SMALL_STATE(99)] = 1782,
  [SMALL_STATE(100)] = 1795,
  [SMALL_STATE(101)] = 1805,
  [SMALL_STATE(102)] = 1815,
  [SMALL_STATE(103)] = 1821,
  [SMALL_STATE(104)] = 1827,
  [SMALL_STATE(105)] = 1833,
  [SMALL_STATE(106)] = 1839,
  [SMALL_STATE(107)] = 1849,
  [SMALL_STATE(108)] = 1859,
  [SMALL_STATE(109)] = 1865,
  [SMALL_STATE(110)] = 1875,
  [SMALL_STATE(111)] = 1885,
  [SMALL_STATE(112)] = 1891,
  [SMALL_STATE(113)] = 1901,
  [SMALL_STATE(114)] = 1907,
  [SMALL_STATE(115)] = 1917,
  [SMALL_STATE(116)] = 1927,
  [SMALL_STATE(117)] = 1937,
  [SMALL_STATE(118)] = 1943,
  [SMALL_STATE(119)] = 1953,
  [SMALL_STATE(120)] = 1959,
  [SMALL_STATE(121)] = 1969,
  [SMALL_STATE(122)] = 1979,
  [SMALL_STATE(123)] = 1985,
  [SMALL_STATE(124)] = 1995,
  [SMALL_STATE(125)] = 2000,
  [SMALL_STATE(126)] = 2007,
  [SMALL_STATE(127)] = 2014,
  [SMALL_STATE(128)] = 2019,
  [SMALL_STATE(129)] = 2026,
  [SMALL_STATE(130)] = 2031,
  [SMALL_STATE(131)] = 2038,
  [SMALL_STATE(132)] = 2042,
  [SMALL_STATE(133)] = 2046,
  [SMALL_STATE(134)] = 2050,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(107),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(93),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(87),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(111),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(92),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(21),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(97),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(56),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(74),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(81),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attribute, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(106),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(109),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(110),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(112),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attr_key, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [368] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
