
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num[100];
    int numsort[100];
    int a, b, c, d, swap, i, amount;
    int currentValue, currentCount;

    printf("Enter the number of elements: ");
    scanf("%d", &amount);

    if (amount < 0 || amount > 100) {
        printf("Please enter a number between 0 and 100.\n");
        return 1;
    }

    for (a = 0; a < amount; a++) {
        printf("Enter %d integer: ", a + 1);
        scanf("%d", &num[a]);
    }

    for (i = 0; i < amount - 1; i++) {
        for (b = 0; b < amount - i - 1; b++) {
            if (num[b] > num[b + 1]) {
                swap = num[b];
                num[b] = num[b + 1];
                num[b + 1] = swap;
            }
        }
    }

    for (c = 0; c < amount; c++) {
        numsort[c] = num[c];
    }

    printf("The sorted numbers are: ");
    for (d = 0; d < amount; d++) {
        printf("%d ", numsort[d]);
    }
    printf("\n");

    if (amount > 0) {
        currentValue = numsort[0];
        currentCount = 1;

        for (d = 1; d < amount; d++) {
            if (numsort[d] == currentValue) {
                currentCount++;
            } else {
                printf("Element %d occurs %d times\n", currentValue, currentCount);
                currentValue = numsort[d];
                currentCount = 1;
            }
        }

        printf("Element %d occurs %d times\n", currentValue, currentCount);
    } else {
        printf("No elements entered.\n");
    }

    return 0;
}
