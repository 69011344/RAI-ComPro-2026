#include <stdio.h>
 
int main (){
 int num, sum;
 float i;
 sum = 0;
 float avg;
 for (i = 1; i<=10; i++){
    printf("\n%.0f. Enter your number: ", i);
    scanf("%d", &num);
    sum = sum+num;
 }
 avg = sum/i;
  printf("Total sum is %d\n", sum);
  printf("Average is %.2f\n", avg);




}