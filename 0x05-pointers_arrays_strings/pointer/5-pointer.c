#include<stdio.h>
int main()
{
        int nb;
        int *ptr;

/*        nb = 42;  */
	nb = 0b100000000;

/*	nb = 0b000101010; */
        ptr = &nb;
        printf("%d %c\n", *ptr, *(char *)ptr);

        printf("%d %d\n", *ptr, *(short *)ptr);
}
