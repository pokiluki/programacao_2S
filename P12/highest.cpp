#include <iostream>
#include <map>
#include <list>
#include <string>

using namespace std;

string student_highest_avg(map<string, list<int>> m) {
    string highest_avg_student;
    double highest_avg = 0.0;

    for (auto it = m.begin(); it != m.end(); ++it) {
        string student = it->first;
        list<int> grades = it->second;

        double sum = 0.0;
        int count = 0;

        for (int grade : grades) {
            sum += grade;
            count++;
        }

        double avg = sum / count;

        if (avg > highest_avg) {
            highest_avg = avg;
            highest_avg_student = student;
        }
    }

    return highest_avg_student;
}