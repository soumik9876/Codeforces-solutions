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
using namespace std;
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ios_base::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,visitcnt=0;
        cin>>n>>m;
        vll graph[n+5];
        bool visited[n+5];
        vll ans;
        map< ll,ll,greater<ll> > degree;
        memset(visited,false,sizeof(visited));
        for(ll i=1;i<=m;i++)
        {
            ll c,d;
            cin>>c>>d;
            graph[c].eb(d);
            graph[d].eb(c);
            degree[c]++;
            degree[d]++;
        }
        vector< pll > vec;

        for(auto i:degree) {
        vec.push_back( mp(i.second,i.first) );
        }
        sort(vec.begin(),vec.end(),greater<pll> ());
        for(auto i:vec)
        {
            //cout<<i.first<<endl;
            if(!visited[i.S])
            {   //cout<<i.S<<endl;
                ll sz=graph[i.S].size();
                visited[i.S]=true;
                visitcnt++;
                ans.eb(i.S);
                for(ll j=0;j<sz;j++)
                {
                    if(!visited[graph[i.S][j]])
                    {
                        visited[graph[i.S][j]]=true;
                        visitcnt++;
                    }
                }
                if(visitcnt==n)
                {
                    break;
                }
            }
        }
        ll s=ans.size();
        cout<<s<<endl;
        for(ll i=0;i<s;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
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

