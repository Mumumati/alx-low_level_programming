#include<stdio.h>
#include<ctype.h>
void print_alphabet_x10()
{
    int a,b;
 	for(a=0;a<10;a++)	
       	{
	     	for(b='A'; b<='Z'; b++)	
	      	{
			putchar(tolower(b));
			   printf(" ");
	        }
	    printf("\n");
       }
}
   
  int main(void)
{
     	print_alphabet_x10();
      	return 0;
}
