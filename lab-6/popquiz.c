#include <stdio.h>
int main(){
    int A[3][3] = {{1,0,-1},{-1,2,3},{2,4,5}};
    int Adiag[3][3];
    int i,j,k;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i==j){
                Adiag[i][j] = A[i][j];
            }
            else{
                Adiag[i][j] = 0;
            }
        }
    }
    
    printf("The diagonal matrix of A is:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", Adiag[i][j]);
        }
        printf("\n");
    }
    return 0;
}