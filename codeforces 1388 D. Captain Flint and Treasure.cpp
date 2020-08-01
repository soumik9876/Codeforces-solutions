//Author - Soumik Roy
//Date & Time - August 01, 2020 4:20 PM
//Problem name - D. Captain Flint and Treasure
//Problem url - https://codeforces.com/contest/1388/problem/D
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
const int sz=2e5+100;
vector<vi> tree(sz);
vi a(sz),b(sz);
bool hasParent[sz];
vi pos,neg,all;
ll ans=0;
ll dfs(int node)
{
	ll val=a[node];
	for(auto x: tree[node])
	{
		ll d=dfs(x);
		val+=d;
	}
	ans+=val;
	if(val<0 && b[node]!=-1)
	{
		val=0;
		neg.eb(node);
	}
	else
	{
		pos.eb(node);
	}
	return val;
}
void solve()
{
	int n;
	cin>>n;
	tree.resize(n+1);
	for (int i = 1; i <= n; i++)
	{
		tree[i].clear();
	}
	for (int i = 1; i <= n; i++)
	{
		cin>>a[i];		
	}
	for (int i = 1; i <= n; i++)
	{
		cin>>b[i];
		if(b[i]!=-1)
			tree[b[i]].eb(i);
	}
	pos.clear();
	neg.clear();
	ans=0;

	for (int i = 1; i <= n; i++)
	{
		if(b[i]==-1)
			dfs(i);
	}
	int nsz=neg.size();
	cout<<ans<<endl;
	for(auto x : pos)
		cout<<x<<" ";
	for(int i=nsz-1;i>=0;i--)
		cout<<neg[i]<<" ";
	cout<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	//cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

