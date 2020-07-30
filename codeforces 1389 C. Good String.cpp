
// Problem : C. Good String
// Contest : Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1389/problem/C
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
void solve()
{
	string s;
	cin>>s;
    int pairs[10][10];
	memset(pairs,0,sizeof(pairs));
	vi cnt(10);
	int sz=s.size();
	int mx1=0,mx2=0;
	for(int i=0;i<sz;i++)
	{
		cnt[s[i]-'0']++;
	}
	for(int i=0;i<10;i++)
	{
		int mx=0;
		bool check[10]={},ok=false;
		for(int j=0;j<sz;j++)
		{
			if(s[j]-'0'==i)
			{
				memset(check,0,sizeof(check));
				ok=true;
				continue;
			}
			if(!check[s[j]-'0'] && ok)
			{
				pairs[i][s[j]-'0']++;
				check[s[j]-'0']=true;
			}
			
		}
	}	
	for(int i=0;i<10;i++)
	{
		mx1=max(mx1,cnt[i]);
		for(int j=0;j<10;j++)
		{
			if(i==j)
				continue;
			mx2=max(mx2,pairs[i][j]);
		}
	}
	int ans1=sz-mx1,ans2=sz-(mx2*2);
	//cout<<ans1<<" "<<ans2<<endl;
	cout<<min(ans1,ans2)<<endl;
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

