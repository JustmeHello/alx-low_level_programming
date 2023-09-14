#include "main.h"
/**
* main - causes an infinite loop
* description : check if char is upper case
* Return: 0
*/

int main(void) 
{
char c;
scanf("%c", &c);
if (isupper(c))
printf("1\n");
else
printf("0\n");
return 0;
}
