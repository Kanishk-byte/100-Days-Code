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

    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }

    cout << "Factorial is : " << fact;

    return 0;
}