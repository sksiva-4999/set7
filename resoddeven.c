#include <stdio.h>
int main(void)
{
	int k,n;
	int sum=0;
	scanf("%d %d",&k,&n);
	sum=k+n;
	if(sum%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	return 0;
}
