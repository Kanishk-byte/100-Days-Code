#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Pointer Basics

int main()
{

    int x = 7;
    int *ptr = &x;

    // * Both are same ->
    cout << "Address of x : " << &x << endl;
    cout << "Value of ptr : " << ptr << endl;

    // * Address of pointer is diffrent ->
    cout << "Address of ptr : " << &ptr << endl;

    // * (*ptr) store value of x ->
    cout << "Value stored in *ptr : " << *ptr << endl;

    return 0;
}