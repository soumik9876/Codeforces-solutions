
// Problem : B. Balanced Array
// Contest : Codeforces - Codeforces Round #636 (Div. 3)
// URL : https://codeforces.com/contest/1343/problem/B
// Memory Limit : 0.000000 MB 
// Time Limit : 0.000000 milisec 
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
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if((n/2)%2)
			cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			ll even=2,odd=1;
			for(int i=1;i<=n/2;i++)
			{
				cout<<even<<" ";
				even+=2;
			}
			for(int i=1;i<=(n/2)-1;i++)
			{
				cout<<odd<<" ";
				odd+=2;
			}
			//cout<<odd<<endl;
			cout<<odd+(n/2)<<endl;
		}
	}
    return 0;
}

