#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll dp1[18],dp2[18];


ll fn(ll a)
{
	ll s=0,i,j,ans=0,c=0;
	vector<ll> v;
	for(i=a;i!=0;i/=10)
	{
		v.pb(i%10);
		c++;
	}
	ll sz=v.size();
	for(i=sz-1;i>=0;i--)
	{
		for(j=v[i]+1;j<=9;j++)
		{
			ans+=(s+j)*pow(10,i);
			ans+=dp2[i];
		}
		s+=v[i];
	}
	return ans;
}

int main()
{
	ll i,j,a,b,cn1,cn2,ans,c,d,r;
	dp1[0]=0;
	dp2[0]=0;
	dp1[1]=45;
	dp2[1]=45;
	for(i=2;i<=17;i++)
	{
		a=45*pow(10,i-1);
		b=9*dp2[i-1];
		dp1[i]=a+b;
		dp2[i]=dp2[i-1]+dp1[i];
	}
//	for(i=1;i<16;i++)
//	{
//		cout<<dp[i]<<endl;
//	}
	while(1)
	{
		scanf("%lli%lli",&a,&b);
		if(a==-1) return 0;
		cn1=0;
		cn2=0;
		ans=0;
		r=0;
		for(i=a;i!=0;i/=10)
		{
			cn1++;
			r+=i%10;
		}
		for(i=b;i!=0;i/=10)
		{
			cn2++;
			
		}
		for(i=cn1+1;i<cn2;i++)
		{
			ans+=dp1[i];
			
		}
		c=fn(a);
		//cout<<c<<endl;
		d=fn(b);
		//cout<<d<<endl;
		ans+=c;
		if(cn1!=cn2)
		ans+=dp1[cn2]-d;
		else
		ans-=d;
		ans+=r;
		cout<<ans<<endl;
	}
}
