#include<stdio.h>
int main()
{
	int i,j;
        float n;
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		if(j<=i)
		printf("%d",j);
		printf("\n");
		
	}

return 0;
}
