#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Given a sentence 'str', return the most occuring word.

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    stringstream sStr(str);
    string temp;

    vector<string> s;

    while (sStr >> temp)
    {
        s.push_back(temp);
    }

    sort(s.begin(), s.end());

    int count = 1;
    int maxCount = 1;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maxCount = max(maxCount, count);
    }

    count = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count == maxCount)
        {
            cout << s[i] << " : " << maxCount << endl;
        }
    }

    return 0;
}