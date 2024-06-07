#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

// * Ques : Check if an array is a subset of another.

bool isSubset(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> elements;

    // Insert all elements of arr1 into the unordered set
    for (int i = 0; i < arr1.size(); i++) {
        elements.insert(arr1[i]);
    }

    // Check if all elements of arr2 are present in the unordered set
    for (int i = 0; i < arr2.size(); i++) {
        if (elements.find(arr2[i]) == elements.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    int n1, n2;

    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    if (isSubset(arr1, arr2)) {
        cout << "The second array is a subset of the first array." << endl;
    } else {
        cout << "The second array is not a subset of the first array." << endl;
    }

    return 0;
}
