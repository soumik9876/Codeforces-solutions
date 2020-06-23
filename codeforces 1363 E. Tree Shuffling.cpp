
// Problem : E. Tree Shuffling
// Contest : Codeforces - Codeforces Round #646 (Div. 2)
// URL : https://codeforces.com/contest/1363/problem/E
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
vector< vi > tree;
vector< pll > p;
vector< pll > diff;
bool visited[200100];
vll cost;
int n;
void dfs(int nd)
{
	visited[nd]=true;
	for(auto i: tree[nd])
	{
		//cout<<nd<<" "<<i<<endl;
		if(!visited[i])
		{
			cost[i]=min(cost[i],cost[nd]);
			dfs(i);
			
		}
		else
			continue;
		if(1)
		{
		if(cost[nd]<=cost[i])
		{
			diff[nd].F+=diff[i].F;
			diff[nd].S+=diff[i].S;
			diff[i].F=diff[i].S=0;
		}
		else
		{
			if(diff[i].F>diff[i].S)
			{
				diff[nd].F+=(diff[i].F-diff[i].S);
				diff[i].F=diff[i].S;
			}
			else if(diff[i].S>diff[i].F)
			{
				diff[nd].S+=(diff[i].S-diff[i].F);
				diff[i].S=diff[i].F;
			}
		}
		}
	}
	
}
int main()
{
    KAMEHAMEHA
	
	cin>>n;
	tree.resize(n+1);
	diff.resize(n+1);
	cost.resize(n+1);
	int zo=0,oz=0;
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		p.eb(a,i+1);
		cost[i+1]=a;
		if(b==1 && c==1)
			b=0,c=0;
		diff[i+1]=mp(b,c);
		if(b==0 && c==1)
			zo++;
		else if(b==1 && c==0)
			oz++;
	}
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		tree[u].eb(v);
		tree[v].eb(u);
	}
	if(zo!=oz)
		cout<<-1<<endl;
	else
	{
		//sort(all(p));
		ll ans=0;
		dfs(1);
		for(int i=1;i<=n;i++)
		{
			//cout<<cost[i]<<" "<<diff[i].F<<" "<<diff[i].S<<endl;	
			ans+=(2*max(diff[i].F,diff[i].S)*cost[i]);
		}
		cout<<ans<<endl;
	}
	
	
    return 0;
}

