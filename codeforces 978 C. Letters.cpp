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
    ll n,m,temp;
    vll a;
    cin>>n>>m;
    a.eb(0);
    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        a.eb(temp+a[i-1]);
    }
    while(m--)
    {
        cin>>temp;
        int low=lower_bound(all(a),temp)-a.begin();
        cout<<low<< " "<<temp-a[low-1]<<endl;
    }
    return 0;
}


