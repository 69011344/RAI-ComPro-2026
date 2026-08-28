#include <stdio.h>
#include <string.h>
int main(){
    struct book {
        char name[30];
        float price,total;  
        float discount;
    };
    struct book book1;
    book1.discount = 10.0f;
    printf("Enter book name: ");
    scanf("%s", &book1.name);
    printf("Enter book price: ");
    scanf("%f", &book1.price);
    printf("Book: %s\n", book1.name);
    printf("Price: %f\n", book1.price);
    printf("Discount 10 percent : %f\n", book1.discount);
    printf("Total price: %f\n", book1.price-(book1.price*book1.discount/100));
  
}