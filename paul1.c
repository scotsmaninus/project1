#include <stdio.h>

int function1 (int i)
{
    return (i*2);
}

float function2 (int i)
{
    return (i * 3.14159);
}

main()
{
    int i = 3;
    int j = 0;
    float k = 0.0;

	printf("Hello world\n");
	j = function1(i);
	printf("Input value %d  Output value %d\n",i,j);
	k = function2(i);
	printf("Input value %d Output value %f\n",i,k);
}


