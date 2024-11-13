#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to sum of a given number and its reverse.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int _lastdigit = 0;
    int _reverse = 0;
    int _temp = n;

    while (n > 0)
    {
        _reverse = _reverse * 10;
        _lastdigit = n % 10;
        _reverse = _reverse + _lastdigit;
        n = n / 10;
    }

    cout << "Reverse is : " << _reverse <<endl;

    cout << "Result is : "<< (_temp + _reverse);

    return 0;
}