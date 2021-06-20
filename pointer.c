#include <stdio.h>

int main()
{
	int i = 0;
	int number = 10;
	char c = 'a';
	char *str = "axyoxuxxxxbxxxxx";
	
	int h = 0 ;
	while (  str[h] != '\0' )
	{
		if (str[h] != 120)
		{
			printf("-------%d\n", str[h] - 32);
		}
		h++;
	}
