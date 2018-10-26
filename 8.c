#include<stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	k=2*n-1;
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=k;j++)
		if(j<(k/2-i)||j>(k/2+i))
		printf("*");
		else
		printf(" ");
		
	}
return 0;
}
