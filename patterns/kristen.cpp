#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
    int N;
    float k[5];
    float kt; // Add kt variable
    float totals[100];
    float scores[100][5];

    void input()
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                float m;
                cin >> m;
                scores[i][j] = m;
            }
        }
    }

    void calculateTotalScore()
    {
        for (int i = 0; i < N; i++)
        {
            float t = 0;
            for (int j = 0; j < 5; j++)
            {
                t += scores[i][j];
            }
            totals[i] = t;
        }
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Student kristen;
    cin >> kristen.N;
    kristen.kt = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> kristen.k[i];
        kristen.kt += kristen.k[i];
    }
    kristen.input();
    int count = 0;
    kristen.calculateTotalScore();
    for (int i = 0; i < kristen.N; i++)
    {
        if (kristen.kt < kristen.totals[i])
        {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
