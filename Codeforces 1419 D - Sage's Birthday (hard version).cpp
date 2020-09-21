//Author - Soumik Roy
//Date & Time - September 20, 2020 10:09 AM
//Problem name - D - Sage's Birthday (hard version)
//Problem url - https://vjudge.net/contest/395788#problem/D
//Time limit - 1000 ms
//Memory Limit - 262 MB    
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
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(all(a));
	vi ans;
	int add=n/2;
	for(int i=0;i<add;i++)
	{
		ans.eb(a[add+i]);
		ans.eb(a[i]);
	}
	if(n&1) ans.eb(a[n-1]);
	int total=0;
	for(int i=1;i<n-1;i++)
	{
		if(ans[i-1]>ans[i] && ans[i+1]>ans[i])
		{
			total++;
		}
	}
	cout<<total<<endl;
	for(auto x: ans) cout<<x<<" ";
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

