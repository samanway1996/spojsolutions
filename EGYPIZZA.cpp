#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define mod2 10
int pown(ll n,ll m)
    {
    if(m==0) return 1;
    ll temp=pown(n,m/2);
    if(m&1)
        {
        return ((((temp%10)*(temp%10))%10)*(n%10))%10;
    }
    else
        {
        return ((temp%10)*(temp%10))%10;
    }
}
 
int main()
    {
    /*trika is having a party because his team won the african cup so he is inviting his friends to eat some pizza.
 
Unfortunately,Abotrika's friends can't eat an entire pizza but all of them know exactly how much pizza 
they can eat and insist on getting the exact amount of pizza but Abotrika eats one complete pizza 
and all of them wants his amount of pizza in one slice.
 
Their requests break down to three different pizza slices-either one quarter or a half or three quarters of pizza.
write a program that will help Abotrika to find out what is the minimal number of pizzas he has to order so that 
 
everyone gets exact amount of pizza they want.
Input
First line contains an integer N, 0<=N<=10,000 , number of friends.
 
In each of next N lines there is amount of pizza that each of Abotrika's friends wants to eat,that 
 
is the fraction 1/4 , 1/2 or 3/4.
Output
 
In the first and only line you should write the minimal number of pizzas Abotrika has order don't forget to order 
 
one complete pizza for Abotrika*/
    int n,i,res;
    cin>>n;
    int qrtr=0,half=0,three=0,c=0;
    for(i=0;i<n;i++)
        {
        char a[5];
        cin>>a;
        if(a[0]=='3') three++;
        else
            {
            if(a[2]=='2') half++;
            else qrtr++;
        }
    }
    if(half%2==0)
        {
        c+=half/2;
        res=0;
    }
    else
        {
        res=1;
        c+=half/2;
    }
    c+=min(three,qrtr);
    if(qrtr<=three)
        {
        c+=three-qrtr;
        c+=res;
        cout<<(c+1)<<endl;
    }
    else
        {
        qrtr=qrtr-three;
        if(qrtr==1 || qrtr==2)
            {
            c+=1;
            cout<<(c+1)<<endl;
        }
        else
            {
            if(res==0)
                {
                c+=ceil(qrtr/4.0);
                cout<<(c+1)<<endl;
            }
            else
                {
                c+=ceil((qrtr-2)/4.0);
                c++;
                cout<<(c+1)<<endl;
            }
        }
    }
} 
