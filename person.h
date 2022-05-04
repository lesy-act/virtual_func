#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
class Person
{
protected:
    std::string name;
    std::string address;
    std::string id;
public:
    Person();
    Person(std::string name,std::string address,std::string id);
    void show_data();
    void enter_data();
    void set_name(std::string name);
    void set_address(std::string address);
    void set_id(std::string id);
    std::string get_name();
    std::string get_address();
    std::string get_id();

};

#endif // PERSON_H
