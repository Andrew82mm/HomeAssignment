#include "rpn.h"
#include "ArrayStack.h"
#include <stdexcept>

double rpn(const std::string& expression) {
    ArrayStack stack(100);
    std::string token;
    size_t pos = 0;

    while (pos < expression.length()) {
        size_t space = expression.find(' ', pos);
        if (space == std::string::npos) {
            space = expression.length();
        }
        token = expression.substr(pos, space - pos);
        pos = space + 1;

        if (!token.empty() && (isdigit(token[0]) || (token[0] == '-' && token.length() > 1))) {
            stack.push(std::stod(token));
        } else {
            if (stack.size() < 2) {
                throw std::invalid_argument("Not enough operands");
            }

            double b = stack.pop();
            double a = stack.pop();
            double result = 0;

            switch (token[0]) {
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                case '*':
                    result = a * b;
                    break;
                case '/':
                    if (b == 0) {
                        throw std::invalid_argument("Division by zero");
                    }
                    result = a / b;
                    break;
                default:
                    throw std::invalid_argument("Invalid operator");
            }

            stack.push(result);
        }
    }

    if (stack.size() != 1) {
        throw std::invalid_argument("Invalid expression");
    }

    return stack.peek();
}

