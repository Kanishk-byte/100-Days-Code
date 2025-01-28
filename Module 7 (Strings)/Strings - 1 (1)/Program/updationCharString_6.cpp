#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Updation od a single character in string.
// * In C++, Strings are Mutable[Value can be changed]. (But, Not in Java)

int main()
{

    string str = "raghav";
    cout << "Orignal String : ";
    cout << str << endl;

    str[1] = 'X';
    cout << "After Updation : ";
    cout << str << endl;

    return 0;
}