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
    int n,l,r,mx=0;
    cin>>n;
    vector< pii > a,b;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        a.eb(l,i);
        b.eb(r,i);
    }
    sort(all(a),greater< pii > ());
    sort(all(b));
    if(a[0].S==b[0].S)
        mx=max(0,b[1].F-a[1].F);
    else
    {
        mx=max(mx,b[1].F-a[0].F);
        mx=max(mx,b[0].F-a[1].F);
    }
    cout<<mx<<endl;
    return 0;
}


