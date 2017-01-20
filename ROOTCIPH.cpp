#include <iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		scanf("%lli%lli%lli",&a,&b,&c);
		ll s=a*a;
		s=s-2*b;
		printf("%lli\n",s);
	}
	return 0;
}
