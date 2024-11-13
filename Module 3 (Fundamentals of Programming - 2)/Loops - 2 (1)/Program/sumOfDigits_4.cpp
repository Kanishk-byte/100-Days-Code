#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to count sum of digits in a given number.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int _lastdigit = 0;
    int _sum = 0;

    while (n > 0)
    {
        _lastdigit = n % 10;
        _sum += _lastdigit;
        n /= 10;
    }

    cout<< "Sum of Digits : "<< _sum;

    return 0;
}