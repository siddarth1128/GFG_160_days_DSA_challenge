#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr, int d) {
    int n = arr.size();

    if (n == 0) return;

    d %= n;
    if (d == 0) return;

    vector<int> temp(n);

    for (int i = 0; i < n - d; i++) {
        temp[i] = arr[d + i];
    }

    for (int i = 0; i < d; i++) {
        temp[n - d + i] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateArray(arr, d);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
