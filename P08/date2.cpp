#include "Date2.h"
#include <cstring>
#include <iostream>
#include <sstream>

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


Date::Date() {
  year = 1;
  month = 1;
  day = 1;
}

Date::Date(int year, int month, int day) {
  if (year < 1 || month < 1 || month > 12 || day < 1 || day > num_days(year, month) || year > 9999) {
    this->year = 0;
    this->month = 0;
    this->day = 0;
  }
  else {
    this->year = year;
    this->month = month;
    this->day = day;}
}


Date::Date(const std::string& year_month_day) {
    std::stringstream ss(year_month_day);
    std::string token;
    std::getline(ss, token, '/');
    if(is_digits(token)==false){
        year = 10000;
    }
    else if(is_digits(token)==true)year = std::stoi(token);
    std::getline(ss, token, '/');
    if(is_digits(token)==false){
        year = 10000;
    }
    else if(is_digits(token)==true)month = std::stoi(token);
    std::getline(ss, token, '/');
    if(is_digits(token)==false){
        year = 10000;
    }
    else if(is_digits(token)==true)day = std::stoi(token);

    if (year < 1 || month < 1 || month > 12 || day < 1 || day > num_days(year, month) || year > 9999) {
        year = 0;
        month = 0;
        day = 0;
    }
}


int Date::get_year() const {
    return year;
}

int Date::get_month() const {
    return month;
}

int Date::get_day() const {
    return day;
}

bool Date::is_valid() const {
  if (year == 0 || month == 0 || day == 0 ) {
    return false;
  }
  return true;
}


int main(){
    Date d4("1900/1/1"); d4.write(); std::cout << (d4.is_valid() ? "" : "-invalid") << std::endl;
    Date d3("2ooo/2/28"); d3.write(); std::cout << (d3.is_valid() ? "" : "-invalid") << std::endl;
    return 0;
}