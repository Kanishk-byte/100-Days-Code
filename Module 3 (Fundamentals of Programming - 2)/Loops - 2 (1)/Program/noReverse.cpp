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

    int lastdigit = 0;
    int reverse = 0;

    while (n > 0)
    {
        reverse *= 10;
        lastdigit = n % 10;
        reverse += lastdigit;
        n /= 10;
    }

    cout<<"Reverse of Digits : "<<reverse;

    return 0;
}