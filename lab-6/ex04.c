#include <stdio.h>
#include <math.h>
int main(){
    int i,j;
    float loc;
    struct vector{
        float x,y;
    };
    struct vector pt[2];
    
        printf("u_x : " );
        scanf("%f", &pt[0].x);
        printf("u_y : " );
        scanf("%f", &pt[0].y);

         printf("v_x : " );
        scanf("%f", &pt[1].x);
        printf("v_y : " );
        scanf("%f", &pt[1].y);

        printf("Resultant vector is %.1fi + %.1fj", pt[1].x + pt[0].x, pt[1].y + pt[0].y);
}