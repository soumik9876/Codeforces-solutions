
// Problem : C. Boats Competition
// Contest : Codeforces - Codeforces Round #661 (Div. 3)
// URL : https://codeforces.com/contest/1399/problem/C
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
	vi a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	unordered_map<int,int> cnt;
	int mx=0;
	bool check[n+1][110]={};
	for(int i=0;i<n-1;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
			if(!check[i][a[i]+a[j]] && !check[j][a[i]+a[j]])
			{
				cnt[a[i]+a[j]]++;
				check[i][a[i]+a[j]]=true;
				check[j][a[i]+a[j]]=true;
				mx=max(mx,cnt[a[i]+a[j]]);
			}
		}
	}
	cout<<mx<<endl;
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

