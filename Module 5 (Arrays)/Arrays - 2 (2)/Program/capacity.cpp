#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Capacity of Vector's

int main()
{

    vector<int> v; // You not need to mention size.

    v.push_back(6); // 1 1
    v.push_back(1); // 2 2
    v.push_back(9); // 3 4
    v.push_back(0); // 4 4
    v.push_back(6); // 5 8
    v.push_back(1); // 6 8
    v.push_back(9); // 7 8
    v.push_back(0); // 8 8
    v.push_back(6); // 9 16
    v.push_back(1); // 10 16
    v.push_back(9); // 11 16
    v.push_back(0); // 12 16

    cout << "Size of Vector : " << v.size() << endl;
    cout << "Capacity of Vector : " << v.capacity() << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout << endl;

    cout << "Size of Vector : " << v.size() << endl;
    cout << "Capacity of Vector : " << v.capacity() << endl; 

    return 0;
}