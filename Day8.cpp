#include<iostream>
#include<vector>
using namespace std;
int maximumprofit(vector<int> &prices){
    int minimum=prices[0];
    int res=0;
    for(int i=1;i<prices.size();i++){
        minimum=min(minimum,prices[i]);
        res=max(res,prices[i]-minimum);
    }
    return res;
}
int main(){
    vector <int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout << maximumprofit(prices);
}