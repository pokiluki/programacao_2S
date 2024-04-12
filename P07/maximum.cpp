#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include "show_file.h"

void maximum(const std::string& input_fname, const std::string& output_fname) {
    std::ifstream input_file(input_fname);
    std::ofstream output_file(output_fname);


    std::vector<double> values;
    double value;
    while (input_file >> value) {
        output_file << std::fixed << std::setprecision(3);
        output_file << value << std::endl;
        values.push_back(value);
    }


    
    
    output_file << "count=" << values.size() << "/max=" << values.back() << ::endl;

    input_file.close();
    output_file.close();
}


int main() {
    maximum("p4_test1.txt", "p4_test1_out.txt");
  show_file("p4_test1_out.txt"); 
    return 0;
}