#ifndef SRUBY_DESUGAR_H
#define SRUBY_DESUGAR_H

#include "ast/ast.h"
#include "parser/parser.h"
#include <memory>

namespace ruby_typer {
namespace ast {
namespace desugar {

std::unique_ptr<Expression> stat2Expr(std::unique_ptr<Statement> &expr);

std::unique_ptr<Expression> stat2Expr(std::unique_ptr<Statement> &&expr);

std::unique_ptr<Statement> node2Tree(Context ctx, parser::Node *what);
} // namespace desugar
} // namespace ast
} // namespace ruby_typer

#endif // SRUBY_DESUGAR_H
