#include <iostream>
using namespace std;

string trimLeadingZeros(string &s){
    string ss=" ";
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            return s.substr(i,s.size());
            break;
        }
    }
}
string addBinary(string &s1, string &s2) {
    s1 = trimLeadingZeros(s1);
    s2 = trimLeadingZeros(s2);
  
    int n = s1.size();  
    int m = s2.size(); 
    
    if (n < m) {
        return addBinary(s2, s1);
    }
    
    int j = m - 1;  
    int carry = 0; 
    for (int i = n - 1; i >= 0; i--) {
        int bit1 = s1[i] - '0';  
        int sum = bit1 + carry;
        if (j >= 0) {
            int bit2 = s2[j] - '0';  
            sum += bit2;
            j--;
        }
        int bit = sum % 2;
        carry = sum / 2;
        s1[i] = (char)(bit + '0');
    }
    if (carry > 0) {
        s1 = '1' + s1;
    }
    return s1;
}
int main() {
  
    string s1 = "1101", s2 = "111";
    cout << addBinary(s1, s2) << endl;
    return 0;
}