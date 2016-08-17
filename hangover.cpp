#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define d double
#define mod 1000000007
int main()
{
	ll i;
	d arr[280];
	arr[0]=0;
	for(i=1;i<280;i++)
	{
		arr[i]=arr[i-1]+1.0/(i+1);
		//printf("%lf\n",arr[i]);
		
	}
	map<d,ll> m;
	map<d,ll> :: iterator p;
	for(i=1;i<280;i++)
	{
		//arr[i]=arr[i-1]+1.0/(i+1);
		//printf("%lf\n",arr[i]);
		m[arr[i]]=i;
	}
	while(1)
	{
	d r;
	scanf("%lf",&r);
	if(r==0) break;
	for(p=m.begin();p!=m.end();++p)
	{
		if(p->first>r)
		{
			cout<<p->second<<" card(s)"<<endl;
			break;
		}
	}
	}
	
}
