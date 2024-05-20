#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Wap to swap 2 numbers.

// * Pass by Refrence * //

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a;
    cout << "Enter 1st num : ";
    cin >> a;

    int b;
    cout << "Enter 2nd num : ";
    cin >> b;

    cout << "Numbers before swapping : " << a << " " << b << endl;

    int *x = &a;
    int *y = &b;

    swap(x, y);
    cout << "Numbers after swapping : " << a << " " << b << endl;


    return 0;
}