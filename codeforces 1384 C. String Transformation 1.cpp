
// Problem : C. String Transformation 1
// Contest : Codeforces - Codeforces Round #659 (Div. 2)
// URL : https://codeforces.com/contest/1384/problem/C
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec   

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
int find(int node,vi par)
{
	return (par[node]==node)?node:find(par[node],par);
}
void solve()
{
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	bool check[21][21]={};
	memset(check,false,sizeof(check));
	vi chars[21];
	vi par(21);
	int total=0;
	vi childs(21);
	bool pos=true;
	for (int i = 0; i < 21; i++)
	{
		par[i]=i;
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>b[i])
		{
			cout<<-1<<endl;
			return ;
		}
		int u=find(a[i]-'a',par);
		int v=find(b[i]-'a',par);
		if(u!=v)
		{
			par[v]=u;
			childs[u]++;
		}
	}
	for(int i=0;i<20;i++)
		total+=childs[i];
	
	if(pos)
		cout<<total<<endl;
	else
		cout<<-1<<endl;
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

