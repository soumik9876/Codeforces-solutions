
// Problem : C. Pinkie Pie Eats Patty-cakes
// Contest : Codeforces - Codeforces Round #662 (Div. 2)
// URL : https://codeforces.com/contest/1393/problem/C
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
	int n;
	cin>>n;
	unordered_map<int,int> cnt;
	int mx=0,mxcnt=0;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		cnt[temp]++;
		mx=max(mx,cnt[temp]);
	}
	for(auto i : cnt)
	{
		if(i.S==mx)
			mxcnt++;
	}
	ll low=0,high=n-1,mid,ans=0;
	while(low<=high)
	{
		mid=low+((high-low)>>1);
		ll req=mxcnt+((mx-1)*(mid+1));
		if(req>n)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
			ans=max(ans,mid);
		}
		
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

