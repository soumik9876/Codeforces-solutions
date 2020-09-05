//Author - Soumik Roy
//Date & Time - September 05, 2020 1:07 PM
//Problem name - C. Mere Array
//Problem url - https://codeforces.com/contest/1401/problem/C
//Time limit - 2000 ms
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
	int n,mn=INT_MAX;
	cin>>n;
	vi a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mn=min(a[i],mn);
	}
	vi b=a;
	sort(all(a));
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i] && a[i]%mn)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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

