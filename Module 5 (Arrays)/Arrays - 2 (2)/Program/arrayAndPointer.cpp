#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Array & Pointers

int main()
{

    int arr[] = {1,4,7,3,0};

    int *ptr = arr; // Giving Address

    // * All will give same Addresses -> 0x61fef8
    cout<<ptr<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    return 0;
}