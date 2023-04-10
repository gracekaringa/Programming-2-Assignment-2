#include <string>
using namespace std;

class Person {
protected:
    string f_name;
    string l_name;
    int age;

public:
    Person(string f, string l, int a) : f_name(f), l_name(l), age(a) {}

    void getValue() {
        cout << "Age: " << age << endl;
        cout << "Name: " << f_name << " " << l_name << endl;
    }

    void setValue(int a, string f, string l) {
        age = a;
        f_name = f;
        l_name = l;
    }
};

class Student : public Person {
private:
    string institution;
    int year;
    string reg_no;

public:
    Student(int a, string f, string l, string inst, int y, string reg)
        : Person(f, l, a), institution(inst), year(y), reg_no(reg) {}

    void getValue() {
        Person::getValue();
        cout << "Institution: " << institution << endl;
        cout << "Year of Study: " << year << endl;
        cout << "Registration Number: " << reg_no << endl;
    }

    void setValue(int a, string f, string l, string inst, int y, string reg) {
        Person::setValue(a, f, l);
        institution = inst;
        year = y;
        reg_no = reg;
    }
};
int main() {
    Student student(20, "Joe", "Goldberg", "Harvard University", 2, "123456");

    student.getValue();

    cout << endl;

    student.setValue(21, "Love", "Quinn", "Bentley University", 3, "789012");

    student.getValue();

    return 0;
}

