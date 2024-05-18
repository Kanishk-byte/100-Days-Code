#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Given two numbers a and b, write a function to print all odd numbers between them.

int oddNums(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int a;
    cout << "Enter first number : ";
    cin >> a;

    int b;
    cout << "Enter second number : ";
    cin >> b;

    oddNums(a, b);

    return 0;
}