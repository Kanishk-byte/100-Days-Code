#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Passing 2D - Array's into Function.

void change(int a[])
{
    a[0] = 9;
}

void change2D(int arr[3][3]) // When we not give size this gives error.
{
    arr[0][0] = 7;
}

int main()
{

    int a[3] = {1, 2, 3};
    cout << a[0] << endl;
    change(a);
    cout << a[0] << endl;

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[0][0] << endl;
    change2D(arr);
    cout << arr[0][0] << endl;

    return 0;
}