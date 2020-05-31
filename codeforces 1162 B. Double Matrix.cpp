#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
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

using namespace std;
ll n,m;
bool check(vll a[])
{
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m-1;j++)
        {
            if(a[i][j]>=a[i][j+1])
                return false;
        }
    }
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(a[i][j]>=a[i+1][j])
                return false;
        }
    }
    return true;
}
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll temp;
    vll a[55],b[55];
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>temp;
            a[i].pb(temp);
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>temp;
            b[i].pb(temp);
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(a[i][j]<b[i][j])
                swap(a[i][j],b[i][j]);
        }
    }
    if(check(a) && check(b))
        cout<<"Possible\n";
    else
        cout<<"Impossible\n";
   // show
    return 0;
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

