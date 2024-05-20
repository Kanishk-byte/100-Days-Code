#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Wap to swap 2 numbers.

// * Pass by Ailas * //

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x;
    cout << "Enter 1st num : ";
    cin >> x;

    int y;
    cout << "Enter 2nd num : ";
    cin >> y;

    swap(x, y);
    cout << x << " " << y;

    return 0;
}