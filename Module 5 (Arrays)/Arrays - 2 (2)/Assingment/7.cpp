#include<bits/stdc++.h>

using namespace std;

// * Function to check if the array is a palindrome or not

int main() {

    vector < int > v;

    int size = v.size();
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++) {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    // Check if the array is a palindrome or not
    bool flag = true;

    // Two pointers approach
    int i = 0;
    int j = size - 1;
    while (i < j) {
        if (v[i] != v[j]) {
            flag = false;
            break;
        }
        i++;
        j--;
    }

    // Print the result
    if (flag == false)
        cout << "Not a Palindrome";
    else
        cout << "Palindrome";

    return 0;
}