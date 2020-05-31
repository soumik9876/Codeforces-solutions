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
    ll n,total=0;
    vll a;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        a.pb(temp);
    }
    string s1;
    ll f=n-1,s=0,last=0;
    while(1)
    {
        if((a[f]<last && a[s]<last) || (s>f))
            break;
        if(a[f]>=last && a[s]>=last)
        {
            if(a[f]<a[s])
            {
                last=a[f];
                total++;
                s1+='R';
                f--;
            }
            else
            {
                last=a[s];
                total++;
                s1+='L';
                s++;
            }
        }
        else if(a[f]>last)
        {
            last=a[f];
            total++;
            s1+='R';
            f--;
        }
        else if(a[s]>last)
        {
            last=a[s];
            total++;
            s1+='L';
            s++;
        }
        else
            break;
    }
    cout<<total<<endl<<s1<<endl;
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

