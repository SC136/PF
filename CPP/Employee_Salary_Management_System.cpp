//Employee Salary Management System

#include <iostream>

using namespace std;

class Employee {
    
    private:

    int id;
    string name;
    string designation;
    float basic_salary;
    float gross_salary;
    
    public:
    
    Employee() {};
    
    Employee(int a, string b, string c, float d) {
        id = a;
        name = b;
        designation = c;
        basic_salary = d;
    };
    
    void calculateGrossSalary() {
        gross_salary = basic_salary + (0.2 * basic_salary) + (0.1 * basic_salary);
    }
    
    void displayDetails() {
        cout << "\nID: " << id << "\nName: " << name << "\nDesignation: " << designation << "\nBasic Salary: " << basic_salary << "\nGross Salary: " << gross_salary << "\n";
    };
};

int main() {
    int n;
    cout << "\nHow many Employees you want to add?: ";
    cin >> n;
    
    Employee emp[n];
    
    int x1;
    string x2, x3;
    float x4;
    
    for (int i = 0 ; i < n ; i++) {
        cout << "\nEnter ID, Name, Designation, Basic Salary:\n";
        cin >> x1 >> x2 >> x3 >> x4;
        emp[i] = Employee(x1, x2, x3, x4);
        emp[i].calculateGrossSalary();
    }
    
    cout << "\nEMPLOYEEs DETAILS:";
    
        for (int i = 0 ; i < n ; i++) {
        emp[i].displayDetails();
    }

    return 0;
};
