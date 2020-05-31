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
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll temp,n;
    vll a,b;
    cin>>n;
    for(ll i=0 ;i<n;i++)
    {
        cin>>temp;
        a.pb(temp);
    }
    for(ll i=0 ;i<n;i++)
    {
        cin>>temp;
        b.pb(temp);
    }
    sort(a.begin(),a.end(),greater<ll> ());
    sort(b.begin(),b.end(),greater<ll> ());
    ll x=0,y=0,as=0,bs=0;
    while(x<n || y<n)
    {
        //cout<<x<< " "<< a[x]<< " " << y << " "<<b[y] <<  " "<<n<<endl;
        if(y<n && x<n)
        {
            //b.erase(b.begin()+j);
            if(b[y]>a[x])
                y++;
            else
            {
                as+=a[x];
                x++;
            }
        }
        else
        {
            if(x>=n)
                y++;
            else
            {
                as+=a[x];
                x++;
            }
        }
        if(y<n && x<n)
        {
            if(b[y]<a[x])
                x++;
            else
            {
                bs+=b[y];
                y++;
            }
        }
        else
        {
            if(y>=n)
                x++;
            else
            {
                bs+=b[y];
                y++;
            }
        }
    }
    cout<<as-bs<<endl;
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

