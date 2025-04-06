#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void reverseArray(vector<int> &arr) {
    // code here
    int n=arr.size();
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
}
int main(){
    vector <int> arr = {1,2,3,4,5,6};
    reverseArray(arr);
    for(int i :arr){
        cout << i << endl;
    }
}