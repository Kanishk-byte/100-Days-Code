#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Highest Common Factor

int gcd(int x, int y)
{
    int hcf = 1;
    for (int i = min(x, y); i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{

    int x;
    cout << "Enter first number : ";
    cin >> x;

    int y;
    cout << "Enter second number : ";
    cin >> y;

    cout << gcd(x, y);

    return 0;
}