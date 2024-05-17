#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Address of Arguments

void fun(int x, int y)
{
    cout << "Address of fun x : " << &x << endl;
    cout << "Address of fun y : " << &y << endl;
}

int main()
{

    int x;
    int y;

    cout << "Address of main x : " << &x << endl;
    cout << "Address of main y : " << &y << endl;

    fun(x, y);

    return 0;
}