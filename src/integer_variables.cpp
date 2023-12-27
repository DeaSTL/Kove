#include "../include/integer_variables.hpp"



class IntNode : public ASTNode {
public:
    int value;

    explicit IntNode(int val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};

class I8Node : public ASTNode {
public:
    int8_t value;

    explicit I8Node(int8_t val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};

class I16Node : public ASTNode {
public:
    int16_t value;

    explicit I16Node(int16_t val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};

class I32Node : public ASTNode {
public:
    int32_t value;

    explicit I32Node(int32_t val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};

class I64Node : public ASTNode {
public:
    int64_t value;

    explicit I64Node(int64_t val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};

class UIntNode : public ASTNode {
public:
    unsigned int value;

    explicit UIntNode(unsigned int val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};

class U8Node : public ASTNode {
public:
    uint8_t value;

    explicit U8Node(uint8_t val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};

class U16Node : public ASTNode {
public:
    uint16_t value;

    explicit U16Node(uint16_t val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};

class U32Node : public ASTNode {
public:
    uint32_t value;

    explicit U32Node(uint32_t val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};


class U64Node : public ASTNode {
public:
    uint64_t value;

    explicit U64Node(uint64_t val) : value(val) {}

    void display(int depth = 0) const override {
        std::cout << value;
    }
};
