#include <stdio.h>
#include <conio.h>
#include <direct.h>

/*Progam to display the current day,month and year*/

void main()
{
struct dosdate_t;
_direct_getdate(&d);
printf("The current day is: %d\n", d.day);
printf("The current month is: %d\n", d.month);
printf("The current year is: %d\n", d.year);
getch();
}
