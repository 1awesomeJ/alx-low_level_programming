#include "main.h"
void print_times_table(int n)
{
	int k;
	int p;
	int count =1;
	if (n>15){
		return;
	}
	else if (n<0){
		return;
	}
	else{

	while (count <= (n+1)){
		if (count !=1)	{
		_putchar(' ');
		}
		_putchar('0');
		if (count!=(n+1)){
		_putchar(',');
		_putchar(' ');
		_putchar(' ');

		}
		count++;
	}
		_putchar('\n');
		for (p=1; p<(n+1); p++){
			for (k=0; k<((n+1)*p); k+=p){	
				if (k< 10){
					if (k!=0){
				_putchar(' ');
				_putchar(' ');
					}
				_putchar(k + '0');
					if (k != n*p){
					_putchar(',');
					_putchar(' ');
					}
				}
				
				else if(10 <= k && k < 100){
				_putchar(' ');
				_putchar(k/10+'0');
				_putchar(k%10+'0');
					if (k != n*p){
					_putchar(',');
					_putchar(' ');
					}			
					}
				else {
				_putchar(k/100+'0');	
				_putchar((k-((k/100)*100))/10+'0');
				_putchar(k%10+'0');
					if (k != n*p){
					_putchar(',');
					_putchar(' ');
			}
			}
			}
			_putchar('\n');
		}	
		return;
	}
}
