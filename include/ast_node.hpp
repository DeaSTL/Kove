#pragma once

#include <iostream>
#include <memory>
#include <functional>
#include "lexer.hpp"

///Abstract Syntax Tree
class ASTNode {
public:
    virtual ~ASTNode() = default;
    virtual void display(int depth = 0) const = 0;

    //Common functions
};

using NodeCreator = std::function<std::unique_ptr<ASTNode>(const Token&)>;
extern std::map<std::string, NodeCreator> node_mapper;
