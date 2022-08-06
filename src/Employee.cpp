#include "Employee.h"

Employee::Employee(string strName, double dRate)
{
    this->strName = strName;
    this->dRate = dRate;
    this->bIsAdded = false;
}

string Employee::GetName() const{
    return this->strName;
}

double Employee::GetRate() const{
    return this->dRate;
}

void Employee::SetRate(double dRate){
    this->dRate = dRate;
}

void Employee::AddHours(int iHours){
    this->viHoursWorked.push_back(iHours);
    this->bIsAdded = true;
}

double Employee::GetSalary() const{
    int iSum = 0;
    if(this->bIsAdded){
        for(auto v : viHoursWorked){
            iSum += v;
        }
        if(iSum > 40){
            this->dSalary = (iSum - 40) * (this->dRate * 1.5) + 40 * this->dRate;
        }else{
            this->dSalary = iSum * this->dRate;
        }
        this->bIsAdded = false;
    }
    return this->dSalary;
}

void PrintEmployee(const Employee &e){
    cout << "Name: " << e.GetName() << endl;
    cout << "Pay Rate: " << e.GetRate() << endl;
    cout << "Salary: " << e.GetSalary() << endl;
}
