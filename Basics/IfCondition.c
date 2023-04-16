#include <stdio.h>
#include <stdlib.h>
/**
 * program to check the age limit using if statement
 *
 * Return: always 0
 */
int main()
{
    int age;
    printf("Please enter the age ");
    scanf("%d",&age);
    if ( age > 18) {
        printf("You're qualified");
    } else {
        printf("You're not eligble");
    }

    return 0;
}
