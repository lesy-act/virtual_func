#include"person.h"
Person::Person()
{

}
Person::Person(std::string name, std::string address, std::string id)
{
    this->name = name;
    this->address = address;
    this->id = id;
}
void Person::show_data()
{
    std::cout<<"I'm Person class  \n";
}
void enter_data()
{

}

void Person::set_name(std::string name)
{
    this->name = name;
}
void Person::set_address(std::string address)
{
    this->address = address;

}
void Person::set_id(std::string id)
{
    this->id = id;
}
std::string Person::get_name()
{
    return this->name;
}
std::string Person::get_address()
{
    return this->address;
}
std::string Person::get_id()
{
    return this->id;
}
