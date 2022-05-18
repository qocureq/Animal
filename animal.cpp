#include <iostream>
#include <utility>
#pragma once

using namespace std;

class animal
{
public:
    animal(string _name, size_t _age)
    {
        name = move(_name);
        age = _age;
    }

    virtual void print()
    {
        cout << "\n[" << species << "]" << endl;
        cout << "Name:\t" << name << endl;
        cout << "Age:\t" << age << endl;
    }

    virtual void print(ostream &os)
    {
        os << "\n[" << species << "]" << endl;
        os << "Name:\t" << name << endl;
        os << "Age:\t" << age <<  endl;
    }

protected:
    string name;
    size_t age;
    string species = "Animal";
};


inline ostream &operator<<(ostream &os, animal &animal)
{
    animal.print();
    return os;
}
