#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll root[10000];
void ini()
{
	ll i;
	for(i=0;i<10000;i++)
	{
		root[i]=i;
	}
}

void uni(ll r1,ll r2)
{
	root[r1]=r2;
}

ll find_root(ll x)
{
	while(root[x]!=x)
	{
		x=root[x];
	}
	return x;
}

int main()
{
	ll tt,rr=0;
	scanf("%lli",&tt);
	while(tt--)
	{
		rr++;
		ll n,r,w,u,v,d1,d2,c=0,s1,s2,i,j,r1,r2,q,d;
		scanf("%lli%lli%lli%lli%lli",&n,&r,&w,&u,&v);
		ll a[n][2];
		for(i=0;i<n;i++)
		{
			scanf("%lli%lli",&a[i][0],&a[i][1]);
		}
		ini();
		set<pair<ll,ll> > st;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				d1=(a[i][0]-a[j][0])*(a[i][0]-a[j][0]);
				d1+=(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);
				d2=10000*i;
				d2+=j;
				st.insert(pair<ll,ll> (d1,d2));
			}
		}
		set<pair<ll,ll> >::iterator it;
		c=0;
		double sum1=0,sum2=0;
		for(it=st.begin();it!=st.end();it++)
		{
			if(c==n-w) break;
			d1=it->second;
			s1=d1/10000;
			s2=d1%10000;
			r1=find_root(s1);
			r2=find_root(s2);
			if(r1!=r2)
			{
				uni(r1,r2);
				d=it->first;
				q=r*r;
				double dist=sqrt(d);
				dist*=1.0;
				if(d>q)
				{
					sum2+=dist*v;
				}
				else
				{
					sum1+=dist*u;
				}
				c++;
			}
		}
		printf("Caso #%lli: %.3lf %.3lf\n",rr,sum1,sum2);
	}
}
