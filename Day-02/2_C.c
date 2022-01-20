#include <stdio.h>

int main (void) {

    int i, num1, num2, sum;
    sum = 0;
    printf("Enter two integers of your choice: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {

        // increasing the first number by one digit if it's odd
        if (num1 % 2 != 0) {

            num1++;
        }

        // Since the limit is known, "for" is a better tool than "while"
        for (i = num1; i <= num2; i += 2) {

            sum += i;
        }

        printf("The sum of even numbers between %d and %d is: %d", num1, num2, sum);
    }

    else {

        //decreasing the first number by one digit if it's odd

        if (num1 % 2 != 0) {
            
            num1--;
        }

        for (i = num2; i <= num1; i += 2) {

            sum += i;
        }

        printf("The sum of even numbers between %d and %d is: %d", num2, num1, sum);
    }
    return 0;
}