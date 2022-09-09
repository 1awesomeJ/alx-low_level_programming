#include <stdio.h>

int main (void)
{
	int a=0;
	char k='a';
	while (a<10){
		putchar(a+'0');
		a++;
	}
	while (k<'g'){
		putchar (k);
		k++;
	}
	putchar('\n');
	return (0);
}
