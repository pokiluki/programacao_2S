#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "print.h"

void normalise(const std::string& input_fname, const std::string& output_fname) {
    std::ifstream input_file(input_fname);
    std::ofstream output_file(output_fname);

    std::string line;
    while (std::getline(input_file, line)) {
        if (line.find_first_not_of(' ') != std::string::npos) {
            line.erase(0, line.find_first_not_of(' '));
            line.erase(line.find_last_not_of(' ') + 1);

            for (char& c : line) {
                c = std::toupper(c);
            }

            output_file << line << std::endl;
        }
    }

    input_file.close();
    output_file.close();
}