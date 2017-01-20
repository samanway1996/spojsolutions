#include <stdio.h>
#include<iostream>
using namespace std;
 
int main(void)
{
	// your code goes here
	
	int tt;
	scanf("%d",&tt);
	while(tt--)
	{
		long long int a,b;
		scanf("%lli%lli",&a,&b);
		if(a==0)
		{
			if(b!=0) printf("No Number\n");
			else printf("0\n");
		}
		else if(a==1)
		{
			if(b!=1) printf("No Number\n");
			else printf("1\n");
		}
		else
		{
			if(a==b+2)
			{
				if(a%2==0) printf("%lli\n",a+b);
				else printf("%lli\n",a+b-1);
			}
			else if(a==b)
			{
				if(a%2==0) printf("%lli\n",a+b);
				else printf("%lli\n",a+b-1);
			}
			else printf("No Number\n");
		}
	}
	return 0;
}
