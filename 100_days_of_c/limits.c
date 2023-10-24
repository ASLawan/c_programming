#include <stdio.h>
#include <limits.h>

int main(void)
{
	int var1 = INT_MIN;
	int var2 = INT_MAX;
	short int var3 = SHRT_MIN;
	short int var4 = SHRT_MAX;
	short unsigned int var5 = 0;
	short unsigned int var6 = USHRT_MAX;
	long unsigned int var7 =  0;
	long unsigned int var8 = ULONG_MAX;


	printf("Range of int is from: %d to %d\n", var1, var2);
	printf("Range of short int is from: %d to %d\n", var3, var4);
	printf("Range of short unsigned int is from: %u to %u\n", var5, var6);
	printf("Range of long unsigned int is from: %lu to %lu\n", var7, var8);

	return (0);
}
