#include <iostream>
#include<string>

class Person
{
    private:
    std::string name;
    int age;
    public:
    Person(std::string name, int age)
    {this->name = name;
    this->age = age;
    }
    std::string getName()
    {
        return name;
    }
};
class Student:
public Person
    {
        private:
        std::string institution;
        int year;
        int regNo;
        public:
        Student(std::string name, int age, std::string institution, int year, int regNo)
        :Person(name,age), institution(institution), year(year), regNo(regNo)
        {
        }
        std::string getInstitution()
        {
            return institution;
        }
        int getYear()
        {
            return year;
        }
        int getRegNo()
        {
            return regNo;
        }
    };
    int main()
    {Student("Tom",21,"university")
    }
