module.exports = grammar({
  name: 'metys',

  rules: {
    document: $ => repeat($._chunk),

    _chunk: $ => choice(
      prec(3, $.chunk),
      prec(2, $.text)),

    text: $ => /([^<|]+|[<|])/,
    chunk: $ => seq($.open, $.parameters, choice($._group_contents, $._code_contents, $._inline_code_contents), $.close),
    open: $ => '<|',
    code_sep: $ => ':',
    inline_code_sep: $ => '|',
    group_sep: $ => '@',
    close: $ => '|>',
    parameters: $ => /([^:|@]|"[^"]*")*/,
    code: $ => /[^|]*/,

    _group_contents: $ => seq($.group_sep, repeat($._chunk)),
    _code_contents: $ => seq($.code_sep, $.code),
    _inline_code_contents: $ => seq($.inline_code_sep, $.code)
  }
});
