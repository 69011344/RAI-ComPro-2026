#include <stdio.h>
int main(){
 int i,j;
 int total=0;
 struct time{
    int m,s;
 };
 struct time t[3];
 for(i=0;i<3;i++){
    printf("Time Input %d (m:s): ", i+1);
    scanf("%d:%d", &t[i].m, &t[i].s);
 }
 for (j=0;j<3;j++){
    total = total + (t[j].m *60 + t[j].s); 
 }
 printf("Total time elapsed: %d second(s)", total);







}