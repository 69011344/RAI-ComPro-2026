#include <stdio.h>
int main(){
 int num, ans;
 printf("Enter Number: ");
 scanf("%d", &num);

 switch(0 < num && num < 101){
  case 0:
    printf("Out of bounds");
    break;
  
    case 1:
     ans = num%2;
      switch(ans){
       case 0:
       printf("Even");
       break;
       case 1:
       printf("Odd");
       break;
 }
  





 }



}