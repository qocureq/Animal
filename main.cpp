#include "dog.cpp"
#include "horse.cpp"

using namespace std;

int main()
{
    horse konRafal = horse("Rafał", 17, "Arabian", 154);
    dog piesMisiek = dog("Misiek", 6, 26.7);

    konRafal.print();
    piesMisiek.print();

    return 0;
}