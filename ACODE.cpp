#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	char s[10000];
	ll l,i,j,k;
	while(1)
	{
		scanf("%s",s);
		if(s[0]=='0') break;
		l=strlen(s);
		ll one[l],two[l],ways[l];
		for(i=0;i<l;i++)
		{
			one[i]=s[i]-'0';
			
		}
		for(i=1;i<l;i++)
		{
			
			two[i]=one[i-1]*10+one[i];
		}
		ways[0]=1;
		if(one[1]!=0) ways[1]=1;
		else ways[1]=0;
		if(two[1]<=26 && two[i]>=10) ways[1]++;
		for(i=2;i<l;i++)
		{
			if(one[i]!=0) ways[i]=ways[i-1];
			else ways[i]=0;
			if(two[i]<=26 && two[i]>=10 ) ways[i]+=ways[i-2];
		}
//		for(i=0;i<l;i++)
//		cout<<ways[i]<<" "<<one[i]<<" "<<two[i]<<endl;
		cout<<ways[l-1]<<endl;
	}
}
