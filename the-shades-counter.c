#include <stdio.h>
#include <string.h>
void main()
{
	int i=0,x=0;
	char s[]="The string where the word the present more than once";
	for(i=0;i<strlen(s);i++)
	{
		if((s[i]=='T' ||s[i]=='t') &&(s[i+1]=='H' || s[i+1]=='h')&&(s[i+2]=='E' || s[i+2]=='e'))
		{
			x=x+1;
		}
	}
	
		{printf("The number of occurance is %d",x);}
	
	
		
}

