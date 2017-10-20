#include <stdio.h>
int dodaj(int a, int b);
int test(int arg1,int arg2,int wynik)
{
	if(dodaj(arg1, arg2) == wynik)
	{
	puts("Dobry wynik :)\n");
	printf("%i +%i = %i\n",arg1, arg2, wynik);
	return 0;
	}
	else
	{
	puts("zle argumenty\n");
	printf("%i +%i != %i\n",arg1, arg2, wynik);
	return 0;
	}
}
int dodaj(int a, int b)
	{
	return a+b;
	}
int main()
	{
	test(3,3,6);
	test(3,4,6);
	return 0;
	}

