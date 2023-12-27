#include "../include/string_variables.hpp"

class StringNode : public ASTNode {
private:
    std::string value;
    size_t length;

public:
    explicit StringNode(std::string str) : value(str), length(str.length()) {}

    //function to append to the back of the string
    void append(std::string& str) {
        value.append(str);
        length = value.length();
    }

    void prepend(std::string& str) {
        value = str + value;
        length = value.length();
    }

    bool contains(std::string& str) {
        return value.find(str) != std::string::npos;
    }

    void reverse() {
        std::reverse(value.begin(), value.end());
    }

    std::vector<std::string> split() {
        std::vector<std::string> str_set;
        std::string str = "";

        for(size_t i  = 0; i < length; ++i) {
            if (value[i] == ' ') {
                if (!str.empty()) {
                    str_set.push_back(str);
                    str = "";
                }
                continue;
            }
            str += value[i];
        }

        if (!str.empty()) {
            str_set.push_back(str);
        }

        return str_set;
    }

    std::vector<std::string> split(char ch) {
        std::vector<std::string> str_set;
        std::string str = "";

        for(size_t i  = 0; i < length; ++i) {
            if (value[i] == ch) {
                if (!str.empty()) {
                    str_set.push_back(str);
                    str = "";
                }
                continue;
            }
            str += value[i];
        }

        if (!str.empty()) {
            str_set.push_back(str);
        }

        return str_set;
    }

    size_t size() {
        return length;
    }

    void display(int depth = 0) const override {
        std::cout << value;
    }
};
