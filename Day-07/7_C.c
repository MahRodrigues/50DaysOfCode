#include <stdio.h>
void swap (int *pa, int *pb);

int main (void) {
    int a = 10, b = 20;
    swap (&a, &b);
    printf("a = %d b = %d", a, b);
}

void swap (int *pa, int *pb) {
    int tmp = *pb;
    *pb = *pa;
    *pa = tmp;
}