#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Print the absloute value of an integer.

int main()
{

    int _num;
    cout << "Enter number : ";
    cin >> _num;

    if (_num < 0)
    {
        _num = -(_num);
        cout << "Absloute_Value : " << _num;
    }

    cout << "Absloute_Value : " << _num;

    return 0;
}