#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
#include&lt;math.h&gt;
int a3,a2,a1,a0;
float f(float x)
{
return (a3*x*x*x+a2*x*x+a1*x+a0);
}
int main()
{
float xl,xu,xm,fxl,fxu,fxm,E,Era;
printf(&quot;Enter the coefficients a3,a2,a1 and a0: \n&quot;);
scanf(&quot;%d%d%d%d&quot;,&amp;a3,&amp;a2,&amp;a1,&amp;a0);
printf(&quot;Enter initial bracket and E: \n&quot;);
scanf(&quot;%f%f%f&quot;,&amp;xl,&amp;xu,&amp;E);
fxl=f(xl);
fxu=f(xu);
if((fxu*fxl)&gt;0)
printf(&quot;Invalid!&quot;);
else
{
while(1)
{
xm=(xu+xl)/2;
fxm=f(xm);
if ((fxl*fxm)==0)
printf(&quot;Root=%f\n&quot;,xm);
else if ((fxl*fxm)&lt;0)
xu=xm;
else
xl=xm;
Era=(xl-xu)/xu;
if(Era&lt;E)
{
printf(&quot;Root =%f\n&quot;,xm);
break;
}
}
}
getch();
}
