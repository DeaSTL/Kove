#include "../include/variable_declaration.hpp"


///Declaration of a variable
class VariableDeclarationNode : public ASTNode {
public:
    std::string variableName;
    std::unique_ptr<ASTNode> variable;

    VariableDeclarationNode(std::string& name, std::unique_ptr<ASTNode> type)
        : variableName(name), variable(std::move(type)) {}

    void display(int depth = 0) const override {
        std::string indent(depth * 2, ' ');
        
        std::cout << indent << "VariableDeclarations: " << variableName;
        std::cout << " = ";
        variable->display();
        std::cout << std::endl;
    }
};
