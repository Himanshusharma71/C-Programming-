#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i<= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			printf("\n '%c' is Found at Position %d ", ch, i + 1);
 		}
	}
	
  	return 0;
}