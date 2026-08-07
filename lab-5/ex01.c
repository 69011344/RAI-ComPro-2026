#include <stdio.h>
int main(){
 int matrix[10],a;
   for (a=0; a<10; a++){
      printf("Enter the Value %d here: ",a+1);
      scanf("%d", &matrix[a]);
   }
   printf("Values in array are", "%2d");
   for (a=0; a<10; a++){
    
    printf("%3d", matrix[a]);

 } 
    






}