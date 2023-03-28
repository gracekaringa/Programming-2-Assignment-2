#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class employee {
private:
    int employee_id;
    string first_name;
    string second_name;
    string surname;
    string gender;
    string dob;
    float monthly_salary;

public:
    employee(int id, string fname, string sname, string surn, string g, string birthdate, float salary)
    : employee_id(id), first_name(fname), second_name(sname), surname(surn), gender(g), dob(birthdate), monthly_salary(salary) {}

    void show_employee() {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Name: " << first_name << " " << second_name << " " << surname << endl;
        cout << "Gender: " << gender << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Monthly Basic Salary: $" << monthly_salary << endl;
    }

    friend float compute_pension(const employee& emp);
};

float compute_pension(const employee& emp) {
    float pension_contribution = 0.05 * emp.monthly_salary;
    cout << "Pension Contribution: $" << pension_contribution << endl;
    return pension_contribution;
}

int main() {
    // Prompt user to enter employee details
    int employee_id;
    string first_name, second_name, surname, dob_str;
    string gender;
    float monthly_salary;

    cout << "Enter Employee ID: ";
    cin >> employee_id;

    cout << "Enter First Name: ";
    cin >> first_name;

    cout << "Enter Second Name: ";
    cin >> second_name;

    cout << "Enter Surname: ";
    cin >> surname;

    cout << "Enter Gender (Male/Female): ";
    cin >> gender;

    cout << "Enter Date of Birth (dd-mm-yyyy): ";
    cin >> dob_str;

    cout << "Enter Monthly Basic Salary: $";
    cin >> monthly_salary;

    // Create an employee object
    employee emp_obj(employee_id, first_name, second_name, surname, gender, dob_str, monthly_salary);

    // Display employee information
    emp_obj.show_employee();

    // Compute pension contribution
    compute_pension(emp_obj);

    return 0;
}
