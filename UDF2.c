#include<stdio.h>

Divisible(int n1)
{
	int a;
	
	if((n1%3==0 && n1%5==0))
	{
		printf("NUMBER IS DIVISIBLE BY 3 AND 5.\n");
	}
	else 
	{
		printf("NUMBER IS NOT DIVISIBLE BY 3 AND 5.\n");
	}
}
main()
{
	Divisible(12);
	Divisible(15);
}
