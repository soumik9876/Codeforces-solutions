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
#define N 400100
using namespace std;
bool isprime[1000010];
vector<int> prime;
void sieve();
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,one=0,two=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        if(temp==1)
            one++;
        else
            two++;
    }
    sieve();
//    for(ll i=0;i<100;i++)
//        cout<<prime[i]<<" ";
//    cout<<endl;
    ll track=0,sum=0;
    for(ll i=0;i<n;i++)
    {
        if(sum+1==prime[track] && one>0)
        {
            cout<<1<<" ";
            sum++;
            track++;
            one--;
        }
        else if(sum+2==prime[track] && two>0)
        {
            cout<<2<<" ";
            sum+=2;
            two--;
            track++;
        }
        else
        {
            if(two>0)
            {
                cout<<2<<" ";
                sum+=2;
                two--;
            }
            else
            {
                cout<<1<<" ";
                sum++;
                one--;
            }

        }
    }
    cout<<endl;
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
void sieve()
{

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
    prime.push_back(2);
    for(int i=3;i<=N;i+=2)
    {
        if(!isprime[i])
            prime.push_back(i);
    }
}
