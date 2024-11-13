#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print the factorial of given number.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int _fact = 1;
    for (int i = n; i >= 1; i--)
    {
        _fact *= i;
    }

    cout << "Factorial is : " << _fact;

    return 0;
}