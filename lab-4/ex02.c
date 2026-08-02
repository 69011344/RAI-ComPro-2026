#include <stdio.h>

int main(){
  int count = 1, num, sum = 0;
  while (count <10){
   printf("\n%d. Enter your number: ", count);
    scanf("%d", &num);
    sum = sum + num;
    count++;
   }
  printf("Total sum is %d\n", sum);





}