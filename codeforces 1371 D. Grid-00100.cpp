
// Problem : D. Grid-00100
// Contest : Codeforces - Codeforces Round #654 (Div. 2)
// URL : https://codeforces.com/contest/1371/problem/D
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
	int n,k;
	cin>>n>>k;
	ll mat[n+1][n+1],row=0,row1=n-1,num=0;
	bool check=true,check1=false;
	memset(mat,0,sizeof(mat));
	ll each=k/n,extra=k%n;
	for(int i=0;i<n;i++)
	{
		int start=i,lim=each;
		if(extra)
		{
			lim++;
			extra--;
		}
		while(lim--)
		{
			mat[i][start]=1;
			if(start)
				start--;
			else
				start=n-1;
		}
	}
	
	ll mr=0,mc=0,mnr=INT_MAX,mnc=INT_MAX;
	for(int i=0;i<n;i++)
	{
		ll cnt=0,cnt1=0;
		for(int j=0;j<n;j++)
		{
			if(mat[i][j])
				cnt++;
			if(mat[j][i])
				cnt1++;
		}
		mr=max(mr,cnt);
		mnr=min(mnr,cnt);
		mc=max(mc,cnt1);
		mnc=min(mnc,cnt1);
	}
	ll ans=((mr-mnr)*(mr-mnr))+((mc-mnc)*(mc-mnc));
	cout<<ans<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<mat[i][j];
		cout<<endl;
	}
}
int main()
{
    KAMEHAMEHA
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}

