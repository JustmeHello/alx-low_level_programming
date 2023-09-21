#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: Returns the encoded string.
 */
char *rot13(char *str)
{
    int index1, index2;
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (index1 = 0; str[index1]; index1++)
    {
        if (str[index1] != ' ')
        {
            for (index2 = 0; alphabet[index2]; index2++)
            {
                if (str[index1] == alphabet[index2])
                {
                    str[index1] = rot13key[index2];
                    break;
                }
            }
        }
    }

    return (str);
}
