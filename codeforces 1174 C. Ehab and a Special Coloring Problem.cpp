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
#define N                     100100
using namespace std;
bool isprime[N+100];
ll nums[N+100];
void FAST_IO();
void sieve(ll n)
{
    ll cnt=1;
    for(ll i=2;i<=n;i+=2)
    {
        isprime[i]=true;
        nums[i]=cnt;
    }
    cnt++;
    for(int i=3;i<=n;i+=2)
    {

        if(!isprime[i])
        {
            //nums[i]=cnt;
            for(int j=i;j<=n;j+=i)
            {
                isprime[j]=true;
                nums[j]=cnt;
            }
            cnt++;
        }

    }
}
int main()
{
    //_time_
   //FAST_IO();
    ll n,cnt=1;
    cin>>n;
    sieve(n+5);
    bool one=true,two=false;
    for(ll i=2;i<=n;i++)
    {
        //cout<<i<<"->";
//        if(!isprime[i])
//        {
//            cout<<cnt++<< endl;
//            //one=true;
//        }
//        else
//        {
//            if(i%2)
//            {
//                cout<<2<<endl;
//                //one=false;
//            }
//            else
//            {
//                cout<<1<<endl;
//                //one=true;
//            }
//        }
        cout<<nums[i]<<" ";
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

