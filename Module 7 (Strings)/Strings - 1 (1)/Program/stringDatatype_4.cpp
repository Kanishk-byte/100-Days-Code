#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : String as a Datatype.

int main()
{

    // * Declaration of a String
    string str = "Raghav Garg";
    // 12 Characters -> (10 Orignal + 1 Space + 1 Null)
    cout << str;

    cout << endl;

    /*
    * Taking String Input -> (Using 'cin' not sufficent)
    * Used when, only if the given string has no spaces.
    string s;
    cout << "Enter String : ";
    cin >> s; // Raghav Garg
    cout << "String : ";
    cout << s; // Raghav : (Space/Enter) treated as another string.
    */

    // * Taking String Input -> (Using 'getline()' is better)
    // * Can be used, when there are spaces in the string.
    string s;
    cout << "Enter String : ";
    getline(cin, s); // Used to input String
    cout << "String : ";
    cout << s;

    return 0;
}