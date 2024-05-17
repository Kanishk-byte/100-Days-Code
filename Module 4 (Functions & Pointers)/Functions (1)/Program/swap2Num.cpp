#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Swap 2 numbers.

// * Using temp ->
// int swap(int x, int y, int temp)
// {
//     temp = x;
//     x = y;
//     y = temp;

//     cout << "No. after swapping : " << x << " " << y;
// }

// * Without using temp ->
int swap(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;

    cout << "No. after swapping : " << x << " " << y;
}

int main()
{

    int x;
    cout << "Enter first number : ";
    cin >> x;

    int y;
    cout << "Enter second number : ";
    cin >> y;

    // int temp;
    cout << "No. before swapping : " << x << " " << y << endl;

    // swap(x, y, temp);
    swap(x, y);

    return 0;
}