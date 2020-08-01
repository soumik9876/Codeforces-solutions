//Author - Soumik Roy
//Date & Time - July 31, 2020 5:58 PM
//Problem name - C. Uncle Bogdan and Country Happiness
//Problem url - https://codeforces.com/contest/1388/problem/C
//Time limit - 2000 ms
//Memory Limit - 256 MB    

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
vi p,h;

bool check=true;
int dfs(int node,bool visited[],vector< vi > &tree)
{
	visited[node]=true;
	int people=p[node],happy=0;
	for(auto i : tree[node])
	{
		if(visited[i])
			continue;
		people+=dfs(i,visited,tree);
		happy+=h[i];
	}
	if((people-abs(h[node]))%2)
		check=false;
	if(h[node]<happy-p[node] || h[node]>people)
		check=false;
	return people;
}
void solve()
{
	int n,m;
	cin>>n>>m;
	p.resize(n+1),h.resize(n+1);
	vector< vi > tree(n+1);
	for(int i=1;i<=n;i++)
		cin>>p[i];
	for (int i = 1; i <= n; i++)
	{
		cin>>h[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		tree[u].eb(v);
		tree[v].eb(u);
	}
	bool visited[n+10]={};
	check=true;
	dfs(1,visited,tree);
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

