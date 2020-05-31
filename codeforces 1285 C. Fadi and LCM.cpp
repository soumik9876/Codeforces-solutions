#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll x,num,a,b;
    cin>>x;
    //num=x;
    //vll facts;
    //ll p=1;
//    while(num%2==0)
//    {
//        p*=2;
//        num/=2;
//    }
//    if(p>1) facts.eb(p);
//    for(int i=3;i*i<=num;i+=2)
//    {
//        ll product=1;
//        while(num%i==0)
//        {
//            product*=i;
//            num/=i;
//
//        }
//        facts.eb(product);
//    }
//    if(num>1)
//        facts.eb(num);
//    ll mn=1e13;
//    facts.eb(1);
//    sort(all(facts));
//    p=1;
//    for(auto i: facts)
//    {
//        //cout<<i<<endl;
//        p*=i;
//        ll mx=0;
//        mx=max({p,p/i,mx});
//        if(mx<mn)
//        {
//            a=i,b=x/i;
//        }
//    }
    ll mn=1e13;
    for(ll i=1;i*i<=x;i++)
    {
        //cout<<x<< " "<<i<< " "<<x/i<<endl;
        if(x%i==0 && __gcd(i,x/i)==1)
        {
            ll mx=max(i,x/i);
            mn=min(mn,mx);
        }
        a=mn,b=x/mn;
    }
    cout<<a<< " "<<b<<endl;
    return 0;
}

