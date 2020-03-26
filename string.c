#include <stdio.h>

int main(void)
{
    char name[20];
    int age;

    printf("What is your name?\n");
    scanf("%s", name);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello, %s. you are %d\n", name, age);
}
