#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                  long long int
#define ull                 unsigned long long
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

using namespace std;
void FAST_IO();
bool checks[500000];
int main()
{
    //_time_
   //FAST_IO();
    ll n,cumsum=0,maxx=-INT_MAX;
    vll a,p;
    cin>>n;
    for(ll i=0;i<n-1;i++)
    {
        ll temp;
        cin>>temp;
        a.pb(temp);
        cumsum+=temp;
        if(maxx<cumsum)
            maxx=cumsum;
    }
    bool check=true;
    //cout<<maxx<<endl;
    if(maxx<=0)
    {
        checks[n]=true;
        p.pb(n);
    }
    else
    {
        if(n-maxx<1 || n-maxx>n)
            check=false;
        checks[n-maxx]=true;
        p.pb(n-maxx);
    }

    if(check)
    for(ll i=1;i<n;i++)
    {
        ll s=p[i-1]+a[i-1];
        if(s>n || s<1 || checks[s]==true)
            {
                check=false;
                break;
            }

        p.pb(s);
        checks[s]=true;
    }
    if(!check)
        cout<<-1<<endl;
    else
    {
        for(ll i=0;i<n;i++)
        cout<<p[i]<< " ";
    cout<<endl;
    }
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

