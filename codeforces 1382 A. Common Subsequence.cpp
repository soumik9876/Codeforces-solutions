
// Problem : A. Common Subsequence
// Contest : Codeforces - Codeforces Round #658 (Div. 2)
// URL : https://codeforces.com/contest/1382/problem/0
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
	int n,m;
	cin>>n>>m;
	bool has[1001]={};
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		has[temp]=true;
	}
	int ans=-1;	
	for(int i=0,temp;i<m;i++)
	{
		cin>>temp;
		if(has[temp])
			ans=temp;
	}
	if(ans==-1)
		cout<<"NO"<<endl;
	else
	{
		cout<<"YES"<<endl;
		cout<<1<<" "<<ans<<endl;
	}
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

