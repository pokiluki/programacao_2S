#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "show_file.h"

void calc_medians(const std::string& input_fname, const std::string& output_fname) {
    std::ifstream input_file(input_fname);
    std::ofstream output_file(output_fname);


    std::string line;
    while (std::getline(input_file, line)) {
        if (line.empty() || line[0] == '#') {
            continue;
        }

        std::istringstream iss(line);
        std::string identifier;
        iss >> identifier;

        std::vector<double> values;
        double value;
        while (iss >> value) {
            values.push_back(value);
        }

        std::sort(values.begin(), values.end());

        double median;
        if (values.size() % 2 == 1) {
            median = values[values.size() / 2];
        } else {
            median = 0.5 * (values[values.size() / 2 - 1] + values[values.size() / 2]);
        }

        output_file << std::fixed << std::setprecision(1) << identifier << " " << median << std::endl;
    }

    input_file.close();
    output_file.close();
}