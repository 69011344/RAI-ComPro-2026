#include <stdio.h>
int main(){
 int calcscore,physcore,sciscore;
 float avg,total;
 char grade = 'O';
 char name[50];

 printf("Enter your name:");
 scanf(" %[^\n]s", name);
 printf("Enter your Calculus Score:");
 scanf("%d", &calcscore);
 printf("Enter your Physics Score:");
 scanf("%d", &physcore);
 printf("Enter your Science Score:");
 scanf("%d", &sciscore);
 
 total = (calcscore + physcore + sciscore);
 avg = total/3;
  if(avg >= 80)
   grade = 'A';
  else if(avg >= 70 && avg < 80)
   grade = 'B';
  else if(avg >= 60 && avg < 70)
   grade = 'C';
  else if(avg >= 50 && avg < 60)
   grade = 'D';
  else if(avg < 50)
   grade = 'F';
  else
 printf("Score out of bounds");
  
 
 printf("%s, your average is %f. You got a grade %c.""\n",name, avg, grade);
 










}