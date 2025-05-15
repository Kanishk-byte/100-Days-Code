#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Sorting string using sort(); function.
// * sort(); -> ASCII value ke order mai sort krta hai.
// * space -> It is also a character.

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    // * Sort Function
    sort(str.begin(), str.end());
    cout << "Sorted String : " << str << endl;

    return 0;
}