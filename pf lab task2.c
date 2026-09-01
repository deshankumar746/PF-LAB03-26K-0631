#include <stdio.h>

int main() {
    int age;
    float height;

    printf("Enter your age and height: ");
    scanf("%d %f", &age, &height);

    printf("The person is %d years old and %.2f feet tall.", age, height);

    return 0;
}
