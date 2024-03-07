// Man.h
#pragma once
#include <string>

class Man {
private:
    std::string name;
    int age;
    std::string gender;
    double weight;

public:
    Man();
    // Add a constructor with parameters
    Man(const std::string& name, int age, const std::string& gender, double weight);

    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getGender() const { return gender; }
    double getWeight() const { return weight; }

    void setName(const std::string& name);
    void setAge(int age);
    void setGender(const std::string& gender);
    void setWeight(double weight);

    void changeName(const std::string& newName);
    void changeAge(int newAge);
    void changeWeight(double newWeight);

    void Init(const std::string& name, int age, const std::string& gender, double weight);
    void Display() const;
    void Read();
};
