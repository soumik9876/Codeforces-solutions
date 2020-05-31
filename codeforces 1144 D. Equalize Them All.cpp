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
vll a;
ll nums[300000];
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,pos,mx=0;
    cin>>n;
    for(ll i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.pb(temp);
        nums[temp]++;
        if(nums[temp]>mx)
        {
            mx=nums[temp];
            pos=i;
        }
    }
    cout<<n-mx<<endl;
    for(ll i=pos;i>=1;i--)
    {
        if(a[i-1]>a[i])
        {
            a[i-1]=a[i];
            cout<<2<< " "<<i<< " "<< i+1<<endl;
        }
        else if(a[i-1]<a[i])
        {
            a[i-1]=a[i];
            cout<<1<< " "<<i<< " "<<i+1<<endl;
        }
    }
    for(ll i=pos;i<n-1;i++)
    {
        if(a[i+1]>a[i])
        {
            a[i+1]=a[i];
            cout<<2<< " "<<i+2<< " "<< i+1<<endl;
        }
        else if(a[i+1]<a[i])
        {
            a[i+1]=a[i];
            cout<<1<< " "<<i+2<< " "<<i+1<<endl;
        }
    }
    for(ll i=0;i<12;i++)
        cout<<a[i]<< " ";
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

