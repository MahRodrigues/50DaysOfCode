#include <stdio.h>

int main(void) {

    int i, j, n;

    printf("Insert the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
