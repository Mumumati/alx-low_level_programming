#include <stdio.h>

void swap_int(int *a, int *b)
{
	int tempnum;

	tempnum = *a;
	 *a = *b;
	 *b = tempnum;
}
int main(void)
{
	int x1 = 9, x2 = 10;

	printf("Before swapping:");
	printf("\nValue of x1 is: %d", x1);
	printf("\nValue of x2 is: %d", x2);

	/*calling swap function*/
	 swap_int(&x1, &x2);

	 printf("\nAfter swapping:");
	 printf("\nValue of x1 is: %d", x1);
	 printf("\nValue of x2 is: %d", x2);
}

