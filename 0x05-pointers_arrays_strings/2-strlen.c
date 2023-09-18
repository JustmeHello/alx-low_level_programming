#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string to calculate the length of.
 *
 * Return: Length of the string.
 */
<<<<<<< HEAD
<<<<<<< HEAD
int _strlen(char *s)
{
<<<<<<< HEAD

	int length = 0;
	while (*s != '\0\){
			length ++;
			s++;
	}
	return 0;

=======
strlen(*s);
>>>>>>> 1b55564f50904a1344b11c1c38f7e84949ede88c
=======
int _strlen(char *s) {
    int length = 0;
=======
int _strlen(char *s)
{
	int length = 0;
>>>>>>> de95b79bd405b78ed68a0ade7778cf6b9ac8ea8a

	while (*s != '\0')
	{
		length++;
		s++;
	}

<<<<<<< HEAD
    return length;
}
>>>>>>> b4380cdbc66ea278809f6b341e26a40f0ae9ce90
=======
	return (length);
>>>>>>> de95b79bd405b78ed68a0ade7778cf6b9ac8ea8a
}
