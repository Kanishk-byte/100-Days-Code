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

    int lastdigit = 0;
    int sum = 0;

    while (n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit;
        n /= 10;
    }

    cout<<"Sum of Digits : "<<sum;

    return 0;
}