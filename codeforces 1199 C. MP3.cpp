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
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
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
    ll n,k;
    cin>>n>>k;
    k*=8;
    vll a;
    vector< pll > cnts;
    for(ll i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    if(k/n>32)
    {
        cout<<0<<endl;
        return 0;
    }
    ll req=pow(2,k/n);
    sort(all(a));
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cnt++;
            continue;
        }
        if(a[i]!=a[i-1])
        {
            cnts.eb(a[i-1],cnt);
            cnt=1;
        }
        else
            cnt++;
        if(i==n-1)
            cnts.eb(a[i],cnt);
    }
    ll total=0,sz=cnts.size();
    if(sz<=req)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<req;i++)
    {
        total+=cnts[i].S;
    }
    ll mx=total,x=1,y=req;
    while(y<sz)
    {
        //cout<<total<< " "<<mx<<" "<<cnts[y-1].F<<endl;
        total=total-cnts[x-1].S+cnts[y].S;
        mx=max(mx,total);
        y++,x++;
    }
    cout<<n-mx<<endl;
//    for(auto i:cnts)
//        cout<<i.F<< " "<<i.S<<endl;
//    cout<<req<<endl;
    return 0;
}


