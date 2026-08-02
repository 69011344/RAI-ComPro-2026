#include <stdio.h>
int main(){
  int count, num, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
  count = num-1;
  factorial = num;
  for (count ; count >= 1; count--){
    factorial = factorial * count;
  
  

  }

  printf("Factorial of %d is %d\n", num, factorial);



}

