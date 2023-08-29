#include <iostream>
using namespace std;
// define a class vehicle
class vehicle
{
    //---body--
public:
    // data member
    int wheels;
    string name;
    // member function or method
    void transpotation(string transport)
    {
        // "this" is a pointer :- this will define an object from which you are calling data;
        cout << this->name << " will transport " << transport << "And it has " << this->wheels << "wheels" << endl;
    }
};
class Animal
{
    int legs;
    string breed;
    string color;
    void Eat(string food)
    {
        cout << this.breed << " eats " << food << endl;
    }
};
int main()
{
    // objects of class vehicle
    vehicle bus;
    bus.name = "Bus";
    bus.wheels = 4;
    bus.transpotation("passengers");

    // bike
    vehicle bike;
    bike.wheels = 2;
    bike.name = "Bike";
    bike.transpotation("biker");

    Animal dog;
    dog.breed = "Dog";
    dog.color = "White";
    dog.legs = 4;
    dog.Eat = "bread";
    return 0;
}

// private:
// public:
// protected:
