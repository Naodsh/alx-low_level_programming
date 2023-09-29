#include<stdio.h>
int main ()
{
	char arr[3];
	char (*ptr)[3] = &arr;

	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", arr + 2);

	printf("%p\n", ptr);
	printf("%p\n", ptr + 1);
	printf("%p\n", ptr + 2);
}
