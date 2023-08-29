
// -------Struct-----------------------
#include <iostream>
using namespace std;
struct Student
{
    // data members
    int marks;
    string roll;
    string name;
    // methods
    void Intro()
    {
        cout << "Name: "
             << " " << this->name << endl
             << "ROll: " << this->roll << endl;
    }
} int main()
{
    Student std1;
    std1.roll = "145";
    std1.name = "Aditi Gedam";
    std1.marks = 40;

    Student std2;
    std2.roll = "12219409";
    std2.name = "Sumit Kumar";
    std2.marks = 45;
    std1.Intro();
    std2.Intro();

    return 0;
}

//-----------Union------------------