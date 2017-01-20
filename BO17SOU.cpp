#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
ll a[1000007],b[1000007],mx[1000007],mn[1000007];
 
int main()
{
 
	ll n,k,c;
	scanf("%lli%lli%lli",&n,&k,&c);
	ll i,j;
	for(i=0;i<n;i++)
	{
		scanf("%lli",&a[i]);
		b[i]=-a[i];
	}
//	if(k==1)
//	{
//		for(i=1;i<=n-k+1;i++)
//		cout<<i<<endl;
//		return 0;
//	}
	if(k>=n)
	{
		ll m1=1000000000,m2=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>m2) m2=a[i];
			if(a[i]<m1) m1=a[i];
			
		}
		if(m2-m1<=c) cout<<"1\n";
		else cout<<"NONE\n";
		return 0;
	}
	
	deque<ll> dq;
	for(i=0;i<k;i++)
	{
		while((!dq.empty()) && a[dq.back()]<=a[i])
		{
			dq.pop_back();
		}
		dq.pb(i);
	}
	for(i=k;i<n;i++)
	{
		mx[i-k]=dq.front();
		//cout<<mx[i-k]<<endl;
		while((!dq.empty()) && dq.front()<=i-k)
		{
			dq.pop_front();
		}
		//cout<<"ok\n";
		while( (!dq.empty()) && a[dq.back()]<=a[i])
		{
			dq.pop_back();
		}
		//cout<<"ok\n";
		dq.pb(i);
	}
	mx[n-k]=dq.front();
	deque<ll> dq2;
	for(i=0;i<k;i++)
	{
		while((!dq2.empty()) && b[dq2.back()]<=b[i])
		{
			dq2.pop_back();
		}
		dq2.pb(i);
	}
	for(i=k;i<n;i++)
	{
		
		mn[i-k]=dq2.front();
		//cout<<mn[i-k]<<endl;
		//cout<<"ok\n";
		while((!dq2.empty()) && dq2.front()<=i-k)
		{
			dq2.pop_front();
		}
		//cout<<"ok\n";
		while((!dq2.empty()) && b[dq2.back()]<=b[i])
		{
			dq2.pop_back();
		}
		//cout<<"ok\n";
		dq2.pb(i);
	}
	mn[n-k]=dq2.front();
	ll kd=0;
	for(i=0;i<n-k+1;i++)
	{
		//cout<<a[mx[i]]<<" "<<a[mn[i]]<<endl;
		if(a[mx[i]]-a[mn[i]]<=c)
		{
			cout<<i+1<<endl;
			kd=1;
		}
	}
	if(kd==0) cout<<"NONE";
	
}
