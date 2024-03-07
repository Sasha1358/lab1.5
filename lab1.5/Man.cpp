// Man.cpp
#include "Man.h"
#include <iostream>

Man::Man()
{}

Man::Man(const std::string& name, int age, const std::string& gender, double weight) {
    Init(name, age, gender, weight);
}

void Man::Init(const std::string& name, int age, const std::string& gender, double weight) {
    setName(name);
    setAge(age);
    setGender(gender);
    setWeight(weight);
}

void Man::changeName(const std::string& newName) {
    setName(newName);
}

void Man::changeAge(int newAge) {
    setAge(newAge);
}

void Man::changeWeight(double newWeight) {
    setWeight(newWeight);
}

void Man::Display() const {
    std::cout << std::endl;
    std::cout << "name = " << getName() << std::endl;
    std::cout << "age = " << getAge() << std::endl;
    std::cout << "gender = " << getGender() << std::endl;
    std::cout << "weight = " << getWeight() << std::endl;
}

void Man::Read() {
    std::string name, gender;
    int age;
    double weight;

    std::cout << std::endl;
    std::cout << "name =  "; std::cin >> name;
    std::cout << "age =  "; std::cin >> age;
    std::cout << "gender =  "; std::cin >> gender;
    std::cout << "weight =  "; std::cin >> weight;

    Init(name, age, gender, weight);
}

void Man::setName(const std::string& name) {
    this->name = name;
}

void Man::setAge(int age) {
    this->age = age;
}

void Man::setGender(const std::string& gender) {
    this->gender = gender;
}

void Man::setWeight(double weight) {
    this->weight = weight;
}
