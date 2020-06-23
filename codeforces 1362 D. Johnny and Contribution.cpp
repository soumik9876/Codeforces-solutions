// Problem : D. Johnny and Contribution
// Contest : Codeforces - Codeforces Round #647 (Div. 2) - Thanks, Algo Muse!
// URL : https://codeforces.com/contest/1362/problem/D
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
int n,m;
vector< vi > graph;
vi topics;
 
int main()
{
    KAMEHAMEHA
	cin>>n>>m;
	graph.resize(n+1);
	topics.resize(n+1);
	vi given(n+1);
	vi tlist[n+1];
	
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].eb(v);
		graph[v].eb(u);
	}
	for(int i=1;i<=n;i++)
	{
		cin>>topics[i];
		tlist[topics[i]].eb(i);
		given[i]=1;
	}
	vi p;
	bool check=true;
	for(int i=1;i<=n;i++)
	{
		for(auto x: tlist[i])
		{
			unordered_set<int> s;
		
			for(auto j: graph[x])
			{
				if(topics[j]==i)
				{
					check=false;
					break;
				}
				else if(topics[j]<i)
					s.insert(topics[j]);
				//if(given[j]==i)
					//given[j]++;
			}
			//cout<<x<<" "<<mn<<endl;
			if(s.size()<i-1)
			{
				check=false;
				break;
			}
			p.eb(x);
		}
		if(!check)
			break;
	}
	if(!check)
		cout<<-1<<endl;
	else
	{
		for(auto i: p)
			cout<<i<<" ";
		cout<<endl;
	}
    return 0;
}