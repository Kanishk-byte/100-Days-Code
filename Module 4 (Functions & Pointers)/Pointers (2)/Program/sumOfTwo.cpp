#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Sum of 2 numbers using pointers

int main()
{

    int a;
    cout << "Enter 1st num : ";
    int *p1 = &a;
    cin >> *p1;

    int b;
    cout << "Enter 2nd num : ";
    int *p2 = &b;
    cin >> *p2;

    cout << "Sum is : " << (*p1 + *p2);

    return 0;
}