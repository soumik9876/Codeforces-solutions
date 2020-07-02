#include<bits/stdc++.h>
//#define time clock_t tStart = clock();
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
bool jobs[100050];
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll n,k,done=0;
    cin>>n>>k;
    vi lazy(n+50),people;
    vector < pii > time;
    for(ll i=1;i<=n;i++)
    {
        ll temp;
        cin>>temp;
        lazy[temp]++;
        people.eb(temp);
        if(!jobs[temp])
        {
            done++;
            jobs[temp]=true;
        }
    }
    int left=k-done;
    for(ll i=1,temp;i<=n;i++)
    {
        cin>>temp;
        time.eb(temp,i);
    }
    ll total=0;
    sort(all(time));
    for(ll i=0;i<n;i++)
    {
        if(left==0)
            break;
        if(lazy[people[time[i].S-1]]>1)
        {
            //cout<<time[i].F<< " "<<time[i].S<<endl;
            lazy[people[time[i].S-1]]--;
            total+=time[i].F;
            left--;
        }

    }
    cout<<total<<endl;
    return 0;
}

