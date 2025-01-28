#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Input a string of length n and count all the consonants in the given string.

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int len = str.length();

    int i = 0;
    int count = 0;

    while (i < len)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count++;
        }
        i++;
    }

    cout << "Consonants : " << count << endl;

    return 0;
}