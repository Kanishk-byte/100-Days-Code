#include<iostream>
using namespace std;

// * Float Data Type (4 bytes = 32 bits)  
// * Float is used to store decimal numbers
// * Float is used to store numbers with decimal points
// * Float is used to store numbers with very large or very small values

int main(){
    
    float x = 5;
    float y = 2;

    cout << x/y << endl; // 5 / 2 = 2.5

    /* Important :)
    cout << 5/2 << endl; // 5 / 2 = 2
    cout << 5.0/2 << endl; // 5.0 / 2 = 2.5 
    cout << 5/2.0 << endl; // 5 / 2.0 = 2.5
    cout << 5.0/2.0 << endl; // 5.0 / 2.0 = 2.5
    */

    /* Important :)
    float x = 5.0;
    cout << x; // 5

    cout << 5.0; // 5
    */

    return 0;
}