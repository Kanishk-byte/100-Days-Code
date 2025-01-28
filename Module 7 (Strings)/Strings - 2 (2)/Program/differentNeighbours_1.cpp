#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Count the no. of different neighbouring character's in string.

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int len = str.length();
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        // String of 1 - length
        if (len == 1)
        {
            break;
        }

        // String of 2 diff. character.
        if (len == 2 && str[0] != str[1])
        {
            count = 1;
            break;
        }

        if (i == 0)
        {
            if (str[i] != str[i + 1])
                count++;
        }
        else if (i == len - 1)
        {
            if (str[i] != str[i - 1])
                count++;
        }
        else if (str[i] != str[i + 1] && str[i] != str[i - 1])
            count++;
    }

    cout << "Count : " << count;

    return 0;
}