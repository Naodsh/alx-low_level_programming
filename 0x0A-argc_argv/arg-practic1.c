#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	
	int i;
	int sum = 0;
	printf ("%d\n", argc);

	printf("argv[]\n");
	if (argc > 1)
	{
		for(i = 0; i < argc; i++)
		{
			/* printf("argv[%d] = %s\n", i, *(argv + i)); */
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);

		}
		printf("sum = %d\n", sum);
	}


		return 0;
}
