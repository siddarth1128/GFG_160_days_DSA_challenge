class Solution {
    public:
      string startzero(string &s){
          for(int i = 0; i < s.size(); i++){
              if(s[i] == '1'){
                  return s.substr(i);
              }
          }
          return "0"; // or return ""; depending on your logic
      }
  
      string addBinary(string& s1, string& s2) {
          string str1 = startzero(s1);
          string str2 = startzero(s2);
  
          int n = str1.size();
          int m = str2.size();
  
          if(n < m){
              return addBinary(s2, s1); // swap and recurse
          }
  
          int carry = 0;
          int j = m - 1;
  
          for(int i = n - 1; i >= 0; i--){
              int bit1 = str1[i] - '0';
              int sum = bit1 + carry;
  
              if(j >= 0){
                  int bit2 = str2[j] - '0';
                  sum += bit2;
                  j--;
              }
  
              int bit = sum % 2;
              carry = sum / 2;
              str1[i] = (char)(bit + '0');
          }
  
          if(carry > 0){
              str1 = '1' + str1;
          }
  
          return str1;
      }
  };
  