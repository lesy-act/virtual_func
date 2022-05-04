#include<iostream>
#include"student.h"
#include"person.h"
#include"employee.h"
int main()
{
//    Person person_1;
//    Student student_1;
//    Employee employee_1;
//    person_1.show_data();
//    student_1.show_data();
//    employee_1.show_data();



    Person *p = new Person();
    Person *p1 = new Student();
    Person *p2 = new Employee();
    p->show_data();
    p1->show_data();
    p2->show_data();




}



