#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Passing Vector's into functions.
// * Vector's are pass by value.
// * Each time you pass, new vector is created.

void change(vector<int> a) // a -> 9 1 6 0
{
    a[0] = 100; // a -> 100 1 6 0
    //  Printing
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }

    cout << endl;
}

/*
void change(vector<int> &a) // a -> 9 1 6 0
{
    a[0] = 100; // a -> 100 1 6 0
}
*/

/*
void change(vector<int> a) // a -> 9 1 6 0
{
    a[0] = 100; // a -> 9 1 6 0
}
*/

int main()
{

    vector<int> v;

    v.push_back(9);
    v.push_back(1);
    v.push_back(6);
    v.push_back(0);

    // Printing
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    cout << endl;

    change(v);

    // Printing
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    cout << endl;

    return 0;
}