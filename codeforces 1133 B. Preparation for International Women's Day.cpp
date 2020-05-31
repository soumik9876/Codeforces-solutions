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

using namespace std;
bool taken[300000];
ll modulecnt[110];
void FAST_IO();
int main()
{
    //_time_
    FAST_IO();
    ll n,k,temp;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        modulecnt[temp%k]++;
    }
//    for(ll i=0;i<k;i++)
//        cout<<modulecnt[i]<< " ";
//    cout<<endl;
    ll total=modulecnt[0]-(modulecnt[0]%2);
    for(ll i=1;i<k;i++)
    {
        if(taken[i])
            continue;
        if(i==k-i)
            total+=modulecnt[i]-(modulecnt[i]%2);
        else
            total+=2*(min(modulecnt[i],modulecnt[k-i]));
        taken[k-i]=true;
    }
//    for(ll i=0;i<n-1;i++)
//    {
//        if(!taken[i])
//        for(ll j=i+1;j<n;j++)
//        {
//            if(!taken[j])
//            {
//                if((d[i]+d[j])%k==0)
//                {
//                    total+=2;
//                    taken[i]=true;
//                    taken[j]=true;
//                    break;
//                }
//            }
//        }
    //}
    cout<<total<<endl;
   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    //cout.setf(ios::fixed);
//    //cout.precision(20);
//#ifndef _offline
//    //freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
//#endif
}

