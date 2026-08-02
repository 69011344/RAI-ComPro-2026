#include <stdio.h>

int main(){
 int count =1, num;

 do{
    printf("\nEnter the number: ");
    scanf("%d", &num);

     if (num == 0){
      printf("Exiting Program.... Bye!\n");
     }
     else if (num%2 == 0){
      printf("%d is an even number\n", num);
     }
     else{
      printf("%d is an odd number\n", num);
     }
 }
 while (num != 0);
 return 0;


  









}