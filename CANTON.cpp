#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
    {
    int t;
    cin>>t;
    while(t--)
        {
    
        ll n,i,s=0,sum=0,a,b;
        scanf("%lli",&n);
        //if(n==-1) break;
        s=(sqrt(1+8*n)-1)/2;
        sum=(s*(s+1))/2;
        if(s%2==0)
            {
            if(n==sum) 
                {
                a=s;b=1;
            }
            else
                {
            a=s+1;b=1;
            a=a-(n-sum-1);
                b+=(n-sum-1);}
        }
        else
            {
            if(n==sum) 
                {
                a=1;b=s;
            }
            else
                {
            a=1;b=s+1;
            a=a+(n-sum-1);
                b-=(n-sum-1);}
        }
        cout<<"TERM "<<n<<" IS "<<a<<"/"<<b<<endl;
    }
    
}
