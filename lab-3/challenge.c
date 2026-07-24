#include <stdio.h>
int main(){
 int calcscore,physcore,comproscore;
 float avg,total,calcgpa,phygpa,comprogpa, avg_gpa;
 char calc_grade = 'O';
 char phy_grade = 'O';
 char compro_grade = 'O';
 char name[50];

 printf("Enter your Calculus Score:");
 scanf("%d", &calcscore);
 printf("Enter your Physics Score:");
 scanf("%d", &physcore);
 printf("Enter your Compro Score:");
 scanf("%d", &comproscore);
 
  if(calcscore >= 80)
   calc_grade = 'A';
  else if(calcscore >= 70 && avg < 80)
   calc_grade = 'B';
  else if(calcscore >= 60 && avg < 70)
   calc_grade = 'C';
  else if(calcscore >= 50 && avg < 60)
   calc_grade = 'D';
  else if(calcscore < 50)
   calc_grade = 'F';
  else
 printf("Score out of bounds");

   if(physcore >= 80)
   phy_grade = 'A';
  else if(physcore >= 70 && avg < 80)
   phy_grade = 'B';
  else if(physcore >= 60 && avg < 70)
   phy_grade = 'C';
  else if(physcore >= 50 && avg < 60)
   phy_grade = 'D';
  else if(physcore < 50)
   phy_grade = 'F';
  else
  printf("Score out of bounds");

   if(comproscore >= 80)
   compro_grade = 'A';
  else if(comproscore >= 70 && avg < 80)
   compro_grade = 'B';
  else if(comproscore >= 60 && avg < 70)
   compro_grade = 'C';
  else if(comproscore >= 50 && avg < 60)
   compro_grade = 'D';
  else if(comproscore < 50)
   compro_grade = 'F';
  else
  printf("Score out of bounds");
 
 if(calcscore >= 80)
   calcgpa = 4.00;
  else if(calcscore >= 70 && avg < 80)
   calcgpa = 3.00;
  else if(calcscore >= 60 && avg < 70)
   calcgpa = 2.00;
  else if(calcscore >= 50 && avg < 60)
   calcgpa = 1.00;
  else if(calcscore < 50)
   calcgpa = 0.00;

   if(physcore >= 80)
   phygpa = 4.00;
  else if(physcore >= 70 && avg < 80)
   phygpa = 3.00;
  else if(physcore >= 60 && avg < 70)
   phygpa = 2.00;
  else if(physcore >= 50 && avg < 60)
   phygpa = 1.00;
  else if(physcore < 50)
   phygpa = 0.00;

   if(comproscore >= 80)
   comprogpa = 4.00;
  else if(comproscore >= 70 && avg < 80)
   comprogpa = 3.00;
  else if(comproscore >= 60 && avg < 70)
   comprogpa = 2.00;
  else if(comproscore >= 50 && avg < 60)
   comprogpa = 1.00;
  else if(comproscore < 50)
   comprogpa = 0.00;
  
 avg_gpa = (calcgpa + phygpa + comprogpa)/3;

  printf("Calculus score: %d""\n", calcscore);
  printf("Physics score: %d""\n", physcore);
  printf("Compro score: %d""\n", comproscore);

  printf("%-10s %-10s %-10s %-10s""\n", "Subject", "Score", "Grade", "Grade");
  printf("%-10s %-10d %-10c %-10.1f""\n", "Calculus", calcscore, calc_grade, calcgpa);
  printf("%-10s %-10d %-10c %-10.1f""\n", "Physics", physcore, phy_grade, phygpa);
  printf("%-10s %-10d %-10c %-10.1f""\n", "Compro", comproscore, compro_grade, comprogpa);

  printf("GPA: %.1f""\n", avg_gpa);
 
 
 
 










}