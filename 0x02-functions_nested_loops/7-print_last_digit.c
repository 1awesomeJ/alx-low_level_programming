#include "main.h"
int print_last_digit(int n)
{
	int k;
	if(n >= 0){
	k= n % 10;
	}
	else{
	k= (n*-1) % 10;
	}
	_putchar(k+'0');
	return (4);
}
