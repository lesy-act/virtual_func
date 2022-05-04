#include"employee.h"
void Employee::set_salary(double salary)
{
    this->salary = salary;
}
double Employee::get_salary()
{
    return this->salary;
}
void Employee::show_data()
{
    std::cout<<"I'm Employee class  \n";
}
