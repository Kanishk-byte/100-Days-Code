#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Double Pointer

int main()
{

    int x = 5;
    int *ptr = &x;
    int **p = &ptr;

    // * Values :)
    cout << "x : " << x << endl;
    cout << "*ptr :" << *ptr << endl;
    cout << "**p : " << **p << endl;

    cout << endl;

    // * Addresses :)
    cout << "&x : " << &x << endl;
    cout << "ptr :" << ptr << endl;
    cout << "*p : " << *p << endl;

    return 0;
}