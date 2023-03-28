#include <iostream>
#include <string>
using namespace std;

class employee {
private:
    int employee_id;
    string first_name;
    string second_name;
    string surname;
    char gender;
    string dob;
    float monthly_salary;

public:
    employee(int id, string fname, string sname, string surn, char g, string birthdate, float salary)
    : employee_id(id), first_name(fname), second_name(sname), surname(surn), gender(g), dob(birthdate), monthly_salary(salary) {}

    void show_employee() {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Name: " << first_name << " " << second_name << " " << surname << endl;
        cout << "Gender: " << gender << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Monthly Basic Salary: Sh." << monthly_salary << endl;
    }

    friend float compute_pension(const employee& emp);
};

float compute_pension(const employee& emp) {
    float pension_contribution = 0.05 * emp.monthly_salary;
    cout << "Pension Contribution: Sh." << pension_contribution << endl;
    return pension_contribution;
}

int main() {

    // Create an employee object
    employee emp_obj(44494, "Kevin", "Donald", "Shark", 'M', "01-10-2000", 67600.0);

    // Display employee information
    emp_obj.show_employee();

    // Compute pension contribution
    compute_pension(emp_obj);

    return 0;
}
