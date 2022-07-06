#include<stdio.h>
#include<ctype.h>
int print_last_digit(int a)
{
	    int digit;
	        digit=a%10;
		    printf("%d",digit);
}
   
int main()
{
      	int r;
 r=print_last_digit(98);
r=print_last_digit(0);
 r=print_last_digit(-1024);
 return 0;
}
 
