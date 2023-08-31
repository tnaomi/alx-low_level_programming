#include "main.h"
/**
* _strlen_recursion - find length of string
* @s: string input
* Return:length of string: integer
*/
int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));
return (0);
}
/**
* palindrome_checker - verifies if s palindrome.
* @s: string to be checked.
* @start: start index.
* @end: end index.
* Return: 1 if s is palindrome, 0 if not.
*/
int palindrome_checker(char *s, int start, int end)
{
if (s[start] == s[end])
if (start > end / 2)
return (1);
else
return (palindrome_checker(s, start + 1, end - 1));
else
return (0);
}
/**
* is_palindrome - output for palindrome check
* @s: string
* Return: 1 if palindrome, 0 if not.
*/
int is_palindrome(char *s)
{
return (palindrome_checker(s, 0, _strlen_recursion(s) - 1));
}
