#include <iostream>
using namespace std;
int main()
{
    int a, b;
    std::cout << "Enter two numbers: "; // Taking input from user using cout.
    cin >> a >> b;
    cout << "A = " << a << " B = " << b << endl;
    // Method 1
    //  int c;
    //  c=a;
    //  a=b;
    //  b=c;
    // Method 2
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swapping: \n";
    cout << "A: " << a << " B: " << b;

    return 0;
}
