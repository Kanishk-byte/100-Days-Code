#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Hierarchy of Operators :)
/*
 * Multiplication & Division have same precedence
 * Multiplication & Division have higher precedence then Addition & Subtraction
 * When, we have same precedence operators together we have to move Left to Right
 */

int main()
{

    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;
    cout << i;

    return 0;
}