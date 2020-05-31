
// Problem : B. Phoenix and Beauty
// Contest : Codeforces - Codeforces Round #638 (Div. 2)
// URL : https://codeforces.com/contest/1348/problem/B
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
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		set<int> base;
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			base.insert(temp);
		}
		if(base.size()>k)
			cout<<-1<<endl;
		else
		{
			cout<<n*k<<endl;
			for(int i=0;i<n;i++)
			{
				for(auto i: base)
					cout<<i<<" ";
				for(int i=0;i<k-base.size();i++)
				{
					cout<<1<<" ";
				}
				
			}
			cout<<endl;
		}
	}
    return 0;
}

