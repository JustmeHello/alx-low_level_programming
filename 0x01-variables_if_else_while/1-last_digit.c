#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

        L = n%10;

        if (L>5)
		printf("is %d and is greater than 5, L ");
	else if (L=0)
		printf("is %d and is zero, L");
	else (L<6 , L!=0)
		printf("is %d and is less than 6 and not 0, L");

	return (0);
}
