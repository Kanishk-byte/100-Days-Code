#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Check whether the given string is palindrome or not.

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int len = str.length();

    int i = 0;
    int j = len - 1;
    bool isPalindrome = true;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome == true)
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }

    return 0;
}