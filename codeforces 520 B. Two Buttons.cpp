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
int taken[10010];
ll ans(ll n,ll m)
{
    cout<<n<< " "<<m<<endl;
    if(taken[n]!=0)
        return taken[n];
    //taken[n]=true;
    if(n==0)
        return 0;
    if(n==m)
    {
        return 0;
    }
    ll way1=INT_MAX,way2=INT_MAX;
    if(n<m)
        way1=ans(2*n,m)+1;
   // if(n>m/2+(m%2))
    way2=ans(n-1,m)+1;
    cout<<n<< " "<<m<<" "<<way1<< " "<<way2<<endl;
    taken[n]=min(way1,way2);
    return taken[n];
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll n,m;
    cin>>n>>m;
    cout<<ans(n,m)<<endl;
    return 0;
}


