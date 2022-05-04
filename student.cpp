#include"student.h"
Student::Student()
{

}
void Student::set_gpa(double gpa)
{
    this->GPA = gpa;
}
double Student::get_gpa()
{
    return this->GPA;
}
void Student::show_data()
{
    std::cout<<"I'm Student class  \n";
}
