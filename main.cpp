#include "Employee.h"

int main(){
    Employee e1("John", 15);
    e1.AddHours(10);
    e1.AddHours(8);
    e1.AddHours(12);
    PrintEmployee(e1);
    //e1.AddHours(10);
    PrintEmployee(e1);
    return 0;
}
