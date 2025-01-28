/*
* Using pow() function in C++

#include <iostream>
#include <cmath> // * Include the cmath library for the pow function
using namespace std;

int main()
{
    double base = 3.0;
    double exponent = 4.0;
    double result;

    * Calculate 3 raised to the power of 4
    result = pow(base, exponent);

    cout << base << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}
*/

#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to calculate the power of a number.

int main()
{

    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    int _power = 1;

    for (int i = 1; i <= b; i++)
    {
        _power = _power * a;
    }

    cout << _power;

    return 0;
}