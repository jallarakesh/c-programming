#include<stdio.h>  
    
  int gcd(int a, int b) {  
      int temp;  
      while(b != 0) {  
          temp = b;  
          b = a % b;  
          a = temp;  
      }  
      return a;  
  }  
    
  int lcm(int a, int b) {  
      return (a*b)/gcd(a, b);  
  }  
    
  int main() {  
      int a, b;  
      printf("Enter two numbers: ");  
      scanf("%d %d", &a, &b);  
      printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));  
      printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));  
      return 0;  
  } 
if(fr1[i]!=0)  
       {  
       fr1[i] = ctr;  
        }  
      }  
      printf("\nThe frequency of all elements of array : \n");  
      for(i=0; i<n; i++)  
      {  
          if(fr1[i]!=0)  
          {  
              printf("%d occurs %d times\n", arr1[i], fr1[i]);  
          }  
        }  
        } 
  
