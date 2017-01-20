#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
    {
    
    ll c;
    cin>>c;
    ll arr[100000],i,j;
    arr[0]=0;
    for(i=1;i<=c;i++)
    {
        arr[i]=arr[i-1];
        for(j=1;j*j<=i;j++)
            {
            if(i%j==0) arr[i]++;
        }
        //cout<<arr[i]<<" ";
    }
    cout<<arr[c];
    
} 
