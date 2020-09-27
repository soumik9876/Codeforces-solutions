//Author - Soumik Roy
//Date & Time - September 27, 2020 9:46 AM
//Problem name - C - Mortal Kombat Tower
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
const int sz=2e5,inf=1e9;
vi a;
int dp[sz+10][3][3];
int n;
int func(int pos,int person,int taken)
{
	if(pos>=n)
		return 0;
	if(dp[pos][person][taken]!=-1) return dp[pos][person][taken];
	int ans1=inf,ans2=inf;
	if(person)
	{
		if(taken<2)
			ans1=a[pos]+func(pos+1,1,taken+1);
		if(pos != 0)
			ans2 = func(pos+1,0,1);
	}
	else
	{
		if(taken<2) ans1 = func(pos+1,0,taken+1);
		ans2 = a[pos] + func(pos+1,1,1);
	}
	return dp[pos][person][taken] = min(ans1,ans2);
}
void solve()
{
	
	cin>>n;
	a = vi(n+1);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
				dp[i][j][k]=-1;
		}
	}
	int ans = func(0,1,0);
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

