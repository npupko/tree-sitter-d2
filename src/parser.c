#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
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
  anon_sym_DASH_DASH = 27,
  anon_sym_LT_DASH = 28,
  anon_sym_GT = 29,
  anon_sym_DASH_GT = 30,
  sym__dash = 31,
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
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__dash] = "_dash",
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
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__dash] = sym__dash,
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
  [sym__dash] = {
    .visible = false,
    .named = true,
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
  [34] = 9,
  [35] = 35,
  [36] = 12,
  [37] = 11,
  [38] = 38,
  [39] = 39,
  [40] = 21,
  [41] = 13,
  [42] = 19,
  [43] = 22,
  [44] = 15,
  [45] = 45,
  [46] = 18,
  [47] = 47,
  [48] = 48,
  [49] = 23,
  [50] = 50,
  [51] = 14,
  [52] = 52,
  [53] = 53,
  [54] = 16,
  [55] = 20,
  [56] = 56,
  [57] = 26,
  [58] = 58,
  [59] = 33,
  [60] = 17,
  [61] = 32,
  [62] = 30,
  [63] = 24,
  [64] = 29,
  [65] = 65,
  [66] = 66,
  [67] = 31,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 28,
  [73] = 73,
  [74] = 74,
  [75] = 25,
  [76] = 76,
  [77] = 13,
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
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
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
  [104] = 97,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 92,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 128,
  [134] = 129,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 135,
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
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '3') ADVANCE(133);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '`') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 's') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(181);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(172);
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
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '>') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '>') ADVANCE(169);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(169);
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
  [2] = {.lex_state = 102},
  [3] = {.lex_state = 102},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 102},
  [6] = {.lex_state = 102},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 7},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 102},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 0},
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
  [52] = {.lex_state = 102},
  [53] = {.lex_state = 102},
  [54] = {.lex_state = 102},
  [55] = {.lex_state = 102},
  [56] = {.lex_state = 102},
  [57] = {.lex_state = 102},
  [58] = {.lex_state = 102},
  [59] = {.lex_state = 102},
  [60] = {.lex_state = 102},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 102},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 102},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 102},
  [91] = {.lex_state = 102},
  [92] = {.lex_state = 102},
  [93] = {.lex_state = 102},
  [94] = {.lex_state = 102},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 102},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 102},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 102},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 102},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 102},
  [113] = {.lex_state = 102},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 102},
  [125] = {.lex_state = 102},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 102},
  [128] = {.lex_state = 102},
  [129] = {.lex_state = 102},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 102},
  [134] = {.lex_state = 102},
  [135] = {.lex_state = 102},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 102},
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
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(136),
    [sym__definition] = STATE(3),
    [sym_connection] = STATE(3),
    [sym_shape] = STATE(3),
    [sym_identifier] = STATE(4),
    [sym__root_attribute] = STATE(3),
    [sym__identifier] = STATE(35),
    [sym__eof] = STATE(3),
    [sym__end] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__identifier_repeat1] = STATE(39),
    [aux_sym__identifier_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [sym__root_attr_key] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(20), 1,
      sym__root_attr_key,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(26), 1,
      sym__dash,
    STATE(4), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(29), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    STATE(2), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__eof,
      sym__end,
      aux_sym_source_file_repeat1,
  [42] = 11,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      sym__root_attr_key,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(39), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(34), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    STATE(2), 7,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__eof,
      sym__end,
      aux_sym_source_file_repeat1,
  [84] = 15,
    ACTIONS(36), 1,
      anon_sym_,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(40), 1,
      anon_sym_DASH_DASH,
    ACTIONS(42), 1,
      anon_sym_LT_DASH,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      sym__dash,
    ACTIONS(50), 1,
      sym_dot,
    STATE(7), 1,
      aux_sym_connection_repeat1,
    STATE(27), 1,
      aux_sym_shape_repeat1,
    STATE(65), 1,
      sym_arrow,
    STATE(70), 1,
      aux_sym__identifier_repeat1,
    STATE(85), 1,
      sym__colon,
    STATE(111), 1,
      aux_sym_arrow_repeat1,
    STATE(52), 2,
      sym__eof,
      sym__end,
    ACTIONS(48), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [133] = 11,
    ACTIONS(52), 1,
      sym__word,
    ACTIONS(54), 1,
      anon_sym_style,
    ACTIONS(58), 1,
      anon_sym_,
    ACTIONS(60), 1,
      sym__dash,
    STATE(35), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    STATE(82), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym__identifier_repeat1,
    STATE(108), 1,
      sym__shape_attr_key,
    STATE(66), 2,
      sym__style_attribute,
      sym__shape_attribute,
    ACTIONS(56), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [173] = 11,
    ACTIONS(52), 1,
      sym__word,
    ACTIONS(54), 1,
      anon_sym_style,
    ACTIONS(58), 1,
      anon_sym_,
    ACTIONS(60), 1,
      sym__dash,
    STATE(35), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    STATE(82), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym__identifier_repeat1,
    STATE(108), 1,
      sym__shape_attr_key,
    STATE(69), 2,
      sym__style_attribute,
      sym__shape_attribute,
    ACTIONS(56), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [213] = 14,
    ACTIONS(36), 1,
      anon_sym_,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(40), 1,
      anon_sym_DASH_DASH,
    ACTIONS(42), 1,
      anon_sym_LT_DASH,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      sym__dash,
    ACTIONS(64), 1,
      sym_dot,
    STATE(8), 1,
      aux_sym_connection_repeat1,
    STATE(65), 1,
      sym_arrow,
    STATE(70), 1,
      aux_sym__identifier_repeat1,
    STATE(79), 1,
      sym__colon,
    STATE(111), 1,
      aux_sym_arrow_repeat1,
    STATE(58), 2,
      sym__eof,
      sym__end,
    ACTIONS(62), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [259] = 8,
    ACTIONS(68), 1,
      anon_sym_DASH_DASH,
    ACTIONS(71), 1,
      anon_sym_LT_DASH,
    ACTIONS(74), 1,
      anon_sym_DASH_GT,
    ACTIONS(77), 1,
      sym__dash,
    STATE(8), 1,
      aux_sym_connection_repeat1,
    STATE(65), 1,
      sym_arrow,
    STATE(111), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(66), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [289] = 6,
    ACTIONS(80), 1,
      sym__word,
    ACTIONS(82), 1,
      anon_sym_,
    ACTIONS(86), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat2,
    STATE(28), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [315] = 3,
    ACTIONS(90), 1,
      anon_sym_stroke,
    STATE(99), 1,
      sym__style_attr_key,
    ACTIONS(88), 11,
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
  [335] = 6,
    ACTIONS(80), 1,
      sym__word,
    ACTIONS(92), 1,
      anon_sym_,
    ACTIONS(96), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat2,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(94), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [361] = 6,
    ACTIONS(80), 1,
      sym__word,
    ACTIONS(98), 1,
      anon_sym_,
    ACTIONS(102), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat2,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [387] = 4,
    ACTIONS(106), 1,
      anon_sym_,
    ACTIONS(109), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(104), 9,
      anon_sym_COLON,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [408] = 5,
    ACTIONS(111), 1,
      sym__word,
    ACTIONS(113), 1,
      anon_sym_,
    ACTIONS(117), 1,
      sym__dash,
    STATE(30), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(115), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [431] = 5,
    ACTIONS(119), 1,
      sym__word,
    ACTIONS(121), 1,
      anon_sym_,
    ACTIONS(123), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(94), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [454] = 5,
    ACTIONS(111), 1,
      sym__word,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(127), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [477] = 5,
    ACTIONS(98), 1,
      anon_sym_,
    ACTIONS(111), 1,
      sym__word,
    ACTIONS(129), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [500] = 5,
    ACTIONS(111), 1,
      sym__word,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(129), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [523] = 5,
    ACTIONS(119), 1,
      sym__word,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(133), 1,
      sym__dash,
    STATE(16), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [546] = 5,
    ACTIONS(82), 1,
      anon_sym_,
    ACTIONS(111), 1,
      sym__word,
    ACTIONS(127), 1,
      sym__dash,
    STATE(28), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [569] = 4,
    ACTIONS(135), 1,
      sym__word,
    ACTIONS(140), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(138), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [590] = 5,
    ACTIONS(119), 1,
      sym__word,
    ACTIONS(142), 1,
      anon_sym_,
    ACTIONS(144), 1,
      sym__dash,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [613] = 5,
    ACTIONS(111), 1,
      sym__word,
    ACTIONS(117), 1,
      sym__dash,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(115), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [636] = 4,
    ACTIONS(98), 1,
      anon_sym_,
    ACTIONS(129), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [656] = 4,
    ACTIONS(113), 1,
      anon_sym_,
    ACTIONS(117), 1,
      sym__dash,
    STATE(30), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(115), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [676] = 2,
    ACTIONS(148), 1,
      sym__dash,
    ACTIONS(146), 10,
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
  [692] = 8,
    ACTIONS(36), 1,
      anon_sym_,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(152), 1,
      sym_dot,
    STATE(68), 1,
      aux_sym_shape_repeat1,
    STATE(70), 1,
      aux_sym__identifier_repeat1,
    STATE(86), 1,
      sym__colon,
    STATE(53), 2,
      sym__eof,
      sym__end,
    ACTIONS(150), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [720] = 4,
    ACTIONS(117), 1,
      sym__dash,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(115), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [740] = 4,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(129), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [760] = 4,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(156), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(154), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [780] = 4,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(127), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [800] = 4,
    ACTIONS(82), 1,
      anon_sym_,
    ACTIONS(127), 1,
      sym__dash,
    STATE(28), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [820] = 2,
    ACTIONS(140), 1,
      sym__dash,
    ACTIONS(138), 10,
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
  [836] = 6,
    ACTIONS(158), 1,
      sym__word,
    ACTIONS(160), 1,
      anon_sym_,
    ACTIONS(162), 1,
      sym__dash,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    STATE(72), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [859] = 2,
    ACTIONS(166), 1,
      sym__dash,
    ACTIONS(164), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [874] = 6,
    ACTIONS(158), 1,
      sym__word,
    ACTIONS(168), 1,
      anon_sym_,
    ACTIONS(170), 1,
      sym__dash,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [897] = 6,
    ACTIONS(158), 1,
      sym__word,
    ACTIONS(172), 1,
      anon_sym_,
    ACTIONS(174), 1,
      sym__dash,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    STATE(64), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(94), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [920] = 2,
    ACTIONS(176), 1,
      sym__dash,
    ACTIONS(66), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [935] = 7,
    ACTIONS(178), 1,
      sym__word,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(182), 1,
      sym__dash,
    STATE(12), 1,
      aux_sym__identifier_repeat2,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    STATE(47), 1,
      sym__eof,
    ACTIONS(184), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [959] = 3,
    ACTIONS(186), 1,
      sym__word,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(138), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [975] = 3,
    ACTIONS(189), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(104), 7,
      anon_sym_COLON,
      sym__word,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [991] = 5,
    ACTIONS(192), 1,
      sym__word,
    ACTIONS(194), 1,
      anon_sym_,
    ACTIONS(196), 1,
      sym__dash,
    STATE(54), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1011] = 5,
    ACTIONS(192), 1,
      sym__word,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(200), 1,
      sym__dash,
    STATE(49), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1031] = 5,
    ACTIONS(192), 1,
      sym__word,
    ACTIONS(202), 1,
      anon_sym_,
    ACTIONS(204), 1,
      sym__dash,
    STATE(46), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(94), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1051] = 2,
    ACTIONS(208), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1064] = 4,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(210), 1,
      sym__word,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1081] = 2,
    ACTIONS(214), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1094] = 2,
    ACTIONS(218), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1107] = 4,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(210), 1,
      sym__word,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(115), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1124] = 2,
    ACTIONS(222), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1137] = 4,
    ACTIONS(210), 1,
      sym__word,
    ACTIONS(224), 1,
      anon_sym_,
    STATE(62), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(115), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1154] = 2,
    ACTIONS(228), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1167] = 2,
    ACTIONS(232), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1180] = 4,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(210), 1,
      sym__word,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1197] = 4,
    ACTIONS(160), 1,
      anon_sym_,
    ACTIONS(210), 1,
      sym__word,
    STATE(72), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1214] = 2,
    ACTIONS(236), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1227] = 1,
    ACTIONS(146), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1238] = 2,
    ACTIONS(240), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1251] = 1,
    ACTIONS(138), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1262] = 4,
    ACTIONS(168), 1,
      anon_sym_,
    ACTIONS(210), 1,
      sym__word,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1279] = 3,
    ACTIONS(160), 1,
      anon_sym_,
    STATE(72), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1293] = 3,
    ACTIONS(180), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(154), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1307] = 3,
    ACTIONS(168), 1,
      anon_sym_,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1321] = 3,
    ACTIONS(180), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(100), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1335] = 7,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(242), 1,
      sym__word,
    ACTIONS(244), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(38), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym__identifier_repeat1,
  [1357] = 4,
    ACTIONS(246), 1,
      anon_sym_,
    STATE(80), 1,
      aux_sym__identifier_repeat1,
    STATE(48), 2,
      sym__eof,
      sym__end,
    ACTIONS(248), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1373] = 3,
    ACTIONS(180), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(84), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1387] = 3,
    ACTIONS(252), 1,
      sym_dot,
    STATE(68), 1,
      aux_sym_shape_repeat1,
    ACTIONS(250), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1401] = 4,
    ACTIONS(246), 1,
      anon_sym_,
    STATE(80), 1,
      aux_sym__identifier_repeat1,
    STATE(45), 2,
      sym__eof,
      sym__end,
    ACTIONS(255), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1417] = 5,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(257), 1,
      anon_sym_COLON,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    STATE(47), 1,
      sym__eof,
    ACTIONS(184), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1435] = 4,
    ACTIONS(246), 1,
      anon_sym_,
    STATE(80), 1,
      aux_sym__identifier_repeat1,
    STATE(56), 2,
      sym__eof,
      sym__end,
    ACTIONS(259), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1451] = 3,
    ACTIONS(180), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(115), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1465] = 4,
    ACTIONS(246), 1,
      anon_sym_,
    STATE(80), 1,
      aux_sym__identifier_repeat1,
    STATE(50), 2,
      sym__eof,
      sym__end,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1481] = 7,
    ACTIONS(58), 1,
      anon_sym_,
    ACTIONS(60), 1,
      sym__dash,
    ACTIONS(263), 1,
      sym__word,
    STATE(35), 1,
      sym__identifier,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
    STATE(82), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym__identifier_repeat1,
  [1503] = 3,
    ACTIONS(224), 1,
      anon_sym_,
    STATE(62), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(115), 5,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1517] = 4,
    ACTIONS(265), 1,
      anon_sym_,
    ACTIONS(267), 1,
      sym__unquoted_string,
    STATE(77), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(269), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1532] = 4,
    ACTIONS(109), 1,
      sym__unquoted_string,
    ACTIONS(271), 1,
      anon_sym_,
    STATE(77), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(104), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1547] = 4,
    ACTIONS(267), 1,
      sym__unquoted_string,
    ACTIONS(274), 1,
      anon_sym_,
    STATE(81), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(269), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1562] = 6,
    ACTIONS(276), 1,
      sym__unquoted_string,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE,
    STATE(71), 1,
      sym_label,
    STATE(96), 1,
      sym_string,
  [1581] = 4,
    ACTIONS(180), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    STATE(47), 1,
      sym__eof,
    ACTIONS(184), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1596] = 4,
    ACTIONS(265), 1,
      anon_sym_,
    ACTIONS(284), 1,
      sym__unquoted_string,
    STATE(77), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(286), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1611] = 1,
    ACTIONS(250), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
      sym_dot,
  [1620] = 6,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE,
    ACTIONS(288), 1,
      sym__unquoted_string,
    STATE(95), 1,
      sym_string,
    STATE(100), 1,
      sym_attr_value,
  [1639] = 6,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE,
    ACTIONS(288), 1,
      sym__unquoted_string,
    STATE(95), 1,
      sym_string,
    STATE(107), 1,
      sym_attr_value,
  [1658] = 6,
    ACTIONS(276), 1,
      sym__unquoted_string,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE,
    STATE(66), 1,
      sym_label,
    STATE(96), 1,
      sym_string,
  [1677] = 6,
    ACTIONS(276), 1,
      sym__unquoted_string,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE,
    STATE(69), 1,
      sym_label,
    STATE(96), 1,
      sym_string,
  [1696] = 4,
    ACTIONS(290), 1,
      anon_sym_,
    ACTIONS(292), 1,
      sym__unquoted_string,
    STATE(76), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(294), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1711] = 6,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE,
    ACTIONS(288), 1,
      sym__unquoted_string,
    STATE(95), 1,
      sym_string,
    STATE(106), 1,
      sym_attr_value,
  [1730] = 6,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_BQUOTE,
    ACTIONS(288), 1,
      sym__unquoted_string,
    STATE(73), 1,
      sym_attr_value,
    STATE(95), 1,
      sym_string,
  [1749] = 5,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(296), 1,
      sym__word,
    ACTIONS(298), 1,
      sym__dash,
    STATE(36), 1,
      aux_sym__identifier_repeat2,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
  [1765] = 3,
    ACTIONS(302), 1,
      anon_sym_GT,
    STATE(94), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(300), 3,
      anon_sym_,
      sym__word,
      sym__dash,
  [1777] = 3,
    ACTIONS(306), 1,
      sym__dash,
    STATE(92), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(304), 3,
      anon_sym_,
      sym__word,
      anon_sym_GT,
  [1789] = 5,
    ACTIONS(178), 1,
      sym__word,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(182), 1,
      sym__dash,
    STATE(12), 1,
      aux_sym__identifier_repeat2,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
  [1805] = 3,
    ACTIONS(311), 1,
      anon_sym_GT,
    STATE(92), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(309), 3,
      anon_sym_,
      sym__word,
      sym__dash,
  [1817] = 1,
    ACTIONS(313), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1824] = 1,
    ACTIONS(315), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1831] = 4,
    ACTIONS(192), 1,
      sym__word,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 1,
      sym__dash,
    STATE(112), 1,
      aux_sym__identifier_repeat1,
  [1844] = 1,
    ACTIONS(321), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1851] = 4,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(323), 1,
      anon_sym_,
    STATE(84), 1,
      sym__colon,
    STATE(114), 1,
      aux_sym__identifier_repeat1,
  [1864] = 1,
    ACTIONS(325), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1871] = 2,
    STATE(110), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(300), 3,
      anon_sym_,
      sym__word,
      sym__dash,
  [1880] = 1,
    ACTIONS(327), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1887] = 3,
    STATE(71), 1,
      sym__connection_attribute,
    STATE(105), 1,
      sym__connection_attr_key,
    ACTIONS(329), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
  [1898] = 4,
    ACTIONS(119), 1,
      sym__word,
    ACTIONS(331), 1,
      anon_sym_,
    ACTIONS(333), 1,
      sym__dash,
    STATE(113), 1,
      aux_sym__identifier_repeat1,
  [1911] = 4,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(323), 1,
      anon_sym_,
    STATE(88), 1,
      sym__colon,
    STATE(114), 1,
      aux_sym__identifier_repeat1,
  [1924] = 1,
    ACTIONS(335), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1931] = 1,
    ACTIONS(337), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1938] = 4,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(323), 1,
      anon_sym_,
    STATE(83), 1,
      sym__colon,
    STATE(114), 1,
      aux_sym__identifier_repeat1,
  [1951] = 4,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(323), 1,
      anon_sym_,
    STATE(89), 1,
      sym__colon,
    STATE(114), 1,
      aux_sym__identifier_repeat1,
  [1964] = 2,
    STATE(92), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(309), 3,
      anon_sym_,
      sym__word,
      sym__dash,
  [1973] = 3,
    ACTIONS(302), 1,
      anon_sym_DASH_GT,
    ACTIONS(339), 1,
      sym__dash,
    STATE(115), 1,
      aux_sym_arrow_repeat1,
  [1983] = 3,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(210), 1,
      sym__word,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
  [1993] = 3,
    ACTIONS(111), 1,
      sym__word,
    ACTIONS(180), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
  [2003] = 3,
    ACTIONS(180), 1,
      anon_sym_,
    ACTIONS(257), 1,
      anon_sym_COLON,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
  [2013] = 3,
    ACTIONS(304), 1,
      anon_sym_DASH_GT,
    ACTIONS(341), 1,
      sym__dash,
    STATE(115), 1,
      aux_sym_arrow_repeat1,
  [2023] = 3,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      aux_sym_string_token2,
    STATE(123), 1,
      aux_sym_string_repeat2,
  [2033] = 3,
    ACTIONS(348), 1,
      anon_sym_BQUOTE,
    ACTIONS(350), 1,
      aux_sym_string_token3,
    STATE(117), 1,
      aux_sym_string_repeat3,
  [2043] = 3,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token2,
    STATE(118), 1,
      aux_sym_string_repeat2,
  [2053] = 3,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    ACTIONS(360), 1,
      aux_sym_string_token1,
    STATE(119), 1,
      aux_sym_string_repeat1,
  [2063] = 3,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(363), 1,
      aux_sym_string_token1,
    STATE(122), 1,
      aux_sym_string_repeat1,
  [2073] = 3,
    ACTIONS(344), 1,
      anon_sym_BQUOTE,
    ACTIONS(365), 1,
      aux_sym_string_token3,
    STATE(126), 1,
      aux_sym_string_repeat3,
  [2083] = 3,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
    ACTIONS(369), 1,
      aux_sym_string_token1,
    STATE(119), 1,
      aux_sym_string_repeat1,
  [2093] = 3,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      aux_sym_string_token2,
    STATE(118), 1,
      aux_sym_string_repeat2,
  [2103] = 1,
    ACTIONS(309), 3,
      anon_sym_,
      sym__word,
      sym__dash,
  [2109] = 1,
    ACTIONS(373), 3,
      anon_sym_,
      sym__word,
      sym__dash,
  [2115] = 3,
    ACTIONS(367), 1,
      anon_sym_BQUOTE,
    ACTIONS(375), 1,
      aux_sym_string_token3,
    STATE(117), 1,
      aux_sym_string_repeat3,
  [2125] = 1,
    ACTIONS(300), 3,
      anon_sym_,
      sym__word,
      sym__dash,
  [2131] = 2,
    ACTIONS(178), 1,
      sym__word,
    STATE(12), 1,
      aux_sym__identifier_repeat2,
  [2138] = 2,
    ACTIONS(377), 1,
      sym__word,
    STATE(9), 1,
      aux_sym__identifier_repeat2,
  [2145] = 1,
    ACTIONS(379), 2,
      anon_sym_,
      anon_sym_COLON,
  [2150] = 1,
    ACTIONS(381), 2,
      anon_sym_,
      anon_sym_COLON,
  [2155] = 1,
    ACTIONS(383), 2,
      anon_sym_,
      anon_sym_COLON,
  [2160] = 2,
    ACTIONS(296), 1,
      sym__word,
    STATE(36), 1,
      aux_sym__identifier_repeat2,
  [2167] = 2,
    ACTIONS(385), 1,
      sym__word,
    STATE(34), 1,
      aux_sym__identifier_repeat2,
  [2174] = 1,
    ACTIONS(210), 1,
      sym__word,
  [2178] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [2182] = 1,
    ACTIONS(389), 1,
      sym_dot,
  [2186] = 1,
    ACTIONS(111), 1,
      sym__word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 173,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 335,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 408,
  [SMALL_STATE(15)] = 431,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 477,
  [SMALL_STATE(18)] = 500,
  [SMALL_STATE(19)] = 523,
  [SMALL_STATE(20)] = 546,
  [SMALL_STATE(21)] = 569,
  [SMALL_STATE(22)] = 590,
  [SMALL_STATE(23)] = 613,
  [SMALL_STATE(24)] = 636,
  [SMALL_STATE(25)] = 656,
  [SMALL_STATE(26)] = 676,
  [SMALL_STATE(27)] = 692,
  [SMALL_STATE(28)] = 720,
  [SMALL_STATE(29)] = 740,
  [SMALL_STATE(30)] = 760,
  [SMALL_STATE(31)] = 780,
  [SMALL_STATE(32)] = 800,
  [SMALL_STATE(33)] = 820,
  [SMALL_STATE(34)] = 836,
  [SMALL_STATE(35)] = 859,
  [SMALL_STATE(36)] = 874,
  [SMALL_STATE(37)] = 897,
  [SMALL_STATE(38)] = 920,
  [SMALL_STATE(39)] = 935,
  [SMALL_STATE(40)] = 959,
  [SMALL_STATE(41)] = 975,
  [SMALL_STATE(42)] = 991,
  [SMALL_STATE(43)] = 1011,
  [SMALL_STATE(44)] = 1031,
  [SMALL_STATE(45)] = 1051,
  [SMALL_STATE(46)] = 1064,
  [SMALL_STATE(47)] = 1081,
  [SMALL_STATE(48)] = 1094,
  [SMALL_STATE(49)] = 1107,
  [SMALL_STATE(50)] = 1124,
  [SMALL_STATE(51)] = 1137,
  [SMALL_STATE(52)] = 1154,
  [SMALL_STATE(53)] = 1167,
  [SMALL_STATE(54)] = 1180,
  [SMALL_STATE(55)] = 1197,
  [SMALL_STATE(56)] = 1214,
  [SMALL_STATE(57)] = 1227,
  [SMALL_STATE(58)] = 1238,
  [SMALL_STATE(59)] = 1251,
  [SMALL_STATE(60)] = 1262,
  [SMALL_STATE(61)] = 1279,
  [SMALL_STATE(62)] = 1293,
  [SMALL_STATE(63)] = 1307,
  [SMALL_STATE(64)] = 1321,
  [SMALL_STATE(65)] = 1335,
  [SMALL_STATE(66)] = 1357,
  [SMALL_STATE(67)] = 1373,
  [SMALL_STATE(68)] = 1387,
  [SMALL_STATE(69)] = 1401,
  [SMALL_STATE(70)] = 1417,
  [SMALL_STATE(71)] = 1435,
  [SMALL_STATE(72)] = 1451,
  [SMALL_STATE(73)] = 1465,
  [SMALL_STATE(74)] = 1481,
  [SMALL_STATE(75)] = 1503,
  [SMALL_STATE(76)] = 1517,
  [SMALL_STATE(77)] = 1532,
  [SMALL_STATE(78)] = 1547,
  [SMALL_STATE(79)] = 1562,
  [SMALL_STATE(80)] = 1581,
  [SMALL_STATE(81)] = 1596,
  [SMALL_STATE(82)] = 1611,
  [SMALL_STATE(83)] = 1620,
  [SMALL_STATE(84)] = 1639,
  [SMALL_STATE(85)] = 1658,
  [SMALL_STATE(86)] = 1677,
  [SMALL_STATE(87)] = 1696,
  [SMALL_STATE(88)] = 1711,
  [SMALL_STATE(89)] = 1730,
  [SMALL_STATE(90)] = 1749,
  [SMALL_STATE(91)] = 1765,
  [SMALL_STATE(92)] = 1777,
  [SMALL_STATE(93)] = 1789,
  [SMALL_STATE(94)] = 1805,
  [SMALL_STATE(95)] = 1817,
  [SMALL_STATE(96)] = 1824,
  [SMALL_STATE(97)] = 1831,
  [SMALL_STATE(98)] = 1844,
  [SMALL_STATE(99)] = 1851,
  [SMALL_STATE(100)] = 1864,
  [SMALL_STATE(101)] = 1871,
  [SMALL_STATE(102)] = 1880,
  [SMALL_STATE(103)] = 1887,
  [SMALL_STATE(104)] = 1898,
  [SMALL_STATE(105)] = 1911,
  [SMALL_STATE(106)] = 1924,
  [SMALL_STATE(107)] = 1931,
  [SMALL_STATE(108)] = 1938,
  [SMALL_STATE(109)] = 1951,
  [SMALL_STATE(110)] = 1964,
  [SMALL_STATE(111)] = 1973,
  [SMALL_STATE(112)] = 1983,
  [SMALL_STATE(113)] = 1993,
  [SMALL_STATE(114)] = 2003,
  [SMALL_STATE(115)] = 2013,
  [SMALL_STATE(116)] = 2023,
  [SMALL_STATE(117)] = 2033,
  [SMALL_STATE(118)] = 2043,
  [SMALL_STATE(119)] = 2053,
  [SMALL_STATE(120)] = 2063,
  [SMALL_STATE(121)] = 2073,
  [SMALL_STATE(122)] = 2083,
  [SMALL_STATE(123)] = 2093,
  [SMALL_STATE(124)] = 2103,
  [SMALL_STATE(125)] = 2109,
  [SMALL_STATE(126)] = 2115,
  [SMALL_STATE(127)] = 2125,
  [SMALL_STATE(128)] = 2131,
  [SMALL_STATE(129)] = 2138,
  [SMALL_STATE(130)] = 2145,
  [SMALL_STATE(131)] = 2150,
  [SMALL_STATE(132)] = 2155,
  [SMALL_STATE(133)] = 2160,
  [SMALL_STATE(134)] = 2167,
  [SMALL_STATE(135)] = 2174,
  [SMALL_STATE(136)] = 2178,
  [SMALL_STATE(137)] = 2182,
  [SMALL_STATE(138)] = 2186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(101),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(91),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(127),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(111),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(13),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(104),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 5),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(97),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(41),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(74),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 2),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(77),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(92),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attribute, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 5),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(115),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(117),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(118),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(119),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attr_key, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [387] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
