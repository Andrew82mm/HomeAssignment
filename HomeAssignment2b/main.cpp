/*Sergienko Andrey b82 group st135882@student.spbu.ru
To run the program, you need to open the directory in the terminal, enter "make" without quotes. Then ./main. When you run it, you will be prompted to enter an expression in reverse Polish notation. Example 3 4 +, the result will be 7.*/
#include <iostream>
#include <string>
#include "rpn.h"

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

