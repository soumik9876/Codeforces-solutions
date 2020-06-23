
// Problem : B. Trouble Sort
// Contest : Codeforces - Codeforces Round #648 (Div. 2)
// URL : https://codeforces.com/contest/1365/problem/B
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
int main()
{
    KAMEHAMEHA
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vi a;
		bool b[n+1];
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			a.eb(temp);
		}
		for(int i=0;i<n;i++)
			cin>>b[i];
		bool check=true,diff=b[0],yes=false;
		
		for(int i=1;i<n;i++)
		{
			if(a[i]<a[i-1])
			{
				check=false;
			}
			//cout<<diff<<" "<<b[i]<<endl;
			if(b[i]!=diff)
			{
				yes=true;
				break;
			}
			diff=b[i];
		}
		if(check || yes)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
    return 0;
	
}

