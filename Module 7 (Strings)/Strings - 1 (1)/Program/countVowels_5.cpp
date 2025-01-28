#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Take a string & count the vowels in it.

int main()
{

    string str = "kanishk khandelwal";

    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        i++;
    }

    cout << "No. of Vowel's : " << count;

    return 0;
}