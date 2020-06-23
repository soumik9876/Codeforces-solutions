
// Problem : C. Rotation Matching
// Contest : Codeforces - Codeforces Round #648 (Div. 2)
// URL : https://codeforces.com/contest/1365/problem/C
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
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
	vi posa(n+1),posb(n+1);
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		posa[temp]=i+1;
	}
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		posb[temp]=i+1;
	}
	vi cost(n+1);
	int mx=0;
	//for(int i=1;i<=n;i++)
		//cout<<posa[i]<<" "<<posb[i]<<endl;
	for(int i=1;i<=n;i++)
	{
		int temp=posb[i]-posa[i];
		if(temp<=0)
			temp=n+posb[i]-posa[i];
		cost[temp]++;
		mx=max(mx,cost[temp]);
	}
	cout<<mx<<endl;
    return 0;
}

