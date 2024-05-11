#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Find the output for this code. Let input :- 2 3 6

int main()
{

    int x;
    cout << "Enter first number : ";
    cin >> x; // user will give ‘x’ a value.

    int y, m;
    cout << "Enter second number and value for taking modulus : ";
    cin >> y >> m; // user will give ‘y’ a value.

    int Z = (x * y) % m;
    cout << "Output is : " << Z;

    return 0;
}