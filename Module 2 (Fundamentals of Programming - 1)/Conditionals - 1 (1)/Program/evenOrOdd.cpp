#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Take positive integer input & tell if it is even or odd.

int main()
{

    int _num;
    cout << "Enter num : ";
    cin >> _num;

    if (_num % 2 == 0)
        cout << "Number is even";
    else
        cout << "Number is odd";

    return 0;
}