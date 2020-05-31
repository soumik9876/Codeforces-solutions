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
  // FAST_IO();
   ll n,total=0;
   vi a,b;
   cin>>n;
   for(int i=0;i<n;i++)
   {
        ll temp;
        cin>>temp;
        a.push_back(temp);
        cin>>temp;
        b.push_back(temp);
   }
   total+=min(a[0],b[0])+1;
   for(int i=1;i<n;i++)
   {
        // ll temp=min(a[i-1],b[i-1]);
        if(a[i]==0 && b[i]==0)
            continue;
        if(a[i-1]>b[i-1])
        {
            if(a[i]<=b[i])
                total+=a[i]-a[i-1]+1;
            else if(a[i]>b[i] && b[i]>=a[i-1])
                total+=b[i]-a[i-1]+1;
        }
        else if(b[i-1]>a[i-1])
        {
            if(b[i]<=a[i])
                total+=b[i]-b[i-1]+1;
            else if(b[i]>a[i] && a[i]>=b[i-1])
                total+=a[i]-b[i-1]+1;

        }
        else
        {
            total+=min(a[i],b[i])-min(a[i-1],b[i-1]);
        }
   }
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