#include <iostream>
using namespace std;
int main()

// * Modulus Operator (%) returns the remainder of a division operation
// * Modulus Operator (%) can only be used with integer data types
// * Modulus Operator (%) cannot be used with float data types
// * Used to find the modulus of two numbers

{
    // Take two integer variables, a and b : a > b, and find the remainder of a divided by b.

    int a = 10;
    int b = 3;

    int remainder = a % b;
    cout << remainder << endl; // 10 % 3 = 1

    /*
    Imporatant :) // * If a is less than b, the remainder will be equal to a.
    cout << (a % b) << endl; // 3 % 10 = 3
    cout << (a % (-b)) << endl; // 3 % -10 = 3
    cout << ((-a) % b) << endl; // -3 % 10 = -3
    cout << ((-a) % (-b)) << endl; // -3 % -10 = -3
    */

    return 0;
}
