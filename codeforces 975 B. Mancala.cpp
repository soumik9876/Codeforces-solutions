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
    ll i,temp;
    vll a;
    for(i=0;i<14;i++)
    {
        cin>>temp;
        a.pb(temp);
    }
    ll total=0,maxx=0;
    for(i=0;i<14;i++)
    {
        ll j=i+1,cnt=0;
        total=0;
        while(cnt<(a[i]%14))
        {
            if(j>=14)
                j=0;
            ll b=(a[j]+(a[i]/14)+1);
            if(j==i)
                b=(a[i]/14)+1;
            //cout<<j<< " "<<b<<endl;
            if(b%2==0)
                total+=b;
            cnt++,j++;
        }
        while(cnt<14)
        {
            if(j>=14)
                j=0;
            ll b=(a[j]+(a[i]/14));
            if(j==i)
                b=(a[i]/14);
                //cout<<j<<  " "<<b<<endl;
            if(b%2==0)
                total+=b;
            cnt++,j++;
        }
        if(total>maxx)
            maxx=total;
        //cout<<total<<endl;
    }
    cout<<maxx<<endl;
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

