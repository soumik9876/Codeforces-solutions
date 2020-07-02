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
    ll n;
    vll a;
    deque<ll> dq1,dq2;
    cin>>n;
    for(ll i=0,temp;i<n/2;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    ll r=(n/2)-1;
    dq1.pb(0),dq2.pb(a[0]);
    for(ll i=1;i<=r;i++)
    {
        dq2.push_front(min(a[i]-dq1.back(),dq2.front()));
        dq1.push_back(max(dq1.back(),a[i]-dq2.front()));
    }
    for(auto i:dq1)
        cout<<i<< " ";
    for(auto i:dq2)
        cout<<i<< " ";
    cout<<endl;
    return 0;
}

