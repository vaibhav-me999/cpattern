#include<stdio.h>
int main()
{
	int i,j,n,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		
		if(j<=i)
		{
		printf("%d ",a);
		a++;}
	}
		printf("\n");
		
	}

return 0;
}
