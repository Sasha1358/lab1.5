// Student.cpp
#include "Student.h"
#include <iostream>

Student::Student() : yearOfStudy(0) {}

void Student::changePerson(const Man& newPerson) {
    setPerson(newPerson);
}

void Student::increaseYearOfStudy() {
    yearOfStudy++;
}

void Student::Init(const std::string& spec, const Man& man, int year) {
    setPerson(man);
    setYearOfStudy(year);   
}

void Student::Display() const {
    std::cout << std::endl;
    std::cout << "man = " << std::endl;
    getPerson().Display(); 
    std::cout << "yearOfStudy = " << getYearOfStudy() << std::endl;
}

void Student::Read() {
    std::string spec;
    Man m;
    int year;

    std::cout << std::endl;
    std::cout << "Man =  " << std::endl;
    m.Read();
    std::cout << "spec =  "; std::cin >> spec;
    std::cout << "yearOfStudy =  "; std::cin >> year;

    Init(spec, m, year);
}
