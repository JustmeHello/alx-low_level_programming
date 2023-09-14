#include "main.h"
/**
* main - causes an infinite loop
* description : check if char is upper case
* Return: 0
*/

int main(void) 
{
char a;
scanf("%c", &a);
if (isupper(a))
printf("1\n");
else
printf("0\n");
return 0;
}
