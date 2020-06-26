
// Problem : D. Maximum Sum on Even Positions
// Contest : Codeforces - Educational Codeforces Round 90 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1373/problem/D
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)
   

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
	ll n,total=0;
	cin>>n;
	vll a,sum;
	sum.eb(0);
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		a.eb(temp);
		if(i%2==0)
		{
			sum.eb(sum[i]+temp);
			total+=temp;
		}
		else
			sum.eb(sum[i]-temp);
	}
	ll start=0,mx1=0,mx2=0;
	for(int i=2;i<=n;i+=2)
	{
		if(sum[i]>sum[start])
		{
			start=i;
		}
		else
			mx1=max(mx1,sum[start]-sum[i]);
			
	}
	start=1;
	for(int i=3;i<=n;i+=2)
	{
		if(sum[i]>sum[start])
			start=i;
		else
			mx2=max(mx2,sum[start]-sum[i]);
	}
	total+=max(mx1,mx2);
	cout<<total<<endl;
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

