#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Wap to swap 2 numbers.

// * Pass by Ailas * //

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a;
    cout << "Enter 1st num : ";
    cin >> a;

    int b;
    cout << "Enter 2nd num : ";
    cin >> b;

    swap(a, b);
    cout << a << " " << b;

    return 0;
}