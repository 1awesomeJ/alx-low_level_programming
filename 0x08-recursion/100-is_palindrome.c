/**
 * len - returns the length of a string
 *@s: the string whose length is to be gotten.
 * Return: the string length
 */


int len(char *s)
{
	if (*s == '\0')
	return (0);
return (1 + len(s + 1));
}

/**
 * check - checks if a string is palindrome or not.
 *@start: the starting address of the string
 *@end: the ending address of the string
 * Return: 1 if the string is palindrome, 0 if it isn't
 */

int check(char *start, char *end)
{
if (*start != *end)
	return (0);
if (start >= end)
	return (1);
return (check(start + 1, end - 1));
}

/**
 * is_palindrome - returns a value as to whether a string is palindrome or not
 *@s: the string argument.
 * Return: 1 for strings that are plaindrome, 0 for those that aren't.
 */


int is_palindrome(char *s)

{
	int w, t, y;

	w = len(s);
	t = w - 1;
	if (w <= 1)
		y = 1;
	y = check(s, s + t);

	return (y);
}
