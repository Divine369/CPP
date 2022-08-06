#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Employee class represents an Employee type
class Employee
{
    public:
        Employee(string strName, double dRate);     // Constructor
        string GetName() const;       // Getter for Name
        double GetRate() const;       // Getter for Rate
        void SetRate(double dRate);     // Setter for Rate
        void AddHours(int iHours);      // add hours passed
        double GetSalary() const;             // Calculates and returns the salary

    protected:

    private:
        string strName;    // name of the Employee
        vector <int> viHoursWorked;     // Hours worked on each day
        double dRate;
        mutable bool bIsAdded;
        mutable double dSalary;
};

void PrintEmployee(const Employee &e);      // Object will be received as reference and will not be copied
#endif // EMPLOYEE_H
