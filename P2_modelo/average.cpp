#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "show_file.h"
using namespace std;


void average(const string& input_fname, const string& output_fname){

    ifstream file(input_fname);
    ofstream output_file(output_fname);
    string line;
    int lines_number = 0;

    while(getline(file, line)){
        double sum = 0;
        double count = 0;
        double number;
        lines_number++;
        istringstream iss(line);
        while(iss >> number){
            sum += number;
            count++;
        }
        double avg = sum/count;
        output_file << fixed << setprecision(3);
        output_file << avg << endl;
    }
    output_file << "lines=" << lines_number << endl;
    
    file.close();
    output_file.close();
}


int main(){ average("p1a-1.txt", "p1a-1_out.txt");
  show_file("p1a-1_out.txt"); return 0;}