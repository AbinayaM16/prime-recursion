#include<stdio.h>
int prime(int,int);
main()
{
	int n,check;
	printf("enter the number : ");
	scanf("%d",&n);
	check=prime(n,n/2);
	if(check==1)
	{
		printf("%d is a prime number\n",n);
	}
	else
	{
		printf("%d is not a prime number\n",n);
	}
	return 0;
}
int prime(int n,int i)
{
	if(i==1)
	  return 1;
	else
	  return prime(n,i-1);
}
