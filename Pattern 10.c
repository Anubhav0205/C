#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		printf("%c",66-j%2);
		printf("\n");
	}
}
