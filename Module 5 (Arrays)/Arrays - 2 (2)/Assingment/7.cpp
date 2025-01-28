#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter Array Size : ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;

    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (arr[i] != arr[j]) {
            isPalindrome = false;
            break; // No need to check further if mismatch is found
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        cout << "Array is Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}