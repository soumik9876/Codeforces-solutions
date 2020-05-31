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
bool boys[110],girls[110];
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,m,b,g,temp;
    cin>>n>>m>>b;
    while(b--)
    {
        cin>>temp;
        boys[temp]=true;
    }
    cin>>g;
    while(g--)
    {
        cin>>temp;
        girls[temp]=true;
    }
    ll boy,girl;
    for(ll i=0;i<=(n+m)*n*m;i++)
    {
        boy=i%n,girl=i%m;

        if(boys[boy] || girls[girl])
        {
            boys[boy]=true;
            girls[girl]=true;
        }
        //cout<<"I->"<<i<<" boy"<< boy<<"--"<<boys[boy]<<endl<<"Girl ->"<<girl<<"--"<<girls[girl]<<endl;
    }
    for(ll i=0;i<n;i++)
    {
        //cout<<boys[i]<< " ";
        if(!boys[i])
        {
            cout<<"No\n";
            return 0;
        }
    }
    //cout<<endl;
    for(ll i=0;i<m;i++)
    {
        //cout<<girls[i]<< " ";
        if(!girls[i])
        {
            cout<<"No\n";
            return 0;
        }
    }
    //cout<<endl;
    cout<<"Yes\n";
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

