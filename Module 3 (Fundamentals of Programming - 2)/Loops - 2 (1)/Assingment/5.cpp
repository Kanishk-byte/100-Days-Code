#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print the sum of all the even digits of a given number.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int digit = 0;
    int sum = 0;

    while (n > 0)
    {
        digit = n % 10;

        if (digit % 2 == 0)
        {
            sum = sum + digit;
        }

        n /= 10;
    }

    cout << "Sum of even : " << sum;

    return 0;
}