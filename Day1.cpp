#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FAsorting(vector <int> &arr){
    int n= arr.size();
    sort(arr.begin(),arr.end());
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            return arr[i];
        }
    }
    return -1;
    //  Time Complexity: O(n*log(n)), as sorting the array takes O(n*log(n)) time and traversing the array can take O(n) time in the worst case, so total time complexity = (n*log(n) + n) = O(n*log(n)).
    // Auxiliary space: O(1), as no extra space is required// 
    }
int SAtwopass(vector <int> &arr){
    int n = arr.size();
    int max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int seclar=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>seclar && arr[i]!=max){
            seclar = arr[i];
        }
    }
    return seclar;
//     Time Complexity: O(2*n) = O(n), as we are traversing the array two times.
//     Auxiliary space: O(1), as no extra space is required.
}
int MainApp(vector<int> &arr){//we have to reduce the complexity
    int n=arr.size();
    int lar=-1;
    int seclar=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            seclar=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar && arr[i] > seclar){
            seclar=arr[i];
        }
    }
    return seclar;
}
int main(){
    vector<int> arr = { 12, 35,35,35, 1, 10, 34, 1 };
    cout << FAsorting(arr)<< endl;
    cout << SAtwopass(arr)<<endl;
    cout << MainApp(arr);
}