#include<stdio.h>
int main()
{
        int n;
        int *pn;
        int **ppn;
        int ***pppn;

        n = 42;
        pn = &n;
        ppn = &pn;
        pppn = &ppn;

        printf("%p == %p\n", pn, *ppn);
        printf("%p == %p\n", *ppn, **pppn);
        printf("%p == %p\n", *pppn, ppn);
//        printf("%p == %p\n", **pppn, ppn);
        printf("%d\n", ***pppn);
        printf("%d\n", **ppn); 
        printf("%d\n", *pn);  
}

