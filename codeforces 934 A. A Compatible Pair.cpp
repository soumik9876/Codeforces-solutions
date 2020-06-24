#include<bits/stdc++.h>
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
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
    ll n,m,temp;
    cin>>n>>m;
    vll a,b;
    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    for(int i=1;i<=m;i++)
    {
        cin>>temp;
        b.eb(temp);
    }
    vll res;
    for(auto i:a)
    {
        ll mx=-1e18;
        for(auto j:b)
        {
            if(i*j>mx)
                mx=i*j;
        }
        res.eb(mx);
    }
    sort(all(res),greater<ll> ());
    cout<<res[1]<<endl;
    return 0;
}


