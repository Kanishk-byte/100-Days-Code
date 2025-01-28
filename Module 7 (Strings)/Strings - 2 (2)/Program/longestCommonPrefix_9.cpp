#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Find the longest common prefix in the string.

int main()
{

    vector<string> str;

    int n = str.size();
    cout << "Enter Srting Vector Size : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }

    if (n == 1)
    {
        cout << "Longest Prefix Sum : " << str[0];
    }

    sort(str.begin(), str.end());

    string first = str[0];
    string last = str[n - 1];

    string s = "";

    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] == last[i])
        {
            s += first[i];
        }
        else
        {
            cout << "Longest Prefix Sum : " << str[0];
        }
    }

    cout << "Longest Prefix Sum : " << str[0];

    return 0;
}