#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Print the decimal part of the number.

int main()
{

    float _num;
    cout << "Enter number : ";
    cin >> _num;

    int integer_part = (int)_num;
    cout << "Integer_part : " << integer_part << endl;

    if (integer_part < 0)
        integer_part -= 1;

    float decimal_part = (_num - integer_part);
    cout << "Decimal_part : " << decimal_part << endl;

    return 0;
}