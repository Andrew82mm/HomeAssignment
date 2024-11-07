/* Sergienko Andrey b82 group st135882@student.spbu.ru
Enter data in input.txt. To run the program, you need to open the directory in the terminal, enter "make" without quotes. Then ./main. The result will be output.txt file, which will contain the reflected array.*/
#include <iostream>
#include <fstream> 
#include <algorithm> 

int main() {
    const char* inputFilename = "input.bin";
    std::ifstream infile(inputFilename, std::ios::binary);
    
    if (!infile) {
        std::cerr << "Error opening file: " << inputFilename << std::endl;
        return 1;
    }

    infile.seekg(0, std::ios::end);
    std::size_t fileSize = infile.tellg();
    infile.seekg(0, std::ios::beg);

    char* buffer = new char[fileSize];

    infile.read(buffer, fileSize);
    infile.close();

    std::reverse(buffer, buffer + fileSize);

    const char* outputFilename = "output.bin";
    std::ofstream outfile(outputFilename, std::ios::binary);

    if (!outfile) {
        std::cerr << "Error opening file for writing: " << outputFilename << std::endl;
        delete[] buffer; 
        return 1;
    }

    outfile.write(buffer, fileSize);
    outfile.close();

    delete[] buffer;

    std::cout << "File processed successfully!" << std::endl;

    return 0;
}

