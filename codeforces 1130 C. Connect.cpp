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
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
ll n,r1,c1,r2,c2;
string grid[60];
vector<pll> sauce,destination;
bool visited[60][60];
bool found,ppair,second;
void FAST_IO();
void dfs(ll x,ll y);
int main()
{
    //_time_
    //FAST_IO();

    cin>>n>>r1>>c1>>r2>>c2;
    for(int i=0;i<n;i++)
    {
            cin>>grid[i];
    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//            cout<<grid[i][j]<<" ";
//        cout<<endl;
//    }
    //cout<<sauce.size()<<endl;
    dfs(r1-1,c1-1);
    second=true;
    ppair=true;
    if(!found)
        dfs(r2-1,c2-1);
    //cout<<sizeof(sauce);
    //cout<<sauce.size()<<endl;
//    for(int i=0;i<sauce.size();i++)
//        cout<<sauce[i].first<< " "<<sauce[i].second<<endl;
//    //cout<<destination.size()<<endl;
//    for(int i=0;i<destination.size();i++)
//        cout<<destination[i].first<< " "<<destination[i].second<<endl;
    int minn=INT_MAX;

    for(int i=0;i<sauce.size();i++)
    {
        for(int j=0;j<destination.size();j++)
        {
            ll dis=((sauce[i].first-destination[j].first)*(sauce[i].first-destination[j].first))
                +((sauce[i].second-destination[j].second)*(sauce[i].second-destination[j].second));
            if(dis<minn)
                minn=dis;
        }
    }
    if(found)
        minn=0;
    cout<<minn<<endl;
   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void dfs(ll x,ll y)
{
    if(x==r2-1 && y==c2-1 && !second)
    {
        found=true;
        return ;
    }
    if(found)
        return;
    visited[x][y]=true;
    pll p;
    bool t=1;
    //cout<<" -> "<<x<< " "<<y<<endl;
    if(x<n-1)
    if(grid[x+1][y]=='1')
    {
         //cout<<" = "<<x<< " "<<y<<endl;
         t=0;
        p=mp(x+1,y+1);
        if(!ppair)
            sauce.push_back(p);
        else
            destination.pb(p);

    }
    if(y<n-1 && t)
    if(grid[x][y+1]=='1')
    {
        t=0;
        //cout<<" = "<<x<< " "<<y<<endl;
        p=mp(x+1,y+1);
        if(!ppair)
            sauce.push_back(p);
        else
            destination.pb(p);
    }
    if(y>0 && t)
    if(grid[x][y-1]=='1')
    {
        //cout<<" = "<<x<< " "<<y<<endl;
        t=0;
        p=mp(x+1,y+1);
        if(!ppair)
            sauce.push_back(p);
        else
            destination.pb(p);
    }
    if(x>0 && t)
    if(grid[x-1][y]=='1')
    {
        //cout<<" = "<<x<< " "<<y<<endl;
        t=0;
        p=mp(x+1,y+1);
        if(!ppair)
            sauce.push_back(p);
        else
            destination.pb(p);
    }
    //cout<<p.first<< " "<<p.second<<endl;
    if(y<n-1)
    if(grid[x][y+1]=='0' && !visited[x][y+1])
        dfs(x,y+1);
        //cout<<"hello "<<x<<" "<<y<< " "<<grid[x][y-1]<< " "<<visited[x][y-1]<<endl;
    if(y>0)
    if(grid[x][y-1]=='0' && !visited[x][y-1])
        dfs(x,y-1);
    if(x<n-1)
    if(grid[x+1][y]=='0' && !visited[x+1][y])
        dfs(x+1,y);
    if(x>0)
    if(grid[x-1][y]=='0' && !visited[x-1][y])
        dfs(x-1,y);
    return ;


}
