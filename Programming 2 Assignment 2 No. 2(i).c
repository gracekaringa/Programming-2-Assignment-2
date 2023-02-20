#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    Person(int age, std::string firstName, std::string lastName);
    int getAge();
    std::string getFirstName();
    std::string getLastName();
    void setAge(int age);
    void setFirstName(std::string FirstName);
    void setLastName(std::string LastName);

private:
    int m_age;
    std::string firstName;
    std::string lastName;
};

Person::Person(int age,std::string firstName, std::string lastName)
{
    m_age = age;
    firstName = firstName;
    lastName = lastName;
}

int Person::getAge()
{
    return m_age;
}

std::string Person::getFirstName()
{
    return firstName;
}

std::string Person::getLastName()
{
    return lastName;
}

void Person::setAge(int age)
{
    m_age = age;
}

void Person::setFirstName(std::string FirstName)
{
    firstName = firstName;
}
void Person::setLastName(std::string lastName)
{
    lastName = lastName;
}

    return 0;
}
