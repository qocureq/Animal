#include <iostream>
#include <utility>
#include "animal.cpp"

using namespace std;

class dog : public animal
{
public:
    dog(string _name, size_t _age, float _weight) :
            animal(move(_name), _age)
    {
        this->weight = _weight;
        this->species = "Dog";
    }

    void print() override
    {
        animal::print();
        cout << "Weight:\t" << weight << endl;
    }

private:
    float weight;
};
