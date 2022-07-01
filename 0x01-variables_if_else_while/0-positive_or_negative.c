#include <stdio.h>

#include <stdlib.h>

#include <time.h>



int main(void)

{

		int n;
   	        srand(time(0));

		n = rand() - RAND_MAX / 2;

	             if (n>0)

		       {
			       printf("number is positive");
    			}

		     else
			     printf("number is negative");
		
		return (0);

}
