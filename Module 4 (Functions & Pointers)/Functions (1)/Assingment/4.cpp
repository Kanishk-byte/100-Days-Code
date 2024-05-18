#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : function to count the number of digits in a number and then print the square of this number.

int count(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        n /= 10;
        count++;
    }
}

int main()
{
    int n;
    cout << "Enter num : ";
    cin >> n;

    cout << "Count is : " << count(n);

    return 0;
}