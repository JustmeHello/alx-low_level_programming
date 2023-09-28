#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index of the current substring.
 * @end: The ending index of the current substring.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* Base case: If start is greater than or equal to end, it's a palindrome */
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_recursive(s, start + 1, end - 1)); /* Recursively check the remaining substring */
	}

	return (0); /* If characters don't match, it's not a palindrome */
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	return (is_palindrome_recursive(s, 0, length - 1));
}
