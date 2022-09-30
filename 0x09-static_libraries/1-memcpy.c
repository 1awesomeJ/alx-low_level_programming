/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @src: pointer to the address of memory area to copy from
 * @n: the size of the memory to fill
 * @dest: pointer to the address of memory area to copy to
 *
 * Return: pointer to the memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
