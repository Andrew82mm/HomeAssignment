/* Sergienko Andrey b82 group st135882@student.spbu.ru
Enter data in input.txt. To run the program, you need to open the directory in the terminal, enter "g++ project2a.cpp -o main" without quotes. Then ./main. The result will be output.txt file, which will contain the reflected array.*/
#include <iostream>
#include <fstream>   // To work with files
#include <algorithm> // For std::reverse

int main() {
    // Open the binary file for reading
    const char* inputFilename = "input.bin";
    std::ifstream infile(inputFilename, std::ios::binary);
    
    if (!infile) {
        std::cerr << "Error opening file: " << inputFilename << std::endl;
        return 1;
    }

    // Find out the file size
    infile.seekg(0, std::ios::end);
    std::size_t fileSize = infile.tellg();
    infile.seekg(0, std::ios::beg);

    // Allocate memory for the array
    char* buffer = new char[fileSize];

    // Reading a file into an array
    infile.read(buffer, fileSize);
    infile.close();

    // Unfold the array
    std::reverse(buffer, buffer + fileSize);

    // Write to a new file
    const char* outputFilename = "output.bin";
    std::ofstream outfile(outputFilename, std::ios::binary);

    if (!outfile) {
        std::cerr << "Error opening file for writing: " << outputFilename << std::endl;
        delete[] buffer; // Freeing up memory before exiting
        return 1;
    }

    outfile.write(buffer, fileSize);
    outfile.close();

    // Freeing up allocated memory
    delete[] buffer;

    std::cout << "File processed successfully!" << std::endl;

    return 0;
}

