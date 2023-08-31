#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * check_palindrome1 - that returns 1 or return 0.
 * @str: character
 * @left: integer
 * @right: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char check_palindrome1(char *str, int left, int right)
{
if (str[left] == str[right])
return (1);
else if (str[left] >= str[right])
return (0);
else
return (check_palindrome1(str, str[left + 1], str[right - 1]));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
int leng = strlen(s);
return (check_palindrome1(s, 0, leng - 1));
}
