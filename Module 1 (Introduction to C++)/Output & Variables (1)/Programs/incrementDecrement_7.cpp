#include <iostream>
using namespace std;
int main()
{
    int x = 5;

    x++; // * post-increment
    cout << x << endl; // 6

    x--; // * post-decrement
    cout << x << endl; // 5

    ++x; // * pre-increment
    cout << x << endl; // 6

    --x; // * pre-decrement
    cout << x << endl; // 5

    /* Important :)
    cout << x++ << endl; // 5
    cout << x; // 6

    cout << ++x << endl; // 6
    cout << x; // 6
    */ 

    /* 
    cout << --x << endl; // 4
    cout << x-- << endl; // 4
    cout << x; // 3
    */

    return 0;
}