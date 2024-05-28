#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stEmployee
{
    string FirstName;
    string LastName;
    float Salary;
};

int main() {

    vector <stEmployee> vEmployees;

    stEmployee tempEmployee;

    tempEmployee.FirstName = "Ebram";
    tempEmployee.LastName = "Sobhy";
    tempEmployee.Salary = 3000;
    vEmployees.push_back(tempEmployee);

    tempEmployee.FirstName = "Ahmed";
    tempEmployee.LastName = "Ali";
    tempEmployee.Salary = 7000;
    vEmployees.push_back(tempEmployee);

    tempEmployee.FirstName = "Asmaa";
    tempEmployee.LastName = "Mohamed";
    tempEmployee.Salary = 40000;
    vEmployees.push_back(tempEmployee);
    
    cout << "Employees Vector: \n \n";

    // ranged loop
    for (stEmployee &Employee : vEmployees)
    {
        cout << "FirstName : " << Employee.FirstName << endl;
        cout << "LastName : " << Employee.LastName << endl;
        cout << "Salary : " << Employee.Salary << endl;
        cout << endl;
    }

    return 0;
}