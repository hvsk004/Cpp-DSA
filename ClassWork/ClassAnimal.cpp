#include <iostream>
#include <string>
using namespace std;
class animal
{
public:
    string name;
    int legs;
    string colour;
    void eat(string food)
    {
        cout << this->name << " eats " << food;
    }
};
int main()
{
    animal dog;
    dog.name = "German Shepered";
    dog.colour = "Brown";
    dog.legs = 4;
    dog.eat("chicken");
    return 0;
}