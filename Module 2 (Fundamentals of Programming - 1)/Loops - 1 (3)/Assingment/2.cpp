#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print all the numbers from 1 to 100 that is divisible by 3.

int main()
{

    // * First Method
    int i = 3;
    while (i <= 100)
    {
        cout << i << endl;
        i += 3;
    }

    // * Second Method
    int i;
    for (i = 3; i <= 100; i+=3)
    {
        cout<<i<<endl;
    }

    return 0;
}