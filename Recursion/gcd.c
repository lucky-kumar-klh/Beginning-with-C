#include <stdio.h>

int gcd(int a, int b){
  int rem;
  if (a == b){
    return a;
  }
  if (b > a){
    rem = b % a;
    if (rem == 0) return a;
    return gcd(rem, a);
  }
  else {
    rem = a % b;
    if (rem == 0) return b;
    return gcd(rem, b);
  }
}

int main(){

  int x = 12, y = 24;
  printf("GCD is %d", gcd(x, y));
  
  int lcm = (x*y)/(gcd(x, y)); 

  printf("LCM is %d", lcm);

  return 0;
}