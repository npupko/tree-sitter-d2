#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 157
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 1
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_DASH = 4,
  aux_sym__identifier_token1 = 5,
  aux_sym__identifier_token2 = 6,
  aux_sym__identifier_token3 = 7,
  aux_sym_text_block_token1 = 8,
  sym_language = 9,
  anon_sym_direction = 10,
  anon_sym_shape = 11,
  anon_sym_label = 12,
  anon_sym_constraint = 13,
  anon_sym_icon = 14,
  anon_sym_style = 15,
  anon_sym_width = 16,
  anon_sym_height = 17,
  anon_sym_3d = 18,
  anon_sym_opacity = 19,
  anon_sym_fill = 20,
  anon_sym_stroke = 21,
  anon_sym_stroke_DASHwidth = 22,
  anon_sym_stroke_DASHdash = 23,
  anon_sym_border_DASHradius = 24,
  anon_sym_font_DASHcolor = 25,
  anon_sym_shadow = 26,
  anon_sym_multiple = 27,
  anon_sym_animated = 28,
  anon_sym_link = 29,
  sym__text_attr_key = 30,
  anon_sym_source_DASHarrowhead = 31,
  anon_sym_target_DASHarrowhead = 32,
  sym__dash = 33,
  anon_sym_COLON = 34,
  sym_arrow = 35,
  sym_dot = 36,
  sym__unquoted_string = 37,
  anon_sym_SQUOTE = 38,
  anon_sym_DQUOTE = 39,
  sym__unescaped_single_string_fragment = 40,
  sym__unescaped_double_string_fragment = 41,
  sym_escape_sequence = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  sym_integer = 45,
  sym_float = 46,
  sym_line_comment = 47,
  sym__eol = 48,
  anon_sym_SEMI = 49,
  sym__text_block_start = 50,
  sym__text_block_end = 51,
  sym__text_block_raw_text = 52,
  sym_block_comment = 53,
  sym_source_file = 54,
  sym__root_definition = 55,
  sym_connection = 56,
  sym__connection_path = 57,
  sym__connection_block = 58,
  sym_container = 59,
  sym__container_block = 60,
  sym__container_block_definition = 61,
  sym_shape = 62,
  sym_shape_key = 63,
  sym__identifier = 64,
  sym_text_block = 65,
  sym__root_attribute = 66,
  sym__root_attr_key = 67,
  sym__shape_attribute = 68,
  sym__base_shape_attribute = 69,
  sym__shape_attr_key = 70,
  sym__style_attribute = 71,
  sym__style_attribute_block = 72,
  sym__inner_style_attribute = 73,
  sym__style_attr_key = 74,
  sym__common_style_attr_key = 75,
  sym__connection_attribute = 76,
  sym__connection_arrowhead_attribute = 77,
  sym__connection_arrowhead_attr_key = 78,
  sym_label = 79,
  sym_attr_value = 80,
  sym__colon = 81,
  sym_string = 82,
  sym_boolean = 83,
  sym__end = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_connection_repeat1 = 86,
  aux_sym__connection_path_repeat1 = 87,
  aux_sym__connection_block_repeat1 = 88,
  aux_sym__container_block_repeat1 = 89,
  aux_sym__identifier_repeat1 = 90,
  aux_sym__style_attribute_block_repeat1 = 91,
  aux_sym_string_repeat1 = 92,
  alias_sym_container_key = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [aux_sym__identifier_token3] = "_identifier_token3",
  [aux_sym_text_block_token1] = "text_block_token1",
  [sym_language] = "language",
  [anon_sym_direction] = "direction",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_style] = "attr_key",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_3d] = "3d",
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
  [anon_sym_link] = "link",
  [sym__text_attr_key] = "reserved",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [sym__dash] = "_dash",
  [anon_sym_COLON] = ":",
  [sym_arrow] = "arrow",
  [sym_dot] = "dot",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_single_string_fragment] = "string_fragment",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_line_comment] = "line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym__text_block_start] = "|",
  [sym__text_block_end] = "|",
  [sym__text_block_raw_text] = "raw_text",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__root_definition] = "_root_definition",
  [sym_connection] = "connection",
  [sym__connection_path] = "_connection_path",
  [sym__connection_block] = "block",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__identifier] = "_identifier",
  [sym_text_block] = "text_block",
  [sym__root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__base_shape_attribute] = "attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__connection_arrowhead_attribute] = "attribute",
  [sym__connection_arrowhead_attr_key] = "attr_key",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__colon] = "_colon",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__connection_block_repeat1] = "_connection_block_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [aux_sym__identifier_token3] = aux_sym__identifier_token3,
  [aux_sym_text_block_token1] = aux_sym_text_block_token1,
  [sym_language] = sym_language,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_3d] = anon_sym_3d,
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
  [anon_sym_link] = anon_sym_link,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [sym__dash] = sym__dash,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_arrow] = sym_arrow,
  [sym_dot] = sym_dot,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym__unescaped_double_string_fragment] = sym__unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_line_comment] = sym_line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_start] = sym__text_block_start,
  [sym__text_block_end] = sym__text_block_start,
  [sym__text_block_raw_text] = sym__text_block_raw_text,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__root_definition] = sym__root_definition,
  [sym_connection] = sym_connection,
  [sym__connection_path] = sym__connection_path,
  [sym__connection_block] = sym__connection_block,
  [sym_container] = sym_container,
  [sym__container_block] = sym__connection_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__identifier] = sym__identifier,
  [sym_text_block] = sym_text_block,
  [sym__root_attribute] = sym__root_attribute,
  [sym__root_attr_key] = anon_sym_style,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__base_shape_attribute] = sym__root_attribute,
  [sym__shape_attr_key] = anon_sym_style,
  [sym__style_attribute] = sym__root_attribute,
  [sym__style_attribute_block] = sym__connection_block,
  [sym__inner_style_attribute] = sym__root_attribute,
  [sym__style_attr_key] = anon_sym_style,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__connection_arrowhead_attribute] = sym__root_attribute,
  [sym__connection_arrowhead_attr_key] = anon_sym_style,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__colon] = sym__colon,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__connection_block_repeat1] = aux_sym__connection_block_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_container_key] = alias_sym_container_key,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_direction] = {
    .visible = true,
    .named = false,
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
  [anon_sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
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
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [sym__text_attr_key] = {
    .visible = true,
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
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_start] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_end] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__root_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_path] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_block] = {
    .visible = true,
    .named = true,
  },
  [sym_container] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_shape_key] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__base_shape_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__common_style_attr_key] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_arrowhead_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_arrowhead_attr_key] = {
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
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym__connection_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__connection_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__container_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attribute_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_container_key] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym__text_attr_key,
  },
  [2] = {
    [0] = alias_sym_container_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_shape_key, 2,
    sym_shape_key,
    alias_sym_container_key,
  sym__common_style_attr_key, 2,
    sym__common_style_attr_key,
    sym__text_attr_key,
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
  [24] = 22,
  [25] = 20,
  [26] = 22,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 19,
  [31] = 29,
  [32] = 21,
  [33] = 23,
  [34] = 27,
  [35] = 29,
  [36] = 18,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 38,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 38,
  [50] = 46,
  [51] = 51,
  [52] = 48,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 48,
  [59] = 59,
  [60] = 46,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 55,
  [67] = 59,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 53,
  [73] = 73,
  [74] = 74,
  [75] = 54,
  [76] = 73,
  [77] = 59,
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
  [133] = 132,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 132,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 144,
};

static inline bool anon_sym__character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool anon_sym__character_set_2(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= '\t' && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym__unquoted_string_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= 11 && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\f')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(169);
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(184);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_1(lookahead)) SKIP(167)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(241);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_1(lookahead)) SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_1(lookahead)) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(241);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(229);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(241);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 'w') ADVANCE(184);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(241);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(241);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == 's') ADVANCE(190);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '-') ADVANCE(173);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(241);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(150);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      if (sym__unquoted_string_character_set_1(lookahead)) SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(245);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(245);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(226);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '>') ADVANCE(225);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'k') ADVANCE(217);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 154:
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 155:
      if (lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 156:
      if (lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 157:
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 159:
      if (lookahead == '{') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 160:
      if (lookahead == '}') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 166:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 167:
      if (eof) ADVANCE(169);
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(184);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (anon_sym__character_set_1(lookahead)) SKIP(167)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 168:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 's') ADVANCE(181);
      if (anon_sym__character_set_1(lookahead)) SKIP(168)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '>') ADVANCE(225);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '>') ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '>') ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(170);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(241);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(241);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(241);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(241);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(245);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(247);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 168, .external_lex_state = 2},
  [2] = {.lex_state = 168, .external_lex_state = 2},
  [3] = {.lex_state = 168, .external_lex_state = 2},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 168, .external_lex_state = 2},
  [8] = {.lex_state = 9, .external_lex_state = 2},
  [9] = {.lex_state = 9, .external_lex_state = 2},
  [10] = {.lex_state = 9, .external_lex_state = 2},
  [11] = {.lex_state = 9, .external_lex_state = 2},
  [12] = {.lex_state = 9, .external_lex_state = 2},
  [13] = {.lex_state = 9, .external_lex_state = 2},
  [14] = {.lex_state = 9, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 2, .external_lex_state = 2},
  [22] = {.lex_state = 14, .external_lex_state = 3},
  [23] = {.lex_state = 2, .external_lex_state = 2},
  [24] = {.lex_state = 8, .external_lex_state = 3},
  [25] = {.lex_state = 7, .external_lex_state = 2},
  [26] = {.lex_state = 15, .external_lex_state = 3},
  [27] = {.lex_state = 19, .external_lex_state = 2},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 19, .external_lex_state = 2},
  [30] = {.lex_state = 7, .external_lex_state = 2},
  [31] = {.lex_state = 19, .external_lex_state = 2},
  [32] = {.lex_state = 7, .external_lex_state = 2},
  [33] = {.lex_state = 7, .external_lex_state = 2},
  [34] = {.lex_state = 19, .external_lex_state = 2},
  [35] = {.lex_state = 19, .external_lex_state = 2},
  [36] = {.lex_state = 7, .external_lex_state = 2},
  [37] = {.lex_state = 9, .external_lex_state = 2},
  [38] = {.lex_state = 14, .external_lex_state = 2},
  [39] = {.lex_state = 21, .external_lex_state = 2},
  [40] = {.lex_state = 9, .external_lex_state = 2},
  [41] = {.lex_state = 8, .external_lex_state = 2},
  [42] = {.lex_state = 14, .external_lex_state = 2},
  [43] = {.lex_state = 9, .external_lex_state = 2},
  [44] = {.lex_state = 21, .external_lex_state = 2},
  [45] = {.lex_state = 21, .external_lex_state = 2},
  [46] = {.lex_state = 9, .external_lex_state = 2},
  [47] = {.lex_state = 15, .external_lex_state = 2},
  [48] = {.lex_state = 9, .external_lex_state = 2},
  [49] = {.lex_state = 15, .external_lex_state = 2},
  [50] = {.lex_state = 9, .external_lex_state = 2},
  [51] = {.lex_state = 20, .external_lex_state = 2},
  [52] = {.lex_state = 9, .external_lex_state = 2},
  [53] = {.lex_state = 9, .external_lex_state = 2},
  [54] = {.lex_state = 9, .external_lex_state = 2},
  [55] = {.lex_state = 9, .external_lex_state = 2},
  [56] = {.lex_state = 9, .external_lex_state = 2},
  [57] = {.lex_state = 9, .external_lex_state = 2},
  [58] = {.lex_state = 9, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 9, .external_lex_state = 2},
  [61] = {.lex_state = 9, .external_lex_state = 2},
  [62] = {.lex_state = 9, .external_lex_state = 2},
  [63] = {.lex_state = 9, .external_lex_state = 2},
  [64] = {.lex_state = 9, .external_lex_state = 2},
  [65] = {.lex_state = 9, .external_lex_state = 2},
  [66] = {.lex_state = 7, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 20, .external_lex_state = 2},
  [69] = {.lex_state = 9, .external_lex_state = 2},
  [70] = {.lex_state = 9, .external_lex_state = 2},
  [71] = {.lex_state = 20, .external_lex_state = 2},
  [72] = {.lex_state = 7, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 9, .external_lex_state = 2},
  [75] = {.lex_state = 7, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 9, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 9, .external_lex_state = 2},
  [83] = {.lex_state = 9, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 9, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 22, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 20, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 22, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 22, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 9, .external_lex_state = 2},
  [133] = {.lex_state = 9, .external_lex_state = 2},
  [134] = {.lex_state = 23, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 9, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 5},
  [144] = {.lex_state = 20, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 24, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 23, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 5},
  [156] = {.lex_state = 20, .external_lex_state = 2},
};

enum {
  ts_external_token__text_block_start = 0,
  ts_external_token__text_block_end = 1,
  ts_external_token__text_block_raw_text = 2,
  ts_external_token_block_comment = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_start] = sym__text_block_start,
  [ts_external_token__text_block_end] = sym__text_block_end,
  [ts_external_token__text_block_raw_text] = sym__text_block_raw_text,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token__text_block_end] = true,
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token_block_comment] = true,
  },
  [4] = {
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token__text_block_end] = true,
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_stroke_DASHwidth] = ACTIONS(1),
    [anon_sym_stroke_DASHdash] = ACTIONS(1),
    [anon_sym_border_DASHradius] = ACTIONS(1),
    [anon_sym_font_DASHcolor] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_start] = ACTIONS(1),
    [sym__text_block_end] = ACTIONS(1),
    [sym__text_block_raw_text] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(145),
    [sym__root_definition] = STATE(2),
    [sym_connection] = STATE(96),
    [sym__connection_path] = STATE(138),
    [sym_container] = STATE(96),
    [sym_shape] = STATE(96),
    [sym_shape_key] = STATE(46),
    [sym__identifier] = STATE(65),
    [sym__root_attribute] = STATE(96),
    [sym__root_attr_key] = STATE(139),
    [sym__common_style_attr_key] = STATE(153),
    [sym_string] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [aux_sym__identifier_token1] = ACTIONS(9),
    [anon_sym_direction] = ACTIONS(11),
    [anon_sym_shape] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_constraint] = ACTIONS(13),
    [anon_sym_icon] = ACTIONS(13),
    [anon_sym_style] = ACTIONS(13),
    [anon_sym_opacity] = ACTIONS(15),
    [anon_sym_fill] = ACTIONS(15),
    [anon_sym_stroke] = ACTIONS(17),
    [anon_sym_stroke_DASHwidth] = ACTIONS(15),
    [anon_sym_stroke_DASHdash] = ACTIONS(15),
    [anon_sym_border_DASHradius] = ACTIONS(15),
    [anon_sym_font_DASHcolor] = ACTIONS(15),
    [anon_sym_shadow] = ACTIONS(15),
    [anon_sym_multiple] = ACTIONS(15),
    [anon_sym_animated] = ACTIONS(15),
    [anon_sym_link] = ACTIONS(15),
    [sym__text_attr_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(23),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(11), 1,
      anon_sym_direction,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym__eol,
    STATE(46), 1,
      sym_shape_key,
    STATE(68), 1,
      aux_sym__connection_path_repeat1,
    STATE(138), 1,
      sym__connection_path,
    STATE(139), 1,
      sym__root_attr_key,
    STATE(153), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    STATE(96), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(13), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(15), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [78] = 19,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      aux_sym__identifier_token1,
    ACTIONS(37), 1,
      anon_sym_direction,
    ACTIONS(46), 1,
      anon_sym_stroke,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__eol,
    STATE(46), 1,
      sym_shape_key,
    STATE(68), 1,
      aux_sym__connection_path_repeat1,
    STATE(138), 1,
      sym__connection_path,
    STATE(139), 1,
      sym__root_attr_key,
    STATE(153), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    STATE(96), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(40), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(43), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [156] = 16,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(64), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(50), 1,
      sym_shape_key,
    STATE(68), 1,
      aux_sym__connection_path_repeat1,
    STATE(133), 1,
      sym__connection_path,
    STATE(135), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(113), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [218] = 16,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      aux_sym__identifier_token1,
    ACTIONS(77), 1,
      anon_sym_style,
    ACTIONS(80), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(60), 1,
      sym_shape_key,
    STATE(68), 1,
      aux_sym__connection_path_repeat1,
    STATE(132), 1,
      sym__connection_path,
    STATE(135), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    ACTIONS(74), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(130), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [280] = 16,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      sym__eol,
    STATE(4), 1,
      aux_sym__container_block_repeat1,
    STATE(50), 1,
      sym_shape_key,
    STATE(68), 1,
      aux_sym__connection_path_repeat1,
    STATE(133), 1,
      sym__connection_path,
    STATE(135), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(122), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [342] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(95), 2,
      aux_sym__identifier_token1,
      anon_sym_stroke,
    ACTIONS(93), 22,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__text_attr_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
  [375] = 10,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(101), 1,
      sym__eol,
    STATE(9), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(110), 1,
      sym__inner_style_attribute,
    STATE(137), 1,
      sym__style_attr_key,
    STATE(146), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [416] = 10,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(88), 1,
      sym__inner_style_attribute,
    STATE(137), 1,
      sym__style_attr_key,
    STATE(146), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [457] = 10,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_3d,
    ACTIONS(115), 1,
      anon_sym_stroke,
    ACTIONS(118), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(125), 1,
      sym__inner_style_attribute,
    STATE(137), 1,
      sym__style_attr_key,
    STATE(146), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(112), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [498] = 7,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(95), 1,
      sym__inner_style_attribute,
    STATE(137), 1,
      sym__style_attr_key,
    STATE(146), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [530] = 4,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_stroke,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 12,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__eol,
  [555] = 4,
    ACTIONS(124), 1,
      anon_sym_stroke,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 12,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__eol,
  [580] = 3,
    ACTIONS(124), 1,
      anon_sym_stroke,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(107), 13,
      anon_sym_RBRACE,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__eol,
  [603] = 3,
    ACTIONS(129), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 12,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
  [625] = 4,
    ACTIONS(129), 1,
      aux_sym__identifier_token1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 11,
      anon_sym_DASH,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
  [649] = 4,
    ACTIONS(129), 1,
      aux_sym__identifier_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 11,
      anon_sym_DASH,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
  [673] = 6,
    ACTIONS(139), 1,
      aux_sym__identifier_token2,
    ACTIONS(141), 1,
      aux_sym__identifier_token3,
    ACTIONS(143), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [700] = 6,
    ACTIONS(147), 1,
      aux_sym__identifier_token2,
    ACTIONS(149), 1,
      aux_sym__identifier_token3,
    ACTIONS(151), 1,
      sym__dash,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(145), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [727] = 5,
    ACTIONS(155), 1,
      aux_sym__identifier_token2,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(153), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [752] = 6,
    ACTIONS(162), 1,
      aux_sym__identifier_token2,
    ACTIONS(164), 1,
      aux_sym__identifier_token3,
    ACTIONS(166), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [779] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      sym__unquoted_string,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      sym__text_block_start,
    STATE(81), 1,
      sym_label,
    STATE(84), 1,
      sym_string,
    STATE(89), 1,
      sym_text_block,
    STATE(105), 1,
      sym__container_block,
    ACTIONS(170), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [818] = 6,
    ACTIONS(139), 1,
      aux_sym__identifier_token2,
    ACTIONS(164), 1,
      aux_sym__identifier_token3,
    ACTIONS(166), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [845] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      sym__unquoted_string,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      sym__text_block_start,
    STATE(81), 1,
      sym_label,
    STATE(84), 1,
      sym_string,
    STATE(89), 1,
      sym_text_block,
    STATE(105), 1,
      sym__container_block,
    ACTIONS(170), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [884] = 5,
    ACTIONS(182), 1,
      aux_sym__identifier_token2,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(153), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [908] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      sym__unquoted_string,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      sym__text_block_start,
    STATE(81), 1,
      sym_label,
    STATE(84), 1,
      sym_string,
    STATE(89), 1,
      sym_text_block,
    STATE(105), 1,
      sym__container_block,
    ACTIONS(170), 2,
      sym__eol,
      anon_sym_SEMI,
  [946] = 10,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(188), 1,
      aux_sym__identifier_token1,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    STATE(105), 2,
      sym_container,
      sym_shape,
  [980] = 10,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(188), 1,
      aux_sym__identifier_token1,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    STATE(105), 2,
      sym_container,
      sym_shape,
  [1014] = 10,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      aux_sym__identifier_token1,
    STATE(77), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    STATE(105), 2,
      sym_container,
      sym_shape,
  [1048] = 6,
    ACTIONS(151), 1,
      sym__dash,
    ACTIONS(201), 1,
      aux_sym__identifier_token2,
    ACTIONS(203), 1,
      aux_sym__identifier_token3,
    STATE(33), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(145), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1074] = 10,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      aux_sym__identifier_token1,
    STATE(67), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    STATE(105), 2,
      sym_container,
      sym_shape,
  [1108] = 6,
    ACTIONS(166), 1,
      sym__dash,
    ACTIONS(205), 1,
      aux_sym__identifier_token2,
    ACTIONS(207), 1,
      aux_sym__identifier_token3,
    STATE(36), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1134] = 6,
    ACTIONS(166), 1,
      sym__dash,
    ACTIONS(207), 1,
      aux_sym__identifier_token3,
    ACTIONS(209), 1,
      aux_sym__identifier_token2,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1160] = 10,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(188), 1,
      aux_sym__identifier_token1,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    STATE(105), 2,
      sym_container,
      sym_shape,
  [1194] = 10,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(197), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      aux_sym__identifier_token1,
    STATE(59), 1,
      sym_shape_key,
    STATE(89), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
    STATE(105), 2,
      sym_container,
      sym_shape,
  [1228] = 6,
    ACTIONS(143), 1,
      sym__dash,
    ACTIONS(209), 1,
      aux_sym__identifier_token2,
    ACTIONS(211), 1,
      aux_sym__identifier_token3,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1254] = 8,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      anon_sym_style,
    ACTIONS(221), 1,
      sym__eol,
    STATE(37), 1,
      aux_sym__connection_block_repeat1,
    STATE(76), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(218), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(127), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1283] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(172), 1,
      sym__unquoted_string,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_label,
    STATE(84), 1,
      sym_string,
    STATE(102), 1,
      sym__connection_block,
    ACTIONS(226), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1316] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    STATE(119), 1,
      sym_attr_value,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
      sym_string,
      sym_boolean,
    ACTIONS(228), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1345] = 8,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(236), 1,
      sym__eol,
    STATE(43), 1,
      aux_sym__connection_block_repeat1,
    STATE(73), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(101), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1374] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(172), 1,
      sym__unquoted_string,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_label,
    STATE(84), 1,
      sym_string,
    STATE(102), 1,
      sym__connection_block,
    ACTIONS(226), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1407] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      sym__unquoted_string,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    STATE(84), 1,
      sym_string,
    STATE(85), 1,
      sym_label,
    STATE(128), 1,
      sym__container_block,
    ACTIONS(238), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1440] = 8,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 1,
      sym__eol,
    STATE(37), 1,
      aux_sym__connection_block_repeat1,
    STATE(73), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(91), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1469] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    STATE(131), 1,
      sym_attr_value,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
      sym_string,
      sym_boolean,
    ACTIONS(228), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1498] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    STATE(123), 1,
      sym_attr_value,
    ACTIONS(230), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 2,
      sym_string,
      sym_boolean,
    ACTIONS(228), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1527] = 8,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      sym_arrow,
    ACTIONS(252), 1,
      sym_dot,
    STATE(24), 1,
      sym__colon,
    STATE(108), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1555] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      sym__unquoted_string,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    STATE(84), 1,
      sym_string,
    STATE(85), 1,
      sym_label,
    STATE(128), 1,
      sym__container_block,
    ACTIONS(238), 2,
      sym__eol,
      anon_sym_SEMI,
  [1587] = 8,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(260), 1,
      sym_arrow,
    STATE(41), 1,
      sym__colon,
    STATE(64), 1,
      aux_sym_connection_repeat1,
    STATE(87), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1615] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(172), 1,
      sym__unquoted_string,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_label,
    STATE(84), 1,
      sym_string,
    STATE(102), 1,
      sym__connection_block,
    ACTIONS(226), 2,
      sym__eol,
      anon_sym_SEMI,
  [1647] = 8,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      sym_arrow,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(264), 1,
      sym_dot,
    STATE(22), 1,
      sym__colon,
    STATE(108), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1675] = 9,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym__identifier_token1,
    STATE(62), 1,
      sym_shape_key,
    STATE(68), 1,
      aux_sym__connection_path_repeat1,
    STATE(78), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
  [1705] = 8,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym_arrow,
    ACTIONS(268), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym__colon,
    STATE(64), 1,
      aux_sym_connection_repeat1,
    STATE(87), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1733] = 3,
    ACTIONS(143), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1751] = 3,
    ACTIONS(166), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1769] = 3,
    ACTIONS(272), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1787] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1802] = 3,
    ACTIONS(278), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1819] = 8,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      sym_arrow,
    ACTIONS(280), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym__colon,
    STATE(64), 1,
      aux_sym_connection_repeat1,
    STATE(87), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 2,
      sym__eol,
      anon_sym_SEMI,
  [1846] = 7,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(282), 1,
      sym_dot,
    STATE(24), 1,
      sym__colon,
    STATE(108), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1871] = 8,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      sym_arrow,
    ACTIONS(284), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      sym_dot,
    STATE(26), 1,
      sym__colon,
    STATE(108), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 2,
      sym__eol,
      anon_sym_SEMI,
  [1898] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(288), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1913] = 3,
    ACTIONS(278), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1930] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1945] = 4,
    ACTIONS(292), 1,
      sym_arrow,
    STATE(64), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(290), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [1964] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(295), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1979] = 3,
    ACTIONS(297), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1996] = 7,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      sym_dot,
    STATE(22), 1,
      sym__colon,
    STATE(108), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2021] = 8,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym__identifier_token1,
    STATE(57), 1,
      sym_shape_key,
    STATE(71), 1,
      aux_sym__connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
  [2048] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2063] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2078] = 8,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      aux_sym__identifier_token1,
    ACTIONS(307), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__connection_path_repeat1,
    STATE(141), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(65), 2,
      sym__identifier,
      sym_string,
  [2105] = 3,
    ACTIONS(313), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2122] = 7,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      sym_dot,
    STATE(42), 1,
      sym__colon,
    STATE(126), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2147] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2162] = 3,
    ACTIONS(323), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2179] = 7,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      sym_dot,
    ACTIONS(325), 1,
      anon_sym_COLON,
    STATE(47), 1,
      sym__colon,
    STATE(126), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 2,
      sym__eol,
      anon_sym_SEMI,
  [2203] = 7,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      sym_dot,
    STATE(26), 1,
      sym__colon,
    STATE(108), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 2,
      sym__eol,
      anon_sym_SEMI,
  [2227] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(290), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [2241] = 4,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2258] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(331), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2271] = 4,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2288] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(213), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2300] = 3,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(213), 4,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2314] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(338), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2326] = 4,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(340), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2342] = 3,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(213), 4,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2356] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(345), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2367] = 4,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(349), 2,
      sym__eol,
      anon_sym_SEMI,
  [2382] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(333), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2393] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2404] = 4,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(355), 2,
      sym__eol,
      anon_sym_SEMI,
  [2419] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(357), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2430] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2441] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      aux_sym_string_repeat1,
    ACTIONS(363), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2458] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(365), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2469] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(367), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2482] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(369), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2493] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2504] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(373), 4,
      anon_sym_DASH,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [2515] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(375), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2526] = 4,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 2,
      sym__eol,
      anon_sym_SEMI,
  [2541] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2552] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(379), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2563] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(381), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2574] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(383), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2585] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2596] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_string_repeat1,
    ACTIONS(389), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2613] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2624] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(393), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2635] = 4,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(395), 2,
      sym__eol,
      anon_sym_SEMI,
  [2650] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(397), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2661] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(399), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2672] = 4,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 2,
      sym__eol,
      anon_sym_SEMI,
  [2687] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(405), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2698] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2709] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2720] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(411), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2731] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2742] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(415), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2753] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(417), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2764] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_string_repeat1,
    ACTIONS(421), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2781] = 4,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(424), 2,
      sym__eol,
      anon_sym_SEMI,
  [2796] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(426), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2806] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(428), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2816] = 3,
    STATE(14), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(430), 2,
      sym__eol,
      anon_sym_SEMI,
  [2828] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(432), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2838] = 3,
    STATE(82), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(434), 2,
      sym__eol,
      anon_sym_SEMI,
  [2850] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(340), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2860] = 4,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(438), 1,
      sym_dot,
    STATE(136), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2874] = 3,
    STATE(15), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(440), 2,
      sym__eol,
      anon_sym_SEMI,
  [2886] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(442), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2896] = 3,
    ACTIONS(260), 1,
      sym_arrow,
    STATE(58), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2907] = 3,
    ACTIONS(260), 1,
      sym_arrow,
    STATE(52), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2918] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      aux_sym_text_block_token1,
    ACTIONS(446), 1,
      sym_language,
  [2931] = 3,
    ACTIONS(448), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2942] = 3,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2953] = 3,
    ACTIONS(452), 1,
      anon_sym_COLON,
    STATE(39), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2964] = 3,
    ACTIONS(260), 1,
      sym_arrow,
    STATE(48), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2975] = 3,
    ACTIONS(454), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2986] = 3,
    ACTIONS(62), 1,
      anon_sym_style,
    STATE(128), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2997] = 2,
    ACTIONS(278), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3005] = 2,
    ACTIONS(456), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3013] = 2,
    ACTIONS(458), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3021] = 2,
    ACTIONS(460), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3029] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3037] = 2,
    ACTIONS(464), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3045] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      sym__unescaped_single_string_fragment,
  [3055] = 2,
    ACTIONS(468), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3063] = 2,
    ACTIONS(470), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3071] = 2,
    ACTIONS(472), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3079] = 2,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3087] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      aux_sym_text_block_token1,
  [3097] = 2,
    ACTIONS(478), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3105] = 2,
    ACTIONS(480), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3113] = 2,
    ACTIONS(482), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3121] = 2,
    ACTIONS(484), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 218,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 342,
  [SMALL_STATE(8)] = 375,
  [SMALL_STATE(9)] = 416,
  [SMALL_STATE(10)] = 457,
  [SMALL_STATE(11)] = 498,
  [SMALL_STATE(12)] = 530,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 580,
  [SMALL_STATE(15)] = 603,
  [SMALL_STATE(16)] = 625,
  [SMALL_STATE(17)] = 649,
  [SMALL_STATE(18)] = 673,
  [SMALL_STATE(19)] = 700,
  [SMALL_STATE(20)] = 727,
  [SMALL_STATE(21)] = 752,
  [SMALL_STATE(22)] = 779,
  [SMALL_STATE(23)] = 818,
  [SMALL_STATE(24)] = 845,
  [SMALL_STATE(25)] = 884,
  [SMALL_STATE(26)] = 908,
  [SMALL_STATE(27)] = 946,
  [SMALL_STATE(28)] = 980,
  [SMALL_STATE(29)] = 1014,
  [SMALL_STATE(30)] = 1048,
  [SMALL_STATE(31)] = 1074,
  [SMALL_STATE(32)] = 1108,
  [SMALL_STATE(33)] = 1134,
  [SMALL_STATE(34)] = 1160,
  [SMALL_STATE(35)] = 1194,
  [SMALL_STATE(36)] = 1228,
  [SMALL_STATE(37)] = 1254,
  [SMALL_STATE(38)] = 1283,
  [SMALL_STATE(39)] = 1316,
  [SMALL_STATE(40)] = 1345,
  [SMALL_STATE(41)] = 1374,
  [SMALL_STATE(42)] = 1407,
  [SMALL_STATE(43)] = 1440,
  [SMALL_STATE(44)] = 1469,
  [SMALL_STATE(45)] = 1498,
  [SMALL_STATE(46)] = 1527,
  [SMALL_STATE(47)] = 1555,
  [SMALL_STATE(48)] = 1587,
  [SMALL_STATE(49)] = 1615,
  [SMALL_STATE(50)] = 1647,
  [SMALL_STATE(51)] = 1675,
  [SMALL_STATE(52)] = 1705,
  [SMALL_STATE(53)] = 1733,
  [SMALL_STATE(54)] = 1751,
  [SMALL_STATE(55)] = 1769,
  [SMALL_STATE(56)] = 1787,
  [SMALL_STATE(57)] = 1802,
  [SMALL_STATE(58)] = 1819,
  [SMALL_STATE(59)] = 1846,
  [SMALL_STATE(60)] = 1871,
  [SMALL_STATE(61)] = 1898,
  [SMALL_STATE(62)] = 1913,
  [SMALL_STATE(63)] = 1930,
  [SMALL_STATE(64)] = 1945,
  [SMALL_STATE(65)] = 1964,
  [SMALL_STATE(66)] = 1979,
  [SMALL_STATE(67)] = 1996,
  [SMALL_STATE(68)] = 2021,
  [SMALL_STATE(69)] = 2048,
  [SMALL_STATE(70)] = 2063,
  [SMALL_STATE(71)] = 2078,
  [SMALL_STATE(72)] = 2105,
  [SMALL_STATE(73)] = 2122,
  [SMALL_STATE(74)] = 2147,
  [SMALL_STATE(75)] = 2162,
  [SMALL_STATE(76)] = 2179,
  [SMALL_STATE(77)] = 2203,
  [SMALL_STATE(78)] = 2227,
  [SMALL_STATE(79)] = 2241,
  [SMALL_STATE(80)] = 2258,
  [SMALL_STATE(81)] = 2271,
  [SMALL_STATE(82)] = 2288,
  [SMALL_STATE(83)] = 2300,
  [SMALL_STATE(84)] = 2314,
  [SMALL_STATE(85)] = 2326,
  [SMALL_STATE(86)] = 2342,
  [SMALL_STATE(87)] = 2356,
  [SMALL_STATE(88)] = 2367,
  [SMALL_STATE(89)] = 2382,
  [SMALL_STATE(90)] = 2393,
  [SMALL_STATE(91)] = 2404,
  [SMALL_STATE(92)] = 2419,
  [SMALL_STATE(93)] = 2430,
  [SMALL_STATE(94)] = 2441,
  [SMALL_STATE(95)] = 2458,
  [SMALL_STATE(96)] = 2469,
  [SMALL_STATE(97)] = 2482,
  [SMALL_STATE(98)] = 2493,
  [SMALL_STATE(99)] = 2504,
  [SMALL_STATE(100)] = 2515,
  [SMALL_STATE(101)] = 2526,
  [SMALL_STATE(102)] = 2541,
  [SMALL_STATE(103)] = 2552,
  [SMALL_STATE(104)] = 2563,
  [SMALL_STATE(105)] = 2574,
  [SMALL_STATE(106)] = 2585,
  [SMALL_STATE(107)] = 2596,
  [SMALL_STATE(108)] = 2613,
  [SMALL_STATE(109)] = 2624,
  [SMALL_STATE(110)] = 2635,
  [SMALL_STATE(111)] = 2650,
  [SMALL_STATE(112)] = 2661,
  [SMALL_STATE(113)] = 2672,
  [SMALL_STATE(114)] = 2687,
  [SMALL_STATE(115)] = 2698,
  [SMALL_STATE(116)] = 2709,
  [SMALL_STATE(117)] = 2720,
  [SMALL_STATE(118)] = 2731,
  [SMALL_STATE(119)] = 2742,
  [SMALL_STATE(120)] = 2753,
  [SMALL_STATE(121)] = 2764,
  [SMALL_STATE(122)] = 2781,
  [SMALL_STATE(123)] = 2796,
  [SMALL_STATE(124)] = 2806,
  [SMALL_STATE(125)] = 2816,
  [SMALL_STATE(126)] = 2828,
  [SMALL_STATE(127)] = 2838,
  [SMALL_STATE(128)] = 2850,
  [SMALL_STATE(129)] = 2860,
  [SMALL_STATE(130)] = 2874,
  [SMALL_STATE(131)] = 2886,
  [SMALL_STATE(132)] = 2896,
  [SMALL_STATE(133)] = 2907,
  [SMALL_STATE(134)] = 2918,
  [SMALL_STATE(135)] = 2931,
  [SMALL_STATE(136)] = 2942,
  [SMALL_STATE(137)] = 2953,
  [SMALL_STATE(138)] = 2964,
  [SMALL_STATE(139)] = 2975,
  [SMALL_STATE(140)] = 2986,
  [SMALL_STATE(141)] = 2997,
  [SMALL_STATE(142)] = 3005,
  [SMALL_STATE(143)] = 3013,
  [SMALL_STATE(144)] = 3021,
  [SMALL_STATE(145)] = 3029,
  [SMALL_STATE(146)] = 3037,
  [SMALL_STATE(147)] = 3045,
  [SMALL_STATE(148)] = 3055,
  [SMALL_STATE(149)] = 3063,
  [SMALL_STATE(150)] = 3071,
  [SMALL_STATE(151)] = 3079,
  [SMALL_STATE(152)] = 3087,
  [SMALL_STATE(153)] = 3097,
  [SMALL_STATE(154)] = 3105,
  [SMALL_STATE(155)] = 3113,
  [SMALL_STATE(156)] = 3121,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(156),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(19),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(148),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(129),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(147),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(94),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(146),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(149),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(149),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(10),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(115),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(116),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(112),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(98),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(20),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(25),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(144),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(30),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(147),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(94),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(129),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(80),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(37),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(51),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(144),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(30),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(147),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(94),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(117),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(103),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(121),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [462] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_d2_external_scanner_create(void);
void tree_sitter_d2_external_scanner_destroy(void *);
bool tree_sitter_d2_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_d2_external_scanner_serialize(void *, char *);
void tree_sitter_d2_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_d2_external_scanner_create,
      tree_sitter_d2_external_scanner_destroy,
      tree_sitter_d2_external_scanner_scan,
      tree_sitter_d2_external_scanner_serialize,
      tree_sitter_d2_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
