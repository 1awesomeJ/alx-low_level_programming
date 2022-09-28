/**
 * _strlen_recursion - counts the length of a string using recursion
 *
 *
 *@s: the string to be whose length is to be determined.
 *Return: the length of s.
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

