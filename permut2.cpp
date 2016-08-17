#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	while(1)
	{
		int n,m=0,i;
		cin>>n;
		if(n==0) break;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]-1]=i+1;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				m=1;
				break;
			}
		}
		if(m==0) cout<<"ambiguous\n";
		else cout<<"not ambiguous\n";
	}
}
