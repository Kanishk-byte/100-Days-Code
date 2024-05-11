#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to count number of digits in a given number.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int count = 0;
    bool flag = true;

    if (n == 0)
    {
        flag = false;
    }

    while (n > 0)
    {
        n /= 10;
        count++;
    }

    if (flag == false)
    {
        cout << "No of digits : " << 5;
    }
    else
    {
        cout << "No of Digits : " << count;
    }

    return 0;
}