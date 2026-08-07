#include <stdio.h>
int main(){
    int matrix[3][3];
    int a,b;
    
    for (a = 0; a < 3; a++){
      for (b=0; b< 3 ; b++){
       printf("Enter Numbers [%d] [%d]: ",a,b);
       scanf("%d", &matrix[a][b]);
      }
    }
   
   printf("=====MATRIX[3]x[3]=====\n");
    for (a = 0; a<3; a++){
      for(b=0; b<3 ; b++){
        printf("%5d\t", matrix[a][b]);

      }
      printf("\n");
    }
}
