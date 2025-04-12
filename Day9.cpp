#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minHeight(vector <int> &heights,int k){
    sort(heights.begin(),heights.end());
    int n = heights.size();
    int res = heights[n-1]-heights[0];
    for(int i=0;i<n;i++){
        if((heights[i]-k)<0){
            continue;
        }
        int minH = min(heights[0]+k,heights[i]-k);
        int maxH = max(heights[i-1]+k,heights[n-1]-k);
    }
    return res;
}