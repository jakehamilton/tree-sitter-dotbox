module.exports = grammar({
	name: "dotbox",

	extras: ($) => [/\s/, $.comment],

	rules: {
		document: ($) => repeat($.pair),

		_value: ($) => choice($.true, $.false, $.string, $.number, $.set, $.list),

		pair: ($) =>
			seq(
				field("key", choice($.identifier, $.string)),
				"=",
				field("value", $._value)
			),

		true: ($) => "true",
		false: ($) => "false",

		identifier: ($) => /[a-zA-Z][a-zA-Z_]*\??/,

		string: ($) => choice(seq('"', '"'), seq('"', $.string_content, '"')),

		string_content: ($) =>
			repeat1(choice(token.immediate(prec(1, /[^\\"]+/)), $.escape_sequence)),

		escape_sequence: ($) =>
			token.immediate(seq("\\", /(\"|\\|\/|b|f|n|r|t|u)/)),

		number: ($) => {
			const decimal_digits = /\d+/;

			const decimal_integer_literal = seq(
				optional(choice("-", "+")),
				choice(
					"0",
					seq(/[1-9]/, /[\d_]+/, decimal_digits),
					seq(/[1-9]/, optional(decimal_digits))
				)
			);

			const decimal_literal = choice(
				seq(decimal_integer_literal, ".", /[\d]/, /[\d_]+/, decimal_digits),
				seq(decimal_integer_literal, ".", decimal_digits),
				decimal_integer_literal
			);

			const binary_literal = seq(
				optional(choice("-", "+")),
				"0b",
				choice(/[0-1]+/, seq(/[0-1]/, /[0-1_]+/, /[0-1]/))
			);
			const octal_literal = seq(
				optional(choice("-", "+")),
				"0o",
				choice(/[0-7]+/, seq(/[0-7]/, /[0-7_]+/, /[0-7]/))
			);
			const hex_literal = seq(
				optional(choice("-", "+")),
				"0x",
				choice(/[\da-fA-F]+/, seq(/[\da-fA-F]/, /[\da-fA-F_]+/, /[\da-fA-F]/))
			);

			return token(
				choice(decimal_literal, binary_literal, octal_literal, hex_literal)
			);
		},

		set: ($) => seq("{", optional(repeat($.pair)), "}"),

		list: ($) => seq("[", optional(repeat($._value)), "]"),

		comment: ($) =>
			token(
				choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
			),
	},
});
