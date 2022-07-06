#include<stdio.h>
#include<ctype.h>
int _isalpha(int a)
{
      	if((a>='a'&&a<='z')||(a>='A'&& a<+'Z'))
	   printf("1");
       else
    	printf("0");
}
   
int main(void)
{
 char x;
  x=_isalpha('H');
  x=_isalpha('o')
  x=_isalpha(108);
  x=_isalpha(';');
    return 0;
}
 
