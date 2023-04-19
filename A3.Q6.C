#include <stdio.h>  
  int main() {    
      char c;  
      printf("Enter a character: ");  
      scanf("%c", &c);    
       // %d displays the integer value of a character  
      // %c displays the actual character  
      printf("ASCII value of %c = %d", c, c);  
       return 0; 
 [4/18, 7:36 AM] Srikanth: #include <iostream>  
  using namespace std;  
  void findPermutations(string str, int l, int r){  
     if (l == r)  
     cout<<str<<" ";  
     else{  
     for (int i = l; i <= r; i++){  
      swap(str[l], str[i]);  
       findPermutations(str, l+1, r);  
      swap(str[l], str[i]);  
      }  
      }  
      }  
     int main(){  
     string str = "WXYZ";  
     int n = str.size();  
     findPermutations(str, 0, n-1);  
     return 0;  
    } 
  
  
  
