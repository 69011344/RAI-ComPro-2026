#include <stdio.h>
int main(){
 float minutes;
 int hours;
 float remaining_minutes;
 
 printf("Enter Total Minutes:");
 scanf("%f", &minutes);
 hours = minutes / 60;
 remaining_minutes = (int)minutes % 60;
 printf("%.1f minutes is %.1d hour(s) and %.1f minute(s)", minutes, hours, remaining_minutes);

 return 0;




}