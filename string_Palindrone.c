#include<stdio.h>
#include<string.h>

void main()
{
	char a[10];
	int j,i,l;
	printf("Enter the String : ");
	gets(a);
	l = strlen(a);

	for(i=0,j=l-1;i<l/2;i++,j--)
	{
		if(a[i]!=a[j])
		{
			printf("Not a Palindrone  : ");
			break;
		}
	}
	
	if(i==l/2)
	{
		printf("String is Palindrome");
	}

}
	
