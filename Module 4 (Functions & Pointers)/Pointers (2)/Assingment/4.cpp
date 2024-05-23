#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Find the output of the following code snippet.

int main()
{

    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;

    cout << "a gets value of b";

    return 0;
}