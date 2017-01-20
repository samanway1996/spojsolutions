#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll n1,n2;
	while(1)
	{
		
		scanf("%lli",&n1);
		if(n1==0) break;
		
		ll a[n1],i,j,k,s,w1,w2;
		for(i=0;i<n1;i++)
		scanf("%lli",&a[i]);
		
		scanf("%lli",&n2);
		ll b[n2];
		for(i=0;i<n2;i++)
		scanf("%lli",&b[i]);
		
		i=j=0;
		vector<ll> v1,v2;
		while(i<n1 && j<n2)
		{
			if(a[i]<b[j]) 
			{
				i++;
			}
			else if(a[i]>b[j])
			{
				j++;
			}
			else
			{
				v1.pb(i);
				v2.pb(j);
				i++;
				j++;
			}
		}
		
		if(v1.size()==0)
		{
			w1=0;
			for(i=0;i<n1;i++)
			w1+=a[i];
			w2=0;
			for(i=0;i<n2;i++)
			{
				w2+=b[i];
			}
			printf("%lli\n",max(w1,w2));
			continue;
		}
		 s=0;
		for(i=0;i<v1.size();i++)
		{
			s+=a[v1[i]];
		}
		ll s1[v1.size()+1],s2[v2.size()+1],d;
		
		for(i=0;i<=v1.size();i++)
		{
			if(i==0)
			{
				d=0;
				for(j=0;j<v1[i];j++)
				{
					d+=a[j];
				}
				s1[i]=d;
			}
			else if(i==v1.size())
			{
				d=0;
				for(j=v1[i-1]+1;j<n1;j++)
				{
					d+=a[j];
				}
				s1[i]=d;
			}
			else
			{
				d=0;
				for(j=v1[i-1]+1;j<=v1[i]-1;j++)
				{
					d+=a[j];
				}
				s1[i]=d;
			}
			
			
		}
		
		for(i=0;i<=v2.size();i++)
		{
			if(i==0)
			{
				d=0;
				for(j=0;j<v2[i];j++)
				{
					d+=b[j];
				}
				s2[i]=d;
			}
			else if(i==v2.size())
			{
				d=0;
				for(j=v2[i-1]+1;j<n2;j++)
				{
					d+=b[j];
				}
				s2[i]=d;
			}
			else
			{
				d=0;
				for(j=v2[i-1]+1;j<=v2[i]-1;j++)
				{
					d+=b[j];
				}
				s2[i]=d;
			}
			
			
		}
//		for(i=0;i<v1.size();i++)
//		{
//			cout<<v1[i]<<" ";
//		}
//		cout<<"\n\n";
//		for(i=0;i<v2.size();i++)
//		{
//			cout<<v2[i]<<" ";
//		}
//		cout<<"\n\n";
//		for(i=0;i<=v1.size();i++)
//		{
//			cout<<s1[i]<<" ";
//		}
//		cout<<endl;
//		for(i=0;i<=v1.size();i++)
//		{
//			cout<<s2[i]<<" ";
//		}
//		cout<<endl;
	
		for(i=0;i<=v1.size();i++)
		{
			s+=max(s1[i],s2[i]);
		}
		printf("%lli\n",s);
		
	}
}
