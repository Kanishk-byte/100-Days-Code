#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Scope of Variable

int a = 9; // * Global Variable

void f()
{
    cout << a;
}

int main()
{
    cout << a + 7 << endl;
    f();

    return 0;
}