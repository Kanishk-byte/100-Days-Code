#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print nth fibonacci number.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int a = 1, b = 1, sum = 0;

    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }

    cout << b;

    return 0;
}