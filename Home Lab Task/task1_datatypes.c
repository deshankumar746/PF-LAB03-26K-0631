#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age = 19;
    float marks = 91.5;
    double pi = 3.1415926535;
    char grade = 'C';
    bool passed = true;

    printf("Age = %i, Size = %zu bytes\n", age, sizeof(age));
    printf("Marks = %.2f, Size = %zu bytes\n", marks, sizeof(marks));
    printf("pi = %.10f, Size = %zu bytes\n", pi, sizeof(pi));
    printf("Grade = %c, Size = %zu bytes\n", grade, sizeof(grade));
    printf("Passed = %d, Size = %zu bytes\n", passed, sizeof(passed));
    return 0;
}
