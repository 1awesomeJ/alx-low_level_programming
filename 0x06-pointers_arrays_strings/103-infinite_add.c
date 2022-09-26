#include <string.h>
char* infinite_add(char *n1, char *n2)

{
	int j, k;
	char s[1000];
	j = strlen(n1);
	k = strlen(n2);

/*	if (size_r < j || size_r < k)
		r = 0;*/
	if (k < j)
	{	strcpy(s, n2);
		memset (n2, '0', (j-k));
		strcpy(&(n2[j-k]), s);
		k = j;
	}
	if (k > j)
	{
		strcpy(s, n1);
		memset (n1, '0', (k-j));
		strcpy(&(n1[k-j]), s);
		j = k;
	}
/*	c = 0;
	for (i = j-1; i >= 0; i--)
	{
		r[i]= (n1[j-1] +n2[k-1] + c - 96) % 10;
		c = (n1[j-1] +n2[k-1] + c - 96) / 10;
	}
	if (c > 0)*/
		return (n2);

}

