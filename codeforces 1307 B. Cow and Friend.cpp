
// Problem : B. Cow and Friend
// Contest : Codeforces Round #621 (Div. 1 + Div. 2)
// URL : https://codeforces.com/contest/1307/problem/B
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
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	int t,n,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		int mx=0;
		bool check=false;
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			mx=max(mx,temp);
			if(x==temp)
			{
				cout<<1<<endl;
				check=true;
			}
		}
		if(check)
			continue;
		int d=ceil((double)x/mx);
		if(x%mx==0)
		{
			cout<<d<<endl;
			continue;
		}
		d=max(0,d-2);
		cout<<d+2<<endl;
	}
    return 0;
}

