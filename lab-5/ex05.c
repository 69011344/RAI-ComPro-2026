#include <stdio.h>
int main(){
 int num[8];
 int numsort[8];
 int a,b,c, big,smol;

 for (a=0;a<8;a++){
    printf("Enter Number %d : ", a+1);
    scanf("%d", &num[a]);
 }
 
 for(b=0; b<8; b++){
    if (num[b] > num[b+1]){
        big = num[b];
        num[b] = num[b+1];
        num[b+1] = big;
    }
}
 for(c=1; c<8; c++){
    if (num[c] < num[c-1]){
        smol = num[c];
        num[c] = num[c-1];
        num[c-1] = smol;
    }
   if(num[1] < num[0]){
        smol = num[1];
        num[1] = num[0];
        num[1] = smol;
   }
 }
 printf("Largest number : %d\n", big);
 printf("Smallest number : %d\n", smol);
}