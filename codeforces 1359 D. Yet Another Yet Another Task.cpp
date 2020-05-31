
// Problem : D. Yet Another Yet Another Task
// Contest : Codeforces - Educational Codeforces Round 88 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1359/problem/D
// Memory Limit : 512.000000 MB 
// Time Limit : 1500.000000 milisec 
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
int main()
{
    KAMEHAMEHA
	int n;
	cin>>n;
	vi a;
	int m=-1000;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		a.eb(temp);
		m=max(m,temp);
	}
	int ans=0;
	for(int i=0;i<=m;i++)
	{
		int sum=0,mx=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]>i)
			{
				sum=0;
			}
			else if(sum+a[j]<a[j])
				sum=a[j];
			else
				sum+=a[j];
			mx=max(mx,sum);
		}
		ans=max(ans,mx-i);
	}
	cout<<ans<<endl;
    return 0;
}

