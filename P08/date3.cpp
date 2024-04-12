#include "Date3.h"
#include <iostream>
#include <sstream>
#include <string>

int Date::num_days(int year, int month) {
  int n_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    return 29;
  return n_days[month - 1];
}

bool is_digits(std::string& str){
    for (char ch : str) {
        if (!isdigit(ch)){
            return false;
        }
    }
    return true;
}

Date::Date(){
    yyyymmdd = "00010101";
}

Date::Date(int year, int month, int day) {
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > num_days(year, month) || year > 9999) {
    yyyymmdd = "00000000";
  }
  else {
    yyyymmdd = std::to_string(year);
    if (month < 10) yyyymmdd += "0";
    yyyymmdd += std::to_string(month);
    if (day < 10) yyyymmdd += "0";
    yyyymmdd += std::to_string(day);
    }
}

Date::Date(const std::string& year_month_day){
    std::stringstream ss(year_month_day);
    std::string token;
    std::getline(ss, token, '/');
    if(is_digits(token)==false){
        yyyymmdd = "00000000";    }
    else if(is_digits(token)==true){
        while (token.length() < 4)
        {
            token = "0" + token;
        }
        yyyymmdd=token;} 
    std::getline(ss, token, '/');
    if(is_digits(token)==false){
        yyyymmdd = "00000000";
    }
    else if(is_digits(token)==true){
        while (token.length() < 2)
        {
            token = "0" + token;
        }
        yyyymmdd+=token;}
    std::getline(ss, token, '/');
    if(is_digits(token)==false){
        yyyymmdd = "00000000";
    }
    else if(is_digits(token)==true){
        while (token.length() < 2)
        {
            token = "0" + token;
        }
        yyyymmdd+=token;}

    if (std::stoi(yyyymmdd.substr(0,4)) < 1 || std::stoi(yyyymmdd.substr(4,2)) < 1 || std::stoi(yyyymmdd.substr(4,2)) > 12 || std::stoi(yyyymmdd.substr(6,2)) < 1 || std::stoi(yyyymmdd.substr(6,2)) > num_days(std::stoi(yyyymmdd.substr(0,4)), std::stoi(yyyymmdd.substr(4,2))) || std::stoi(yyyymmdd.substr(0,4)) > 9999) {
        yyyymmdd = "00000000";
    }


}

// accessors
int Date::get_year() const {
    return std::stoi(yyyymmdd.substr(0, 4));
}

int Date::get_month() const {
    return std::stoi(yyyymmdd.substr(4, 2));
}

int Date::get_day() const {
    return std::stoi(yyyymmdd.substr(6, 2));
}

// other methods
bool Date::is_valid() const {
    if (yyyymmdd.length() != 8) return false;

    int year = get_year();
    int month = get_month();
    int day = get_day();

    if (year == 0 || month == 0 || day == 0 ) {
    return false;
  }
  return true;
}


int main(){
    Date d4("1900/1/1"); d4.write(); std::cout << (d4.is_valid() ? "" : "-invalid") << std::endl;
    return 0;
}
