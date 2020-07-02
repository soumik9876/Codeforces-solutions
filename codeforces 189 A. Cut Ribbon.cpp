#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)           for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
using namespace std;
vll a;
ll n,temp;
int memo[13000][4010];
ll ribbons(ll cost,ll num);
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();

    cin>>n;
    for(ll i=0;i<3;i++)
    {
        cin>>temp;
        a.pb(temp);
    }
    sort(a.begin(),a.end());
    cout<<ribbons(0,0);
   // show
    return 0;
}
ll ribbons(ll cost,ll num)
{
    if(memo[cost][num]!=0)
        return memo[cost][num];
    if(cost==n)
        return num;
    if(cost>n)
        return -1;
    ll ans=0;
    for(ll i=0;i<3;i++)
    {
        memo[cost][num]=ribbons(cost+a[i],num+1);
        if(memo[cost][num]>ans)
            ans=memo[cost][num];
    }
    return ans;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}
