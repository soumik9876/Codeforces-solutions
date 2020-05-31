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
#define eb                    emplace_back
using namespace std;
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,m,ta,tb,k;
    cin>>n>>m>>ta>>tb>>k;
    vll a,b;
    bool check=true;
    ll x,y;
    for(ll i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.pb(temp+ta);
    }
    //cout<<a[k]<<endl;
    bool f=false;
    for(ll i=0,temp;i<m;i++)
    {
        cin>>temp;
        b.pb(temp);
        //cout<<temp<< " "<<a[k]<<endl;

//        if(temp>=a[k] && !f)
//        {
//            f=true;
//            y=i;
//        }
    }
    if(k>=n || k>=m )
    {
        cout<<-1<<endl;
        return 0;
    }
    x=k;
//    y=lower_bound(b.begin(),b.end(),a[x]);
    ll mx=0;
    //cout<<x<< " "<<y<< " "<<mx<<endl;
    while(x>=0 )
    {

//        while(1)
//        {
//            if(b[y-1]<a[x] || y==0)
//                break;
//            y--;
//        }
        //cout<<x<< " "<<mx<<endl;

        y=lower_bound(b.begin(),b.end(),a[x])-b.begin();
        y+=(k-x);
        if(a[x]>b[m-1] || y>m-1)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(b[y]+tb>mx)
            mx=b[y]+tb;
        //y++;
        x--;
//        if(y>=m)
//        {
//            check=false;
//            break;
//        }
        //cout<<x<< " "<<y<<" " <<mx<<endl;
        //cout<<b[y]<<endl;
//        if(b[y]+tb>mx)
//            mx=b[y]+tb;
    }
//    if(check)
    cout<<mx<<endl;
//    else
//        cout<<-1<<endl;
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
/*
4 6 1 1 2
1 3 5 7
2 4 6 8 9 10
*/
