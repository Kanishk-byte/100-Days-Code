#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print all armstrong number between 1 to 500.

int main()
{

    for (int i = 1; i <= 500; i++)
    {
        int x = i;
        int _cubeSum = 0;
        while (x > 0)
        {
            int _ld = x % 10;
            _cubeSum += (_ld * _ld * _ld);
            x /= 10;
        }
        if (i == _cubeSum)
            cout << _cubeSum << endl;
    }

    return 0;
}