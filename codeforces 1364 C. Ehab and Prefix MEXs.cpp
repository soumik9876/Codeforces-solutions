
// Problem : C. Ehab and Prefix MEXs
// Contest : Codeforces - Codeforces Round #649 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1364/C
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
	bool check=true;
	bool exist[n+1]={};
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		a.eb(temp);
		exist[temp]=true;
		if(temp>i+1)
		{
			check=false;
		}
	}
	
	if(!check)
	{
		cout<<-1<<endl;
		return;
	}
	
	vi pref(n+1,-1);
	for(int i=n-1;i>=1;i--)
	{
		if(a[i]!=a[i-1])
			pref[i]=a[i-1];
	}
	
	int cur=0;
	vi b(n+1);
	for(int i=0;i<n;i++)
	{
		if(pref[i]==-1)
		{
			while(exist[cur])
				cur++;
			b[i]=cur++;
		}
		else
			b[i]=pref[i];
	}
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
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

