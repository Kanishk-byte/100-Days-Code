#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Sort a String after removal of values smaller than "x".

int main()
{

    string s = "AZYZXBYDXJK";
    string str = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'X'){
            str.push_back(s[i]);
        }
    }

    sort(str.begin(), str.end());
    cout << str << endl;

    return 0;
}