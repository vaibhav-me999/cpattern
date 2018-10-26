#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		if(j>i)
		printf("%d",j-i);
		else 
		printf(" ");
		printf("\n");
		
	}

return 0;
}
