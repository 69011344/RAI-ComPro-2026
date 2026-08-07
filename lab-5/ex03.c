#include <stdio.h>
int main(){
 int marks[5];
 int big=0, total, a=0,b=0,c=0,d=0;

 for (a=0; a<5; a++){
   printf("Enter score of student %d :  ", a+1);
   scanf("%d", &marks[a]);
 }
  

 for(c=0; c<5; c++){
    if (marks[c] > marks[c+1]){
        big = marks[c];
        marks[c] = marks[c+1];
        marks[c+1] = big;
    }
 }
for (d=0; d<5; d++){
    total = total + marks[d];
}
printf("Total marks %d\n", total);
printf("The best score is : %d", marks[4]);

}




