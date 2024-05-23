#include <iostream>
#include <vector>
#include "Person.h" 
#include "Date.h" 

void born_before(const std::vector<Person>& persons, const Date& date) {
    date.show();
    std::cout << ":";
    
    for (Person person : persons) {
        if (person.get_birth_date().is_before(date)) {
            std::cout << " ";
            person.show();
        }
    }
}