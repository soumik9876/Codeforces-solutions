
// Problem : B. Even Array
// Contest : Codeforces - Codeforces Round #650 (Div. 3)
// URL : https://codeforces.com/contest/1367/problem/B
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec 
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
void solve()
{
	int n;
	vi a;
	cin>>n;
	int weven=0,wodd=0;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		if(i%2 && temp%2==0)
			weven++;
		else if(i%2==0 && temp%2)
			wodd++;
	}
	if(weven!=wodd)
		cout<<-1<<endl;
	else
		cout<<weven<<endl;
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

