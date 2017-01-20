#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ll n,i,j;
    cin>>n;
    string s;
    cin>>s;
    char q[1000009];
    vector<char> v;
    ll l=s.length();
    ll arr[4];
    for(i=0;i<l;i+=2)
    {
        v.clear();
        for(j=0;j<4;j++)
        arr[j]=0;
        arr[s[i]-'A']=1;
        arr[s[i+1]-'A']=1;
        for(j=0;j<4;j++)
        {
            if(arr[j]==0)
            {
                v.pb('A'+j);
            }
        }
        if(i==0)
        {
            q[i]=v[0];
            q[i+1]=v[1];
        }
        else
        {
            if(q[i-1]==v[0])
            {
                q[i+1]=v[0];
                q[i]=v[1];
            }
            else
            {
                q[i]=v[0];
                q[i+1]=v[1];
            }
        }
    }
    q[i]='\0';
    //cout<<s<<endl;
    cout<<q<<endl;
} 


