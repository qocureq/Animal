#include <iostream>
#include <utility>
#pragma once

using namespace std;

class animal
{
public:
    animal(string _name, size_t _age)
    {
        this->name = move(_name);
        this->age = _age;
    }

    virtual void print()
    {
        cout << "\n[" << species << "]" << endl;
        cout << "Name:\t" << name << endl;
        cout << "Age:\t" << age << endl;
    }

protected:
    string name;
    size_t age;
    string species = "Animal";
};