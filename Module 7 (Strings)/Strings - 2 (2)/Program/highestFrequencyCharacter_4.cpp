#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the character that is occuring most number of times (Lowercase).

int main()
{

    // * Efficent Method
    string s;
    cout << "Enter String : ";
    getline(cin, s);

    vector<int> arr(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii - 97]++;
    }

    int maxCount = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxCount)
        {
            maxCount = arr[i];
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == maxCount)
        {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout << ch << " : " << maxCount << endl;
        }
    }

    /*
    * Normal Method : (Don't use it)
    string s;
    cout << "Enter String : ";
    getline(cin, s);

    int maxCount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int count = 1;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (maxCount < count)
        {
            maxCount = count;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int count = 1;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (count == maxCount)
        {
            cout << ch << " : " << maxCount;
        }
    }
    */

    return 0;
}