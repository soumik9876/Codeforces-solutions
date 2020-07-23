
// Problem : C1. Prefix Flip (Easy Version)
// Contest : Codeforces - Codeforces Round #658 (Div. 2)
// URL : https://codeforces.com/contest/1382/problem/C1
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
void solve()
{
	int n;
	string s,t;
	cin>>n>>s>>t;
	vi p;
	for(int i=0;i<10;i++)
	{
		
	}
	bool check=true;
	if(s[0]=='0') check=false;
	for(int i=1;i<n;i++)
	{
		if(check && s[i]=='0')
		{
			p.eb(i);
			check=false;
		}
		if(!check && s[i]=='1')
		{
			p.eb(i);
			check=true;
		}
	}
	check=true;
	bool digits=true;
	if(s[n-1]=='0')
		digits=false;
	if(t[n-1]=='0')
		check=false;
	for(int i=n-1;i>=0;i--)
	{
		if(digits && t[i]=='0')
		{
			p.eb(i+1);
			digits=false;
		}
		if(!digits && t[i]=='1')
		{
			p.eb(i+1);
			digits=true;
		}
	}
	cout<<p.size()<<" ";
	for(auto i : p)
		cout<<i<<" ";
	cout<<endl;
}
int main()
{
    KAMEHAMEHA
	int t;
	cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

