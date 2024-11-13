#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to Reverse of a given number.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int _lastdigit = 0;
    int _reverse = 0;

    while (n > 0)
    {
        _reverse *= 10;
        _lastdigit = n % 10;
        _reverse += _lastdigit;
        n /= 10;
    }

    cout<< "Reverse of Digits : "<< _reverse;

    return 0;
}