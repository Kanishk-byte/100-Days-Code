#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.

int main()
{

    float marks_a, marks_b, marks_c;

    cout << "Enter marks of a : ";
    cin >> marks_a;
    cout << "Enter marks of b : ";
    cin >> marks_b;
    cout << "Enter marks of c : ";
    cin >> marks_c;

    if((marks_a < marks_b)){
        if ((marks_a < marks_c))
        {
            cout << "A scored least marks";
        }
        else
        {
            cout << "C scored least marks";
        }
    } else {
        if ((marks_b < marks_c))
        {
            cout << "B scored least marks";
        }
        else
        {
            cout << "C scored least marks";
        }
    }

    return 0;
}