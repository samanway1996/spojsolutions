#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
	// your code goes here
	ll t,n,k,m,p;
	scanf("%lli",&t);
	while(t--)
	{
		scanf("%lli%lli%lli",&n,&k,&m);
		if(n>=m) 
		{
			cout<<"0\n";
			continue;
		}
		
		float r=((m*1.0)/n),c;
		//printf("%lf %lf %lf ",r,log(r),log(k));
		c=log10(r)/log10(k);
		//cout<<"p";
		k=c;
		printf("%lli\n",k);
	}
	return 0;
}
