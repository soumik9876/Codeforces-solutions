
// Problem : B. Codeforces Subsequences
// Contest : Codeforces - Codeforces Global Round 8
// URL : https://codeforces.com/contest/1368/problem/B
// Memory Limit : 512.000000 MB 
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
	ll n;
	cin>>n;
	ll total=1,cnt,mx;
	for(ll i=2;i<=60;i++)
	{
		for(ll j=1;j<=10;j++)
		{
			if(total>=n)
			{
				mx=i;
				cnt=j-1;
				break;
			}
			total/=(i-1);
			total*=i;
			if(total>=n)
			{
				mx=i;
				cnt=j;
				break;
			}
		}
		if(total>=n)
			break;
	}
	string s="codeforces";
	for(ll i=0;i<cnt;i++)
	{
		for(ll j=1;j<=mx;j++)
			cout<<s[i];
	}
	for(ll i=cnt;i<10;i++)
	{
		for(ll j=1;j<mx;j++)
			cout<<s[i];
	}
	cout<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}

