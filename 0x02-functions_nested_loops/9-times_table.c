#include "main.h"
void times_table(void)
{
	int k;
	int n;
	int count =1;
	while (count <= 10){
		if (count !=1)	{
		_putchar(' ');
		}
		_putchar('0');
		if (count!=10){
		_putchar(',');
		_putchar(' ');
		}
		count++;
	}
		_putchar('\n');
		for (n=1; n<10; n++){
			for (k=0; k<10*n; k+=n){	
				if (k<10){
					if (k!=0){
				_putchar(' ');
					}
				_putchar(k + '0');
					if (k != 9*n){
					_putchar(',');
					_putchar(' ');
					}
					}
				else	{
				_putchar(k/10+'0');
				_putchar(k%10+'0');
					if (k != 9*n){
					_putchar(',');
					_putchar(' ');
					}			
					}
			}
		_putchar('\n');
		}
		
		return;
	}
