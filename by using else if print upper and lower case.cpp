#include<stdio.h>
int main()
{
	char character;
	printf("enetr character");
	scanf("%c",&character);
	if(character>='A' && character<='Z')
	{
	printf(" upper case");
	}
     else if (character>='a' && character<='z'){
	 
     	printf(" lower case");
     }else {
     	printf("not english");
	 }
	 	
	 return 0;
}
