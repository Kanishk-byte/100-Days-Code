#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Check if two strings is Anagram or not.

int main()
{

    string s1;
    cout << "Enter String s1 : ";
    getline(cin, s1);

    string s2;
    cout << "Enter String s2 : ";
    getline(cin, s2);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout << "String s1 : " << s1 << endl;
    cout << "String s2 : " << s2 << endl;

    if (s1 == s2)
    {
        cout << "String is Anagram";
    }
    else
    {
        cout << "Not an Anagram";
    }

    return 0;
}