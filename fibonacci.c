#include<stdio.h>

int main()
{
	int num,i;
	printf("\t\t******************\n");
	printf("\t\tFibonacci Series by bdhan\n");
	printf("\t\t******************\n");
	printf("Enter the number of terms:\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d\t",fibo(i));
	}
	return 0;
}
int fibo(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return fibo(num-1)+fibo(num-2);
	}
}
