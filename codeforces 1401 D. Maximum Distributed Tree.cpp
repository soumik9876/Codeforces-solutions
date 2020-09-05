//Author - Soumik Roy
//Date & Time - September 05, 2020 1:43 PM
//Problem name - D. Maximum Distributed Tree
//Problem url - https://codeforces.com/contest/1401/problem/D
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
int dir[]={0,1,0,-1,1,0,-1,0};
ll n;
vector<vi> tree;
vll visits;
int dfs(int node,int prev=-1)
{
	int total=0;
	for(auto x:tree[node])
	{
		if(x==prev) continue;
		ll d=dfs(x,node);
		total+=d;
		ll v=1LL*d*(n-d);
		visits.eb(v);
	}
	return total+1;
}
void solve()
{
	cin>>n;
	tree=vector<vi> (n+1);
	visits.clear();
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		tree[u].eb(v);
		tree[v].eb(u);
	}
	ll m;
	cin>>m;
	vll factors(m);
	for(int i=0;i<m;i++)
		cin>>factors[i];
	ll temp=dfs(1);
	sort(all(visits),greater<ll> ());
	sort(all(factors),greater<ll> ());
	ll ans=0,p=1;
	temp--;
	if(m>temp)
	{
		for(int i=0;i<m-temp;i++)
		{
			p=(1LL*p*factors[i])%MOD;
		}
	}	
	for(int i =max(0LL,m-temp),j=0;i<m;j++,i++)
	{
		p=(1LL*p*factors[i])%MOD;
		p=(1LL*p*visits[j])%MOD;
		ans=(ans+p)%MOD;
		p=1;
	}
	for(int i=m;i<temp;i++)
		ans=(ans+visits[i])%MOD;
	cout<<ans<<endl;
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

