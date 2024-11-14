#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * WaP to make Calculator using Switch case.

int main()
{

    int a;
    int b;
    char op;

    cout << "Write the operation : ";
    cin >> a >> op >> b;

    switch (op)
    {

    case '+':
        cout << a + b;
        break;

    case '-':
        cout << a - b;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        cout << a / b;
        break;

    case '%':
        cout << a % b;
        break;

    default:
        cout << "Invalid Operator";
        break;
    }

    return 0;
}