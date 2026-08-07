#include <stdio.h>
int main(){
 int even=0,odd=0,a,b,c,num;
 int son[10];

 for (a=0;a<10;a++){
  printf("Enter Value %d:  ", a+1);
  scanf("%d", &son[a]);
 }
 for (b=0;b<10;b++){
    num = son[b];
    if(num%2 == 0){
    even = even+1;
    }
    else{
    odd = odd+1;
    }

 }
printf("Even numbers %d\n", even);
printf("Odd numbers %d\n", odd);



}