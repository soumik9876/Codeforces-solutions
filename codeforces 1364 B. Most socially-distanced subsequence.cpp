
// Problem : B. Most socially-distanced subsequence
// Contest : Codeforces - Codeforces Round #649 (Div. 2)
// URL : https://codeforces.com/contest/1364/problem/B
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
	cin>>n;
	vi a;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		a.eb(temp);
	}
	int i=0,j=1;
	vi ans;
	ans.eb(a[i]);
	while(i<n-2 && j<n-1)
	{
		if(abs(a[j]-a[i])+abs(a[j+1]-a[j])>abs(a[j+1]-a[i]))
		{
			i=j;
			ans.eb(a[i]);
		}
		j++;
	}
	ans.eb(a[n-1]);
	cout<<ans.size()<<endl;
	for(auto i: ans)
		cout<<i<<" ";
	cout<<endl;
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

