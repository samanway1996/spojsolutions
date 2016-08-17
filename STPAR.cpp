#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	while(1)
	{
		ll n;
		scanf("%lli",&n);
		if(n==0) return 0;
		ll a[n],i,j,k;
		for(i=0;i<n;i++)
		scanf("%lli",&a[i]);
		j=1;
		vector<ll> v;
		v.clear();
		i=0;
		ll c=0;
		while(i<n)
		{
			if(a[i]==j)
			{
				j++;
				i++;
			}
			else
			{
				//cout<<"ok"<<endl;
				if(v.size()>0 && v[v.size()-1]==j)
				{
					
						v.pop_back();
						j++;
					
					
				}
				else
					{
						v.pb(a[i]);
						i++;
						//cout<<"ok"<<endl;
					}
			}
//			cout<<i<<" "<<j<<endl;
//			c++;
//			if(c==10) break;
		}
		while(1)
		{
		
		if(v.size()>0 && v[v.size()-1]==j)
		{
			v.pop_back();
			j++;
		}
		else break;
		}
		if(j==n+1)
		cout<<"yes\n";
		else cout<<"no\n";
	}
}
