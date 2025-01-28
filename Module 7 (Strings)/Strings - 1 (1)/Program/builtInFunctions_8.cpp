#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Built - in string functions.

int main()
{

    string str = "abcd";

    // * (Length / Size) of a String
    cout << str.size() << endl; // 4
    cout << str.length() << endl; // 4

    // * push_back('') -> Inserting element into String
    str.push_back('e'); // Only Char can push
    cout << str << endl;
    str.push_back('f'); // Inserted at last
    cout << str << endl;

    // * pop_back() -> Deleting element from String
    str.pop_back(); // Removes from last
    str.pop_back();
    str.pop_back();
    cout << str << endl;

    // * '+' Operator -> To (Append / Concatenate) the String
    string s = "kan";
    cout << s << endl;
    string t = "xyz";
    cout << t << endl;
    // Concatenete
    s = t + s;
    cout << s << endl;

    // * reverse() -> To Reverse a String
    string x = "abcdef";
    cout << x << endl;
    reverse(x.begin(), x.end()); // Reverse whole String
    cout << x << endl;
    reverse(x.begin() + 2, x.end() - 1);
    cout << x << endl;

    // * Substring -> To print particular part of a String
    string st = "abcdef";
    // * substr(idx, len) 
    cout << st.substr(2, 3) << endl;

    // * to_string() -> To convert a Integer to String
    int z = 88755;
    string y = to_string(z);
    cout << y << endl;

    return 0;
}