#include <stdio.h>
int main (){
 
 char name[20];
 int lab_score;
 int midterms;
 int final;
 int totalblud;
 char idnumblud[30];
 int labweighted, midweighted, finalweighted;
 
 printf("Enter your name surname: ");
  scanf(" %[^\n]s", name);
 printf("Enter your id:");
 scanf("%s", &idnumblud);
 printf("Enter your score \n");
 printf("%8s","   Laboratory 15 : ");
 scanf("%d", &lab_score);
 printf("%8s","   Midterm 35 : ");
 scanf("%d", &midterms);
 printf("%8s","   Final 50 : ");
 scanf("%d", &final);

 labweighted = lab_score * 0.15;
 midweighted = midterms * 0.35;
 finalweighted  = final * 0.5;
 totalblud = labweighted + midweighted +finalweighted;
 printf("Total: %d\n", totalblud);
}