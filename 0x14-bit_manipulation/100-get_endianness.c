/**
 * get_endianness - checks whether a machine is Little Endian or Big Endian.
 *
 * Return: Always 1 for Little Endian and 0 for Big Endian.
 */

int get_endianness(void)
{
int k = 7;
char *c = (char *)&k;

if (*c)
return (1);

return (0);
}
