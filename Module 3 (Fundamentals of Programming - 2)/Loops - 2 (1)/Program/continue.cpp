#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print all odd numbers from 1 to 100.

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            continue;
        cout << i << endl;
    }

    return 0;
}