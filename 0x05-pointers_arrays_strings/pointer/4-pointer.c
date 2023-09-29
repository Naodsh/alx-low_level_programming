#include<stdio.h>
int main()
{
	int nb;
	int *ptr;

	nb = 42;
	ptr = &nb;
	printf("%d %.60f\n", *ptr, *(float *)ptr);
	
	printf("%d %E\n", *ptr, *(float *)ptr);
}
