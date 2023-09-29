#include<stdio.h>
int main()
{
	char c;
	char *pc;

	int i;
        int *pi;

	c = 'a';
        pc = &c;

	i = '0';
	pi = &i;

	printf("%p\n%p\n%p\n%p\n", pc, pc + 1, pc + 2, pc + 3);
	printf("%p\n%p\n%p\n%p\n", pi, pi + 1, pi + 2, pi + 3);
}
