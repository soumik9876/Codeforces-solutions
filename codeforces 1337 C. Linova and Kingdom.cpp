// Problem : C. Linova and Kingdom
// Contest : Codeforces - Codeforces Round #635 (Div. 2)
// URL : https://codeforces.com/contest/1337/problem/C
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define eb                    emplace_back
#define ull                   unsigned long long
#define bug(x)				  cout<<"  [ "#x<<" = "<<x<<" ]"<<endl;
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define num 200000+100
vi tree[num];
bool visited[num];
int dfs(int node,int prev,vi &dist)
{
	visited[node]=true;
	int next=0;
	for(auto i: tree[node])
	{
		if(!visited[i])
			next+=dfs(i,prev+1,dist);
	}
	dist.eb(prev-next);
	return next+1;
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	int n,k;
	ll total=0;
	cin>>n>>k;
	
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		tree[u].eb(v);
		tree[v].eb(u);
	}
	vi dist;
	dfs(1,0,dist);
	sort(all(dist),greater<int> ());
	for(int i=0;i<k;i++)
	{
		total+=dist[i];
	}
	cout<<total<<endl;
    return 0;
}

