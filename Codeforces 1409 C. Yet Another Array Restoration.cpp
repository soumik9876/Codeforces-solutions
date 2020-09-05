//Author - Soumik Roy
//Date & Time - September 04, 2020 9:04 PM
//Problem name - C. Yet Another Array Restoration
//Problem url - https://codeforces.com/contest/1409/problem/C
//Time limit - 1000 ms
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
	int n,x,y;
	cin>>n>>x>>y;
	for(int diff=1;diff<=(y-x);diff++)
	{
		vi a;
		int cnt=0;
		for(int i=x;i<=y && cnt<n;i+=diff,cnt++)
		{
			a.eb(i);
		}
		for(int i=x-diff;i>0 && cnt<n;i-=diff,cnt++)
		{
			a.eb(i);
		}
		for(int i=y+diff;cnt<n;i+=diff,cnt++)
		{
			a.eb(i);
		}
		int sz=a.size();
		
		if(sz!=n) continue;
		
		for(int i=0;i<sz;i++)
		{
			if(a[i]==y)
			{
				for(auto x: a)
					cout<<x<<" ";
				cout<<endl;
				return;
			}
		}
	}
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

