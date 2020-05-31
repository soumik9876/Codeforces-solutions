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
map<ll,ll> adb,bda;
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,temp;
    vll a,b;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        a.pb(temp);
    }
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        b.pb(temp);
    }
    ll maxx=0;
    ll equals=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0 && b[i]==0)
        {
            equals++;
            continue;
        }
        if(a[i]==0)
            continue;
        //cout<<a[i]/b[i]<< " "<<b[i]/a[i]<<" " <<maxx<<endl;

        if(b[i]==0)
        {
            adb[0]++;
            if(adb[0]>maxx)
                maxx=adb[0];
            continue;
        }
        if( a[i]%b[i]==0)
        {
            ll ab=a[i]/b[i];
            adb[ab]++;
            if(adb[ab]>maxx)
                maxx=adb[ab];
        }
        else if(b[i]%a[i]==0)
        {
            ll ba=b[i]/a[i];
            bda[ba]++;
            if(bda[ba]>maxx)
                maxx=bda[ba];
        }
    }

    cout<<maxx+equals<<endl;
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

