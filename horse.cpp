#include <iostream>
#include <utility>
#include "animal.cpp"

using namespace std;

class horse : public animal
{
public:
    horse(string _name, size_t _age, string _breed, int _height) :
            animal(move(_name), _age)
    {
        this->breed = move(_breed);
        this->height = _height;
        this->species = "Horse";
    }

    void print() override
    {
        animal::print();
        cout << "Breed:\t" << breed << endl;
        cout << "Height:\t" << height << " kg" <<  endl;
    }

private:
    string breed;
    int height;
};
