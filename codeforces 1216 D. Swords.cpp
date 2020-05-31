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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll n,mx=0,g=0,y=0;
    vll a;
    cin>>n;
    for(ll i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
        mx=max(mx,temp);
        g=gcd(g,temp);
    }
    if(n==2)
    {
        cout<<1<< " "<<abs(a[0]-a[1])<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        y+=((mx-a[i])/g);
    }
    cout<<y<<" "<<g<<endl;
    return 0;
}

