#include <stdio.h>

int main (void)
{	
	int a=-1;
	int b=-1;
	while (a<10){
		a++;
		b=-1;
	while (b<9){
		b++;
	if (a>=b){
	continue;
	}
	putchar(a+'0');
	putchar(b+'0');
	if (a !=8){
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
