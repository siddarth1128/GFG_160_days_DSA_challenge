#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
bool areAnagrams1(string &s1,string &s2){
    if(s1.size()!=s2.size()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}
bool areAnagrams2(string &s1,string &s2){
    unordered_map<char,int> chcount;
    for (char ch:s1){
        chcount[ch]+=1;
    }
    for(char ch:s2){
        chcount[ch]-=1;
    }
    for(auto&pair:chcount){
        if(pair.second!=0){
            return false;
        }
    }
    return true;
}int main(){
    string s1="abcd";
    string s2="bdca";
    bool res1 = areAnagrams1(s1,s2);
    bool res2 = areAnagrams2(s1,s2);
    if(res1){
        cout << "anagram";
    }
    else{
        cout << "not anagram";
    }
    if(res2){
        cout << "anagram";
    }
    else{
        cout << "not anagram";
    }
}