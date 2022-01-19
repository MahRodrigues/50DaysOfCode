#include <stdio.h>

int main()
{
    int num1, num2, sum_ints, diff_ints;
    float num3, num4, sum_floats, diff_floats;

    printf("Enter two integers: \n");
    scanf("%d %d", &num1, &num2);
    printf("Enter two numbers of your choice: \n");
    scanf("%f %f", &num3, &num4);

    sum_ints = num1 + num2;
    diff_ints = num1 - num2;
    sum_floats = num3 + num4;
    diff_floats = num3 - num4;
    
    printf("\n%d %d\n", sum_ints, diff_ints);
    printf("%.1f %.1f", sum_floats, diff_floats);

    return 0;
}