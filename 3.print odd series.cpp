#include<stdio.h>
int main()
{
	int i,n;
	printf("Display odd numbers till: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}