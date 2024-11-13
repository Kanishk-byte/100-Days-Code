#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print the sum of all the even digits of a given number.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int _digit = 0;
    int _sum = 0;

    while (n > 0)
    {
        _digit = n % 10;

        if (_digit % 2 == 0)
        {
            _sum = _sum + _digit;
        }

        n /= 10;
    }

    cout << "Sum of even : " << _sum;

    return 0;
}