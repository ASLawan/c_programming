#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr, i, s1, s2;

	printf("\t\nThis program reallocates memory using realloc function\n");
	printf("Enter size: \n");
	scanf("%d", &s1);

	/*allocate memory*/
	ptr = (int *)malloc(s1 * sizeof(int));

	/*verify allocated memory*/
	if (ptr == NULL)
	{
		printf("Error! memory not allocated\n");
		exit(0);
	}

	/*print addresses of the */
	printf("The addresses of the allocated memory are: \n");
	for (i = 0; i < s1; i++)
	{
		printf("%pc\n", ptr + i);
	}

	/*reallocate the memory*/
	printf("Enter new size: \n");
	scanf("%d", &s2);

	ptr = realloc(ptr, s2 * sizeof(int));

	if (ptr == NULL)
	{
		printf("Error reallocating memory\n");
		exit(0);
	}

	printf("The addresses of the new allocated memory are: \b");
	for (i = 0; i < s2; i++)
	{
		printf("%pc\n", ptr + i);
	}

	/*free allocated memory*/
	
	free(ptr);

	return (0);
}
