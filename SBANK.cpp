#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,n;
	scanf("%lli",&t);
	string s1,s2,s3,s4,s5,s6,s;
	while(t--)
	{
		
		scanf("%lli",&n);
		map<string,ll> m;
		while(n--)
		{
			cin>>s1>>s2>>s3>>s4>>s5>>s6;
			s=s1+" "+s2+" "+s3+" "+s4+" "+s5+" "+s6;
			if(m.count(s)==0)
			{
				m.insert(pair<string ,ll> (s,0) );
			}
			else
			{
				m[s]++;
			}
			//cout<<s<<endl;
		}
		map<string,ll> :: iterator p;
		for(p=m.begin();p!=m.end();++p)
		{
			cout<<p->first<<" "<<p->second<<endl;
		}
		cout<<"\n";
	}
}
