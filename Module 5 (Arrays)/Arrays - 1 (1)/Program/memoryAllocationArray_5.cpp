#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Elements stored continously in Array.

int main()
{

    // Array of 5 - elements
    int arr[3];

    // * Address of Array
    cout << "Address of &arr : " << &arr << endl; // 0x61ff04

    // * It also prints Address of Array
    cout << "Address of arr : " << arr << endl; // 0x61ff04

    cout << endl;

    // Address of 5 - elements
    cout << "Address of arr[0] : " << &arr[0] << endl; // 0x61ff04
    cout << "Address of arr[1] : " << &arr[1] << endl; // 0x61ff08
    cout << "Address of arr[2] : " << &arr[2] << endl; // 0x61ff0c
    cout << "Address of arr[3] : " << &arr[3] << endl; // 0x61ff10
    cout << "Address of arr[4] : " << &arr[4] << endl; // 0x61ff14

    return 0;
}