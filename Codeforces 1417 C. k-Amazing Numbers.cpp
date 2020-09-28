//Author - Soumik Roy
//Date & Time - September 28, 2020 5:38 PM
//Problem name - C. k-Amazing Numbers
//Problem url - https://codeforces.com/contest/1417/problem/C
//Time limit - 1000 ms
//Memory Limit - 256 MB    
//Parsed with ai-virtual-assistant https://github.com/Saurav-Paul/AI-virtual-assistant-python

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
void solve()
{
	int n;
	cin>>n;
	vi a(n);
	vector< vi > pos(n+1);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		pos[a[i]].eb(i);
	}
	vi ans(n+10,-1);
	for(int i=1;i<=n;i++)
	{
		int sz = (int)pos[i].size();
		if(!sz) continue;
		int mx = pos[i][0]+1;
		for(int j=0;j<sz-1;j++)
		{
			mx = max(mx,pos[i][j+1]-pos[i][j]);
		}
		mx = max(mx,n - pos[i][sz-1]);
		if(ans[mx]==-1)
			ans[mx] = i;
		ans[mx] = min(ans[mx],i);
	}
	int mn = INT_MAX;
	for(int i=1;i<=n;i++)
	{
		if(ans[i]!=-1) mn = min(mn,ans[i]);
		if(mn!=INT_MAX)
			ans[i] = mn;
		cout<<ans[i]<<" ";
	}
	cout<<endl;
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

