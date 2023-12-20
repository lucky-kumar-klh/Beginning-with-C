#include <stdio.h>
#include <math.h>
// void reverseDisplay(int n){

//   if (n == 0)
//     return;

//   int digit = n % 10;
//   printf("%d", digit);

//   reverse(n/10);

// }
int sum = 0;
int countDigit(int n){
  if (n == 0){
    return 0;
  }
  int count = 0;
  while (n){
    n = n/10;
    count++;
  }
  return count;
}

int reverseNum(int n){

  if (n == 0){
    return 0;
  }

  sum += (n%10)*pow(10,countDigit(n/10));

  return reverseNum(n/10) + sum;
  
}

int main(){

  int n = 9845;
  int ans = reverseNum(n);
  printf("%d", ans);
  return 0;
}