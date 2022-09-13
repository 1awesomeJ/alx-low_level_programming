#include "main.h"

void print_alphabet_x10(void)
{
	
	int n=1;
	while (n<=10)
	{
		char k = 'a';
		for(k='a'; k<='z'; k++){
			_putchar(k);
		}
		_putchar('\n');
		n++;
	}
		return;
}
