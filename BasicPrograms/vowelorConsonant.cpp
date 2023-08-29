#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a Letter : ";
    char ch;
    cin >> ch;
    int flag = 0;
    if (!(((ch >= 'A') && (ch <= 'Z')) || ((ch > 'a') && (ch < 'z'))))
    {
        cout << "Invalid Input";
        return 1;
    }
    char arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; i++)
    {
        if (ch == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << ch << " is a vowel";
    }
    else
    {
        cout << ch << " is not a vowel";
    }
    return 0;
}
