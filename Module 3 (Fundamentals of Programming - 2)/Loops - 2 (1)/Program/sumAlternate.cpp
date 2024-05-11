#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the sum of Alternate Series

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int sum = 0;

    // * Using Loops
    /*
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
            sum = sum + i;
        else
            sum = sum - i;
    }
    */

    if (n % 2 == 0)
        sum = (-n / 2);
    else
        sum = (-n / 2) + n;

    cout << sum;

    return 0;
}