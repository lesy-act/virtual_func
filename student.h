#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
#include"person.h"
class Student:public Person
{
private:
    double GPA;
public:
    Student();
    Student(std::string name,std::string address,std::string id);
    void show_data();
    void set_gpa(double gpa);
    double get_gpa();

};

#endif // STUDENT_H
