#pragma once

#include <string>
#include <vector>
#include <regex>
#include <cctype>
#include <functional>

enum class TokenType {
    VARIABLE_DECLARATION, INTEGER_LITERAL, TYPE_SPECIFIER, EXPRESSION, OPERATOR, KEYWORD, END_OF_FILE, UNKNOWN,
};

struct Token {
    TokenType general_type;
    std::string value;
};

class Lexer;


