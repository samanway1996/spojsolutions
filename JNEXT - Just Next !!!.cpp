#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		ll a[n],i,m=0,j,t,p;
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
		}
		multiset<ll> st;
		for(i=n-1;i>=1;i--)
		{
			if(a[i]>a[i-1])
			{
				m=1;
				//cout<<i<<endl;
				break;
			}
			st.insert(a[i]);
		}
		if(m==0)
		{
			printf("-1\n");
			continue;
		}
		st.insert(a[i]);
		st.insert(a[i-1]);
		t=a[i-1];
		multiset<ll> ::iterator it;
		for(it=st.begin();it!=st.end();it++)
		{
			if(*it>t)
			{
				p=*it;
				break;
			}
		}
		for(j=0;j<i-1;j++)
		{
			printf("%lli",a[j]);
		}
		printf("%lli",p);
		ll o=0;
		for(it=st.begin();it!=st.end();it++)
		{
			if(*it!=p || o==1)
			{
				printf("%lli",*it);
				
			}
			else
			o=1;
		}
		printf("\n");
	}
}
