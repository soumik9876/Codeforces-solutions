#include<bits/stdc++.h>
#define nl '\n'
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

using namespace std;
bool isprime[150];
vector<ll> prime;
void FAST_IO();
void sieve();
int main()
{
    //_time_
   //FAST_IO();
    sieve();
//    for(int i=0;i<15;i++)
//        cout<<isprime[i]<<endl;
    int n;
    vll a;
    int total=0,tchange=0,mchange=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.pb(temp);
        total+=temp;
    }
    sort(a.begin(),a.end(),greater<ll>());
    for(int i=0;i<n;i++)
    {
        if(isprime[a[i]]==false)
            continue;
        else
        {
            //cout<<i<<endl;
            for(int j=2;j<=a[i]/2;j++)
            {
                if(a[i]%j==0)
                {
                    tchange=a[i]-(a[i]/j)-((a[n-1]*j)-a[n-1]);
                    if(tchange>mchange)
                        mchange=tchange;
                }

            }
        }
    }
    if(mchange)
        cout<<total-mchange<<endl;
    else
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void sieve()
{
    isprime[0]=true;
    isprime[1]=true;
    for(int i=4;i<=110;i+=2)
        isprime[i]=true;
    for(int i=3;i*i<=110;i++)
    {
        if(!isprime[i])
        {
            for(int j=i*i;j<=110;j+=i)
            {
                isprime[j]=true;
            }
        }
    }
    prime.push_back(2);
//    for(int i=3;i<=110;i+=2)
//    {
//        if(!isprime[i])
//            prime.push_back(i);
//    }
}

