#include<stdio.h>
#include<conio.h>

/**
 * program to display the square of numbers
 * 
 */
void main()
{
    int square,value;
    
    printf("\n Enter a value !");
    scanf("%d",&value);
    square = value*value;
    printf("\n the square of %d is %d ",value ,square);
    getch();
}