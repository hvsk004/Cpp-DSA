#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    std::cout << "Factorial: " << fact;
    return 0;
}