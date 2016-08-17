#include"bits/stdc++.h"
using namespace std;
#define mod 1000000007
#define pb push_back
#define ll unsigned long long int
ll gcd(ll u,ll v)
{
	if(u==1 || v==1) return 1;
	else if(u==0) return v;
	else if(v==0) return u;
	else if(u>v) return gcd(u%v,v); else return gcd(v%u,u);
	
}
int main()
{
    char s[500];
    while(1)
    {
//    	for(ll u=0;u<10;u++)
//    	{
//    		ll i,j;
//    		cin>>i>>j;
//    		cout<<__gcd(i,j)<<" "<<gcd(i,j)<<"\n";
//		}
        scanf("%s",s);
        if(s[0]=='*') break;
        vector<ll> v1,v2;
        ll l=strlen(s),i;
        for(i=0;i<l;i++)
        {
            if(s[i]=='Y')
            {
                v1.pb(i+1);
            }
            else
            {
                v2.pb(i+1);
            }
        }
        ll s1=v1.size(),s2=v2.size(),g,K;
        if(s1==0)
        {
            cout<<"1\n";
            continue;
        }
        ll lcm=v1[0];
        for(i=1;i<s1;i++)
        {
            g=gcd(lcm,v1[i]);
            K=(v1[i]*lcm);
            lcm=K/g;
            //cout<<lcm<<endl;
        }
        ll mode=0;
        cout<<lcm<<endl;
        for(i=0;i<s2;i++)
        {
            if(lcm%v2[i]==0)
            {
                mode=1;
                break;
            }
        }
        if(mode==1)
        cout<<"-1\n";
        else 
        cout<<lcm<<endl;
        v1.clear();
        v2.clear();
        
    }
} 
