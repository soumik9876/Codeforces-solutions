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
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll a,b,c;
    ll week[]={1,2,2,1,3,2,3};
    ll total=0;
    cin>>a>>b>>c;
    if(a>=3 && b>=2 && c>=2)
    {
        total=(min(c/2,min(a/3,b/2)));
        a-=(total*3);
        b-=(total*2);
        c-=(total*2);
    }
    ll mx=0;
    for(ll i=0;i<7;i++)
    {
        ll x=a,y=b,z=c;
        ll cnt=0;
        //cout<<x<< " "<<y<< " "<<z<<endl;
        for(ll j=i;;j++)
        {
            if(j==7)
                j=0;
            if(week[j]==1 )
            {
                if( y==0)
                    break;
                y--;
                cnt++;
            }
            else if(week[j]==2)
            {
                if(x==0)
                    break;
                x--;
                cnt++;
            }
            else if(week[j]==3)
            {
                if(z==0)
                    break;
                z--;
                cnt++;
            }

        }
        //cout<<cnt<<endl;
        if(cnt>mx)
            mx=cnt;
    }
    //cout<<total<<endl;
    total=(total*7)+mx;
    cout<<total<<endl;
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

