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
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll n,cnt=0;
    vll digits;

    cin>>n;
    ll temp=n;
    while(temp!=0)
    {
        digits.eb(temp%10);
        temp/=10;
    }
    for(ll i=1;i*i<=n;i++)
    {
        vll d,d1;
        if(n%i==0)
        {
            ll t=i;
            while(t!=0)
            {
                d.eb(t%10);
                t/=10;
            }
            //cout<<d.size()<<" "<<digits.size()<<endl;
            for(ll j=0;j<d.size();j++)
            {
                bool found=false;
                for(ll k=0;k<digits.size();k++)
                {
                    if(digits[k]==d[j])
                    {
                        cnt++;
                        found=true;
                        break;
                    }
                }
                if(found)
                    break;
            }
            if(i*i==n)
                continue;
            t=n/i;
            while(t!=0)
            {
                d1.eb(t%10);
                t/=10;
            }
            for(ll j=0;j<d1.size();j++)
            {
                bool found=false;
                for(ll k=0;k<digits.size();k++)
                {
                    if(digits[k]==d1[j])
                    {
                        cnt++;
                        found=true;
                        break;
                    }
                }
                if(found)
                    break;
            }
        }
        //cout<<i<< " "<<cnt<<endl;
    }
    cout<<cnt<<endl;
    return 0;
}


