#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Write a program to find the product of two numbers using pointers.

int main()
{

    int x;
    cout << "Enter x : ";
    cin >> x;

    int y;
    cout << "Enter y : ";
    cin >> y;

    int *ptr1 = &x;
    int *ptr2 = &y;

    cout << "Product is : " << ((*ptr1) * (*ptr2));

    return 0;
}