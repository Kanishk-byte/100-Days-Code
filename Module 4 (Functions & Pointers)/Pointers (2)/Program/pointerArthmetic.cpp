#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Pointer Arthmetic

int main()
{

    /*
        * For Integer -> Increased by 4 - bytes

        int x = 7;
        int *ptr = &x;
        cout << ptr << endl; // Address of x : 0x61ff08

        ptr = ptr + 1;
        cout << ptr << endl; // Address after increament : 0x61ff0c
    */

    /*
        * For boolean -> Increased by 1 - bytes

        bool flag = true;
        bool *ptr = &flag;
        cout << ptr << endl; // Address of bool : 0x61ff0b

        ptr = ptr + 1;
        cout << ptr << endl; // Address after increament : 0x61ff0c
    */

    /*
        * For value of x ->

        int x = 7;
        int *ptr = &x;
        cout << *ptr << endl; // Value of x : 7

        ptr = ptr + 1;
        cout << *ptr << endl; // Value after increament : 6422284
    */

    // * For value of x ->

    int x = 7;
    int *ptr = &x;
    cout << *ptr << endl; // Value of x : 7

    *ptr = *ptr + 1; // * (*ptr)++
    cout << *ptr << endl; // Value after increament : 8

    return 0;
}