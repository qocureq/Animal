#include <iostream>
#include "dog.cpp"
#include "horse.cpp"

using namespace std;

int main()
{
    horse konRafal = horse("Rafał", 17, "Arabian", 154);
    dog piesMango = dog("Mango", 2, 5.2);

    cout << konRafal;
    cout << piesMango;

    return 0;
}
