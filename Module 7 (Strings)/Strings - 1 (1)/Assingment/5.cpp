#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Input a string of length less than 10 and convert it into integer without using builtin function.

int main()
{

    string str;
    cout << "Enter string of length < 10 : ";
    getline(cin, str); 

    // * Convert string to integer
    int num = 0;
    for (int i = 0; i < str.length(); i++)  
    {
        // Convert character to integer
        num = num * 10; 
        num = num + str[i] - 48; // s[i] is a character 
    }

    cout << "The integer value of the string is: " << num << endl;

    return 0;
}