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
ll gcd(ll a,ll b);
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll temp,n,m,s;
    vll interval,snooze;
    cin>>n>>m;
    cin>>temp;
    s=temp;
    for(ll i=1;i<n;i++)
    {
        ll x;
        cin>>x;
        interval.pb(x-temp);
        temp=x;
    }
    ll g=interval[0];
    for(ll i=1;i<n-1;i++)
        g=gcd(g,interval[i]);
    //cout<<g<<endl;
    bool check=false;
    for(ll i=1;i<=m;i++)
    {
        cin>>temp;
        if(g%temp==0)
        {
            check=true;
            g=i;
            break;
        }
    }
    if(check)
    {
        cout<<"YES\n";
        cout<<s<< " "<<g<<endl;
    }
    else
        cout<<"NO\n";
   // show
    return 0;
}
ll gcd(ll a,ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
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

