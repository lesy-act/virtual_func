#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"person.h"
class Employee:public Person
{
private:
    double salary;
public:
    void set_salary(double salary);
    double get_salary();
    void show_data();
};

#endif // EMPLOYEE_H
