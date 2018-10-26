#include<stdio.h>
int main ()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
			if(j>i)
			printf("%c",64+j-i);
			else
			printf(" ");
		}
	}
return 0;
}
