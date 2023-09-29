#include<stdio.h>
void printData(void *data, char dataType)
{
	if (dataType == 'i')
		printf("Integer: %d\n", *((int *)data));
	else if (dataType == 'f')
		printf("Float: %E\n", *((float *)data));
	else if (dataType == 'c')
                printf("Character: %c\n", *((char *)data));
	else
		printf("Unknow data type.\n");
}

int main()
{
	int intValue = 42;

	printData(&intValue, 'i');
	printData(&intValue, 'f');
	printData(&intValue, 'c');
}
