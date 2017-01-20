#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
ll prime[32000];
vector<ll> pr;
 
void sieve()
{
	ll i,j;
	for( i=3;i*i<32000;i+=2)
    {
        if(!prime[i])
        {
        	j=3*i;
            while(j<32000)
            {
            	prime[j]=1;
            	j+=2*i;
			}
        }
    }
	pr.pb(2);
	j=1;
	for(i=3;i<32000;i+=2)
	{
		if(prime[i]==0)
		{
			pr.pb(i);
		}
	}
//	cout<<pr.size()<<" ";
//	for(i=0;i<40;i++)
//	{
//		cout<<pr[i]<<endl;
//	}
//	for(int i=3;i<=180;i+=2)
//    {
//        if(!prime[i])
//        {
//            for(int j=i*i;j<=32000;j+=i)
//                prime[j]=1;
//        }
//    }
//    pr[0] = 2;
//    int j=1;
//    for(int i=3;i<=32000;i+=2)
//    {
//        if(!prime[i]){
//            pr[j++]=i;
//        }
//    }
//    // for(int i=0;i<20;i++)
//    // {
//    // 	cout<<prime[i]<<endl;
//    // }
}
 
int main()
{
	sieve();
	ll a,b,n,temp,total=1,res=0;
    scanf("%lli%lli%lli",&a,&b,&n);
    ll count=0,i,j,k;
    for(i=a;i<=b;i++)
    {
        temp=i;
        total=1;
        
        for(j=0;pr[j]*pr[j]<=temp;j++)
        {
            count=0;
            while(temp%pr[j]==0)
            {
                
                temp/=pr[j];
                count++;
            }
            total*=count+1;
        }
        if(temp!=1)
            total*=2;
        if(total==n)
            res++;
    }
    printf("%lli\n",res);
}
