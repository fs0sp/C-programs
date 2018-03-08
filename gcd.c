#include<stdio.h>
void main()
{
	int n,i,n2,res;
	printf("ENTER THE TWO NUMBERS:");
	scanf("%d %d",&n,&n2);
		
	for(i=1;i<=n && i<=n2;i++)
	{
		if(n%i ==0  && n2%i == 0)
			
			res=i;
	}
	printf("GCD IS : %d",res);
}
