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
    ll n,x,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll mx=0,diff=0;
        for(int i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            mx=max(mx,a);
            diff=max(diff,a-b);
        }
        if(diff<=0 && x>mx)
            cout<<-1<<endl;
        else
        {
            ll ans=0;
            if(x<=mx)
                ans=1;
            else
                ans=ceil((double)(x-mx)/diff)+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}


