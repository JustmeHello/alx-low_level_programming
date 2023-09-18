#include "main.h"

/**
 * 
 * returns the length of a string.
 * 
 */
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

    while (*s != '\0') {
        length++;
        s++;
    }

    return length;
}
>>>>>>> b4380cdbc66ea278809f6b341e26a40f0ae9ce90
}
