#include<stdio.h>
#include<iostream>
using namespace std;
long long int rev(long long int a)
{
	long long int i,u=0;
	for(i=a;i!=0;i=i/10)
	{
		u=u*10;
		u=u+i%10;
	}
	return u;
}
int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		long long int a,b,c;
	scanf("%lli%lli",&a,&b);
	a=rev(a);
	b=rev(b);
	c=a+b;
	c=rev(c);
	printf("%lli\n",c);
	}
	
} 
Source code | Plain text | Copy to submit

