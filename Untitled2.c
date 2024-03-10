#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int main()
{
printf(&;\t\t***********************************************\n&quot;);
printf(&;\t\t\t Newton&#39;s Divided Difference Interpolation\n&quot;);
printf(&quot;\t\t**********************************************\n&quot;);
int x[10], y[10], p[10];
int k,f,n,i,j=1,f1=1,f2=0;
printf(&quot;\nEnter the number of observations:\n&quot;);
scanf(&;%d&quot;, &amp;n);
printf(&quot;\nEnter the different values of x:\n&quot;);
for (i=1;i&lt;=n;i++)
scanf(&quot;%d&quot;, &amp;x[i]);
printf(&quot;\nThe corresponding values of y are:\n&quot;);
for (i=1;i&lt;=n;i++)
scanf(&quot;%d&quot;, &amp;y[i]);
f=y[1];
printf(&quot;\nEnter the value of &#39;k&#39; in f(k) you want to evaluate:\n&quot;);
scanf(&quot;%d&quot;, &amp;k);
do
{
for (i=1;i&lt;=n-1;i++)
{
p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
y[i]=p[i];
}
f1=1;
for(i=1;i&lt;=j;i++)
{
f1*=(k-x[i]);
}
f2+=(y[1]*f1);
n--;
j++;
}
while(n!=1);
f+=f2;
printf(&quot;\nf(%d) = %d&quot;, k , f);
}
