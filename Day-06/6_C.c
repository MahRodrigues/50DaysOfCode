#include <stdio.h>

int main (void) {
    
    int a = 10;
    int *p = &a;
    
    printf("This program shows the basic declaration of a pointer");
    
    printf("\na = 10, *p is an integer");
    
    printf("\n\n&a is the address of a = %p", &a);
    
    printf("\n\np stores the address of a = %p", p);
    
    printf("\n\n*p stores the value (content) of a = %d", *p);
    
    return 0;
}