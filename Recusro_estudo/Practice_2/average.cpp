#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include "show_file.h"
using namespace std;

void average(const string& input_fname, const string& output_fname){
    ifstream input(input_fname);
    ofstream output(output_fname);
    string line;
    double count = 0;
    

    while(getline(input, line)){
        double x;
        double nvalues = 0;
        double sum = 0;
        stringstream iss(line);
        while(iss >> x){
            sum += x;
            nvalues++;
        }
        output << fixed << setprecision(3) << sum/nvalues << endl;
        count++;
    }
    output << "lines=" << fixed << setprecision(0) << count << endl;

}
