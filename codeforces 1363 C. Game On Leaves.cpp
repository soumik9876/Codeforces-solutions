
// Problem : C. Game On Leaves
// Contest : Codeforces - Codeforces Round #646 (Div. 2)
// URL : https://codeforces.com/contest/1363/problem/C
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec 

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
bool visited[1010];
int n,x;
int dfs(int node,vector<vi> tree,vi &a)
{
	visited[node]=true;
	int d=0;
	for(auto i:tree[node])
	{
		if(!visited[i])
		{
			d+=dfs(i,tree,a)+1;
			//continue;
		}
		else
			continue;
		if(node==x)
		{
			a.eb(d);
			d=0;
		}
	}
	return d;
	
}
int main()
{
    KAMEHAMEHA
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>x;
		vector<vi>  tree(n+1);
		memset(visited,0,sizeof(visited));
		for(int i=0;i<n-1;i++)
		{
			int u,v;
			cin>>u>>v;
			tree[u].eb(v);
			tree[v].eb(u);
		}
		vi d;
		int total=0;
		dfs(x,tree,d);
		bool check=true;
		for(auto i:d)
		{
			total+=i;
			//cout<<i<<" ";
		}
		total--;
		//cout<<total<<endl;
		if(total%2==0 || tree[x].size()<=1)
			cout<<"Ayush"<<endl;
		else
			cout<<"Ashish"<<endl;
	}
    return 0;
}

