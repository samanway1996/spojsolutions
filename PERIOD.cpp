#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

int main()
{
	string s;
	ll tt;
	cin>>tt;
	ll o=1;
	while(tt--)
	{
		ll loveyousruti;
		cin>>loveyousruti;
		cin>>s;
		ll l=s.length();
		ll i,j;
		ll lps[l];
		i=1;
		lps[0]=0;
		j=0;
		while(i<l)
		{
			if(s[i]==s[j])
			{
				j++;
				lps[i]=j;
				i++;
			}
			else
			{
				if(j!=0)
				{
					j=lps[j-1];
				}
				else
				{
					lps[i]=0;
					i++;
				}
			}
		}
		//cout<<lps[l-1]<<endl;
		cout<<"Test case #"<<o<<endl;
		o++;
		for(i=1;i<l;i++)
		{
			if(lps[i]%(i+1-lps[i])==0 && ((i+1)/(i+1-lps[i]))!=1)
			{
				cout<<i+1<<" "<<(i+1)/(i+1-lps[i])<<endl;
			}
		}
		cout<<endl;
	}
}
