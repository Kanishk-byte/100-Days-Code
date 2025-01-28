#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Return the value of string which has maximum value.

int main()
{

    // * Strings Array
    vector<string> str;

    int size = str.size();
    cout << "Enter String Vector Size : ";
    cin >> size;

    cin.ignore(); // Clear the leftover newline character from the buffer

    // * Inserting Strings into String Array
    cout << "Enter Element Strings : ";
    for (int i = 0; i < size; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }

    int max = stoi(str[0]);
    for (int i = 0; i < size; i++)
    {
        int x = stoi(str[i]);
        if (x > max)
        {
            max = x;
        }
    }

    cout << "Maximum Element : " << max;

    /*
    * Lengthy Method : (Not Prefferd to Use)
    * Integer Array
    vector<int> v;

    * Inserting String into Integer Array
    for (int i = 0; i < size; i++)
    {
        * Convert string to integer and push it into vector v
        v.push_back(stoi(str[i]));
    }

    * Finding Maximum Element
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    */

    return 0;
}