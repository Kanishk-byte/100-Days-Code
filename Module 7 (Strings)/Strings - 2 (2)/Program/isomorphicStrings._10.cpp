#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Check if the Strings are Isomorphic or not.

void isIsomorphic(string s, string t)
{
    vector<int> v(150, 1000); // Initialize vector with 1000 as default value

    if (s.length() != t.length())
    {
        cout << "Strings Not Isomorphic";
        return;
    }

    // Check mapping from s to t
    for (int i = 0; i < s.length(); i++)
    {
        int idx = (int)s[i]; // ASCII value of character
        if (v[idx] == 1000)
        {
            v[idx] = t[i]; // Store corresponding character of t
        }
        else if (v[idx] != t[i])
        {
            cout << "Strings Not Isomorphic";
            return;
        }
    }

    fill(v.begin(), v.end(), 1000); // Reset vector for second check

    // Check mapping from t to s
    for (int i = 0; i < t.length(); i++)
    {
        int idx = (int)t[i]; // ASCII value of character
        if (v[idx] == 1000)
        {
            v[idx] = s[i]; // Store corresponding character of s
        }
        else if (v[idx] != s[i])
        {
            cout << "Strings Not Isomorphic";
            return;
        }
    }

    cout << "Strings Are Isomorphic";
}

int main()
{
    string s;
    cout << "Enter String 's' : ";
    getline(cin, s);

    string t;
    cout << "Enter String 't' : ";
    getline(cin, t);

    isIsomorphic(s, t);

    return 0;
}
