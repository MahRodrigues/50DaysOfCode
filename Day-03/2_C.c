#include <stdio.h>

int main(void) {

    int age, count, sumAge, min, max;
    float avg;

    //initializing variables
    count = 0;
    sumAge = 0;

    printf("Insert an age (0 to interrupt): ");
    scanf("%d", &age);

    max = min = age;

    while (age > 0) {

        count++;
        sumAge += age;

        if (age > max)
            max = age;
        if (age < min)
            min = age;

        printf("Insert an age: ");
        scanf("%d", &age);

    }

    //(float) is necessary given sumAge is, originally, an integer
    avg = (float)sumAge / count;

    printf("There are %d people, averaging %.1f years of age.", count, avg);
    printf("The highest age is %d and the lowest age is %d", max, min);

    return 0;
}