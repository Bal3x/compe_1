#pragma once
#include <string>

class Dog
{
private:
    string name;
    int age;
public:
    Dog();
    ~Dog();
     int get_age(){return age;}
   string get_name(){return name;}
    void set_name(string n){name = n;}
    void set_age(int a){age = a;}
    
    int get_dog_years(){return age * 7;}
    string speak(){return "Woof";}

};

