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
#define N                     1000100
using namespace std;
bool isprime[N+100];
void sieve();
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    //ios_base::sync_with_stdio(0);
    ll n,x;
    sieve();
    cin>>n;
    while(n--)
    {
        //cout<<n<<" "<<x<<endl;
        cin>>x;
        //cout<<sqrt(x)<<endl;
        if(sqrt(x)==x/sqrt(x))
        {
            ll num=sqrt(x);
            if((num%2 || num==2) && !isprime[num])
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }

   // show
    return 0;
}
void sieve()
{
    isprime[0]=true;
    isprime[1]=true;
    for(int i=3;i*i<=N;i++)
    {
        if(!isprime[i])
        {
            for(int j=i*i;j<=N;j+=i)
            {
                isprime[j]=true;
            }
        }
    }
//    prime.push_back(2);
//    for(int i=3;i<=1000000;i+=2)
//    {
//        if(!isprime[i])
//            prime.push_back(i);
//    }
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

