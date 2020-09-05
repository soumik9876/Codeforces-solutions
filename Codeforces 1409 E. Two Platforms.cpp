//Author - Soumik Roy
//Date & Time - September 05, 2020 10:34 AM
//Problem name - E. Two Platforms
//Problem url - https://codeforces.com/contest/1409/problem/E
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
void solve()
{
	ll n,k,y;
	cin>>n>>k;
	vi x(n);
	for(int i=0;i<n;i++) cin>>x[i];
	for(int i=0;i<n;i++) cin>>y;
	sort(all(x));
	int a=0,b=0,ans=1,mx1=0,left,right;
	vi l(n),r(n);
	while(a<n && b<n)
	{
		if(x[b]-x[a]<=k)
		{
			mx1=max(mx1,b-a+1);
			l[b]=mx1;
			b++;
		}
		else
			a++;
	}
	a=n-1,b=n-1,mx1=0;
	while(a>=0 && b>=0)
	{
		if(x[a]-x[b]<=k)
		{
			mx1=max(mx1,a-b+1);
			r[b]=mx1;
			b--;
		}
		else a--;
	}
	for(int i=0;i<n-1;i++)
	{
		ans=max(ans,l[i]+r[i+1]);
	}
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

