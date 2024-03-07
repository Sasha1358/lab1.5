// Student.h
#pragma once
#include "Man.h"

class Student {
private:
    Man person;
    int yearOfStudy;

public:
    Student();

    Man getPerson() const { return person; }
    int getYearOfStudy() const { return yearOfStudy; }

    void setPerson(const Man& person) { this->person = person; }
    void setYearOfStudy(int year) { this->yearOfStudy = year; }

    void changePerson(const Man& newPerson);
    void increaseYearOfStudy();

    void Init(const std::string& spec, const Man& man, int year);
    void Display() const;
    void Read();
};
