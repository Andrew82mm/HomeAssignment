/*Sergienko Andrey b82 group st135882@student.spbu.ru
To run the program, you need to open the directory in the terminal, enter "g++ project2b.cpp -o main" without quotes. Then ./main. When you run it, you will be prompted to enter an expression in reverse Polish notation. Example 3 4 +, the result will be 7.*/
#include <iostream>
#include <string>
#include <stack>
#include <stdexcept>

double rpn(const std::string& expression) {
    std::stack<double> stack;
    std::string token;
    size_t pos = 0;

    while (pos < expression.length()) {
        // Find the next token (number or operator)
        size_t space = expression.find(' ', pos);
        if (space == std::string::npos) {
            space = expression.length();
        }
        token = expression.substr(pos, space - pos);
        pos = space + 1;

        // If the token is a number, add it to the stack
        if (!token.empty() && (isdigit(token[0]) || (token[0] == '-' && token.length() > 1))) {
            stack.push(std::stod(token)); // Use stod to convert a string to a number
        } else {
            // Check if there are enough operands
            if (stack.size() < 2) {
                throw std::invalid_argument("Not enough operands");
            }

            double b = stack.top(); stack.pop();
            double a = stack.top(); stack.pop();
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

    // The result will be the only element on the stack
    if (stack.size() != 1) {
        throw std::invalid_argument("Invalid expression");
    }

    return stack.top();
}

int main() {
    std::string input;

    std::cout << "Enter the expression in reverse Polish notation: ";
    std::getline(std::cin, input);

    try {
        double result = rpn(input);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
