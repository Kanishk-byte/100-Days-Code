#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Find the output of the following code snippet.

int main()
{

    int a = 10, b = 20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout << *ptr << " " << a << " " << b;

    return 0;
}