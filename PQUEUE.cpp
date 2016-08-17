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
//		ll n,p,c=0,d=0,k;
//		scanf("%lli%lli",&n,&k);
//		ll a[n],i;
//		multiset<ll> pq;
//		for(i=0;i<n;i++)
//		{
//			scanf("%lli",&a[i]);
//			pq.insert(a[i]);
//		}
//		multiset<ll> :: iterator it;
//		it=pq.end();
//		it--;
//		for(;it!=pq.begin();--it)
//		{
//			if(*it>a[k])
//			c++;
//			if(*it==a[k])
//			d++;
//		}
//		d=0;
//		if(c==0)
//		{
//			for(i=0;i<=k;i++)
//			{
//				if(a[i]<a[k]) c++;
//				
//				
//			}
//			printf("%lli\n",k+1-c);
//			continue;
//		}
//		ll mode=0;
//		for(i=n-1;i>=k;i--)
//		{
//			if(a[i]>a[k])
//			{
//				mode=1;
//				break;
//			}
//		}
//		if(mode==0)
//		{
//			ll cn;
//			cn=0;
//			for(i=0;i<=k;i++)
//			{
//				if(a[i]>a[k])
//				{
//					cn=0;
//				}
//				else if(a[i]==a[k]) cn++;
//			}
//			printf("%lli\n",c+cn);
//			continue;
//		}
//		for(i=n-1;i>=k;i--)
//		{
//			if(a[i]>a[k]) break;
//			if(a[i]==a[k]) d++;
//		}
//		printf("%lli\n",c+d+1);
		ll n,k;
		scanf("%lli%lli",&n,&k);
		ll a[n],i,s=0,t,t1,t2;
		queue<ll> v;
		priority_queue<ll> pq;
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
			pq.push(a[i]);
			if(i==k)
			a[i]=a[i]*100+1;
			else a[i]=100*a[i];
			v.push(a[i]);
			
		}
		while(v.size()!=0)
		{
			t=v.front();
			t2=t%100;
			t1=t/100;
			v.pop();
			if(t1==pq.top())
			{
				s++;
				pq.pop();
				if(t2==1) break;
			}
			else
			{
				v.push(t);
			}
		}
		printf("%lli\n",s);
	}
	
}
