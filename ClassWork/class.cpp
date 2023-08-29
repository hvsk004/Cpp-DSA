#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << rank<int[10]>::value;            // Case A
    cout << rank<char[10][10]>::value;       // Case B
    cout << rank<string[10][10][10]>::value; // Case C
    return 0;
}