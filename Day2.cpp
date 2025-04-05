//moving all zeros to the array
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void pushingzerostoend(vector<int> &arr){
    int index = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[index]);
            index++;
        }
    }
}
int main(){
    vector <int> arr = {2,0,4,0,32,1};
    pushingzerostoend(arr);
    for(int ele : arr){
        cout << ele << endl;
    }
}