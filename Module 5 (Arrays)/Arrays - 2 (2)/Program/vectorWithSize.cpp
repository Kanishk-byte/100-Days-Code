#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Vector With Size

int main()
{

    /*
        * When you give the size each element initialized to 0
        vector<int> v(5);

        cout<<v[0]<<" ";
        cout<<v[1]<<" ";
        cout<<v[2]<<" ";
        cout<<v[3]<<" ";
        cout<<v[4]<<" ";
    */

    
        vector<int> v(5, 7);
        // * 5 is the size of vector, 7 is the value of each element in vector

        cout << v[0] << " ";
        cout << v[1] << " ";
        cout << v[2] << " ";
        cout << v[3] << " ";
        cout << v[4] << " ";

    return 0;
}