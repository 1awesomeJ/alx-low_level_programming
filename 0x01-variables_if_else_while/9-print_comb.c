#include <stdio.h>

int main(void)
{

int k=0;
	while (k<10){
	putchar(k+'0');
	if (k!=9){
	putchar(',');
	putchar(' ');
	}
	k++;
	}
	putchar('\n');
	return (0);
}
