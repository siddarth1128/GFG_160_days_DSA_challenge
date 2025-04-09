#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm> // for sort
using namespace std;

// Function to find elements that appear more than n/k times
vector<int> findMajority(vector<int> &arr) {
    int n = arr.size();
    int k = 3;
    unordered_map<int, int> freq;
    vector<int> res;

    // Count frequency of each element
    for (int ele : arr)
        freq[ele]++;

    // Add elements with frequency > n/k
    for (const auto &it : freq) {
        if (it.second > n / k)
            res.push_back(it.first);
    }

    sort(res.begin(), res.end()); // optional: sorted output
    return res;
}

int main() {
    vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> res = findMajority(arr);

    for (int ele : res)
        cout << ele << " ";
    cout << endl;

    return 0;
}
