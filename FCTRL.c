#include<stdio.h>
#include<math.h>
int main()
{
	long long int g,h;
	scanf("%lli",&g);
	for(h=1;h<=g;h++)
	{
	
long long int a,i,b=0,c=0,j,y;
scanf("%lli",&a);
for(i=a;i!=0;i=i/5)
{
	b++;
}
for(j=1;j<b;j++)
{
	y=a/pow(5,j);
	c=c+y;
}
printf("%lli\n",c);}
return 0;
}
