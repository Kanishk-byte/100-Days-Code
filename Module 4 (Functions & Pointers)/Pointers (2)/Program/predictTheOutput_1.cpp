#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Predict the output

int main()
{

    int a = 1000;
    int *ptr = &a;

    int b = ++(*ptr); 
    cout << a << " " << b; // Value of a & b both will incrtease.

    return 0;
}