
// Problem : B. Two Arrays And Swaps
// Contest : Codeforces - Codeforces Round #642 (Div. 3)
// URL : https://codeforces.com/contest/1353/problem/B
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
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		vll a,b;
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			a.eb(temp);
		}
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			b.eb(temp);
		}
		sort(all(a));
		sort(all(b),greater<ll> ());
		for(int i=0;i<m;i++)
		{
			if(b[i]>a[i])
				swap(a[i],b[i]);
		}
		ll total=0;
		for(int i=0;i<n;i++)
			total+=a[i];
		cout<<total<<endl;
	}
    return 0;
}

