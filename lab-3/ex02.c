#include <stdio.h>
int main(){
 int num;
 printf("Enter Number: ");
 scanf("%d", &num);
 
 if (1 > num || num > 100)
  printf("Out of bounds");
 else if (num%2 == 0 )
   printf("Even");
 else 
   printf("Odd");
 

}