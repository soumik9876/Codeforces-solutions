
// Problem : E1. Reading Books (easy version)
// Contest : Codeforces - Codeforces Round #653 (Div. 3)
// URL : https://codeforces.com/contest/1374/problem/E1
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
	int n,k;
	cin>>n>>k;
	vector< ll > a,b,both;
	for(int i=0;i<n;i++)
	{
		ll t,x,y;
		cin>>t>>x>>y;
		if(x&&y)
			both.eb(t);
		else if(x)
			a.eb(t);
		else if(y)
			b.eb(t);
	}
	if(a.size()+both.size()<k || b.size()+both.size()<k)
		cout<<-1<<endl;
	else
	{
		sort(all(a));
		sort(all(b));
		sort(all(both));
		ll total=0,single=0,mingle=0;
		for(int i=0;i<k;i++)
		{
			if(a.size()==single || b.size()==single)
				total+=both[mingle++];
			else if(mingle==both.size())
				total+=a[single]+b[single++];
			else
			{
				if(a[single]+b[single]<both[mingle])
					total+=a[single]+b[single++];
				else
					total+=both[mingle++];
			}
		}
		cout<<total<<endl;
	}
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

