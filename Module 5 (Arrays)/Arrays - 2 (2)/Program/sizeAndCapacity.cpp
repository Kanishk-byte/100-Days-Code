#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Size and Capacity of Vector's.

int main()
{

    vector<int> v; // You not need to mention size.

    // * Inserting Element's
    v.push_back(6);
    cout << "Size of Vector : " << v.size() << endl;
    cout << "Capacity Of Vector : " << v.capacity() << endl;

    cout << endl;

    v.push_back(1);
    cout << "Size of Vector : " << v.size() << endl;
    cout << "Capacity Of Vector : " << v.capacity() << endl;

    cout << endl;

    v.push_back(9);
    cout << "Size of Vector : " << v.size() << endl;
    cout << "Capacity Of Vector : " << v.capacity() << endl;

    cout << endl;

    v.push_back(0);
    cout << "Size of Vector : " << v.size() << endl;
    cout << "Capacity Of Vector : " << v.capacity() << endl;

    return 0;
}