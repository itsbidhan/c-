#include<stdio.h>
#include<conio.h>
#include<math.h>

int a3,a2,a1,a0;
float f(float x)
{
	return (a3*x*x*x+a2*x*x+a1*x+a0);
}
int main()
{
	float xl,xu,xm,fxl,fxu,fxm,E,Era;
	printf("Enter the coefficients a3,a2,a1 and a0: \n");
	scanf("%d%d%d%d",&a3,&a2,&a1,&a0);
	printf("Enter initial guess and E: \n");
	scanf("%f%f%f",&xl,&xu,&E);
	fxl=f(xl);
	fxu=f(xu);
	if((fxu*fxl)>0)
	printf("Invalid!");
	else
	{
	while(1)
	{
		xm=(xu+xl)/2;
		fxm=f(xm);
		if ((fxl*fxm)==0)
		printf("Root=%f\n",xm);
		else if ((fxl*fxm)<0)
		xu=xm;
		else
		xl=xm;
		Era=(xl-xu)/xu;
		if(Era<E)
		{
			printf("Root =%f\n",xm);
			break;
		}
	}
	}
	getch();
}




