
// Problem : E. Maximum Subsequence Value
// Contest : Codeforces - Codeforces Round #648 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1365/E
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec 

#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>E. Maximum Subsequence Value
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
	ll n;
	cin>>n;
	vll a;
	ll mx=1;
	for(ll i=0,temp;i<n;i++)
	{
		cin>>temp;
		a.eb(temp);
	}
	for(int i=0;i<n;i++)
	{
		mx=max(mx,a[i]);
		for(int j=i+1;j<n;j++)
		{
			mx=max(mx,a[i]|a[j]);
			for(int k=j+1;k<n;k++)
			{
				mx=max(mx,a[i]|a[j]|a[k]);
			}
		}
	}
	//cout<<mx<<endl;
	cout<<mx<<endl;
    return 0;
}

