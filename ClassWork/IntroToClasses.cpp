#include <string>
#include <iostream>
using namespace std;
class vehicle // Defining a Class Vehicle
{
public:
    int wheels;
    string name;                          // member variables
    void transportation(string transport) // member functions
    {
        cout << this->name << " will transport " << transport;
    }
};
int main()
{
    vehicle bus;
    bus.name = "Bus";
    bus.wheels = 4;
    bus.transportation("People");
    return 0;
}