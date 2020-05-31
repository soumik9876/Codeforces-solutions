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
    ll n,k;
    cin>>n>>k;
    vll a,order;
    a.eb(0);
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    for(ll i=1;i<=n;i++)
        a[i]+=a[i-1];
    for(ll i=0,temp;i<k;i++)
    {
        cin>>temp;
        order.eb(temp);
    }
    ll current=0;
    for(int i=0;i<k;i++)
    {
        current+=order[i];
        int low=upper_bound(all(a),current)-a.begin();
        if(low>n)
        {
            cout<<n<<endl;
            current=0;
        }
        else
        {
            cout<<n-low+1<<endl;
        }
    }
    return 0;
}


