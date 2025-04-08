#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the next permutation
void nextPermutation(vector<int> &arr) {
    int n = arr.size(); 

    // Step 1: Find the pivot index
    int pivot = -1; 
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            pivot = i;
            break;
        }
    }

    // Step 2: If no pivot found, reverse the whole array
    if (pivot == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }

    // Step 3: Find the element greater than pivot, from right
    for (int i = n - 1; i > pivot; i--) {
        if (arr[i] > arr[pivot]) {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // Step 4: Reverse the suffix starting right after pivot
    reverse(arr.begin() + pivot + 1, arr.end());
}

int main() {
    vector<int> nums = {1, 2, 3}; // Example input

    cout << "Original: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    nextPermutation(nums); // Call the function

    cout << "Next permutation: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}
