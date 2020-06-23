
// Problem : C. Even Picture
// Contest : Codeforces - Codeforces Global Round 8
// URL : https://codeforces.com/contest/1368/problem/C
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
	int n;
	cin>>n;
	int col=ceil(sqrt((double)n));
	int row=ceil(((double)n/col));
	int left=(col*row)-n;
	int total=(n*3)+4;
	cout<<total<<endl<<0<<" "<<0<<endl;
	cout<<1<<" "<<0<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<i-1<<" "<<i<<endl;
		cout<<i<<" "<<i<<endl;
		cout<<i+1<<" "<<i<<endl;
	}
	cout<<n<<" "<<n+1<<endl;
	cout<<n+1<<" "<<n+1<<endl;
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

