#include<stdio.h>
int main()
{
	int n,end;
	printf("print all natural numbar from 1 to:");
	scanf("%d",&end);
	n=1;
	while(n<=end)
	{
		printf("%d\n",n);
		n++;
	}
}