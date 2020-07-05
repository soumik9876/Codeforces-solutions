
// Problem : A. Sign Flipping
// Contest : Codeforces - Codeforces Global Round 9
// URL : https://codeforces.com/contest/1375/problem/0
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
	int n,neg=0,pos=0,zero=0;
	vll a;
	cin>>n;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		a.eb(temp);
	}
	bool minus=true;
	for(int i=0;i<n;i++)
	{
		if(minus)
		{
			if(a[i]>0)
				a[i]=-a[i];
		}
		else if(a[i]<0)
			a[i]=-a[i];
		minus^=1;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
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

