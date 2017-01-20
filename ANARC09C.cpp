#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
ll prime[1000009];
ll factor[1000009][12];
ll flag[1000009];
 
void precomp()
{
	prime[0]=1,prime[1]=1;
	ll i,j;
	for(i=4;i<1000009;i+=2)
	{
		prime[i]=1;
	}
	for(i=3;i*i<1000009;i+=2)
	{
		if(prime[i]==0)
		{
			j=3*i;
			while(j<1000009)
			{
				prime[j]=1;
				j+=2*i;
			}
		}
	}
//	for(i=0;i<200;i++)
//	{
//		if(prime[i]==0)
//		{
//			cout<<i<<endl;
//		}
//	}
	for(i=2;i<1000009;i+=1)
	{
		if(prime[i]==0)
		{
			j=i;
			while(j<1000009)
			{
				factor[j][flag[j]]=i;
				flag[j]++;
				j+=i;
			}
		}
	}
//	for(i=0;i<200;i++)
//	{
//		for(j=0;j<flag[i];j++)
//		{
//			cout<<factor[i][j]<<" ";
//		}
//		cout<<": "<<i<<" "<<flag[i]<<endl;
//	}
 
}
 
int main()
{
	precomp();
	ll t=0,p1,p2,p,aa,bb;
	while(1)
	{
		ll a,b,ans=0,i;
		t++;
		scanf("%lli%lli",&a,&b);
		if(a==0 && b==0) break;
		if(a==0) a=1;
		if(b==0) b=1;
		if(a==1 && b==1)
		{
			cout<<t<<". 0:0\n";
			continue;
		}
		set<ll> st;
		for(i=0;i<flag[a];i++)
		{
			st.insert(factor[a][i]);
			//cout<<factor[a][i]<<" ";
		}
		//cout<<endl;
		for(i=0;i<flag[b];i++)
		{
			st.insert(factor[b][i]);
			//cout<<factor[b][i]<<" ";
		}
		//cout<<endl;
		set<ll>::iterator it;
		for(it=st.begin();it!=st.end();it++)
		{
			
			p=*it;
			//cout<<p<<endl;
			aa=a,bb=b;
			p1=0;
			p2=0;
			while(aa%p==0)
			{
				aa/=p;
				p1++;
			}
			
			while(bb%p==0)
			{
				bb/=p;
				p2++;
			}
			ans+=abs(p1-p2);
			//cout<<ans<<endl;
		}
		ll o=st.size();
		printf("%lli. %lli:%lli\n",t,o,ans);
		
	}
}
