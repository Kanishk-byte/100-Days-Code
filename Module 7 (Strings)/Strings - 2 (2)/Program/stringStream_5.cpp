#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Split every single word of the sentence & print in a new line.

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    stringstream sStr(str);
    string temp;

    while(sStr >> temp){
        cout << temp << endl;
    }

    return 0;
}