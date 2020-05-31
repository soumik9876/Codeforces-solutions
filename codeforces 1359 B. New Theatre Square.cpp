
// Problem : B. New Theatre Square
// Contest : Codeforces - Educational Codeforces Round 88 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1359/problem/B
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
int main()
{
    KAMEHAMEHA
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		string s[n+1];
		for(int i=0;i<n;i++)
			cin>>s[i];
		bool check=true;
		if(y>2*x)
			check=false;
		ll total=0;
		for(int i=0;i<n;i++)
		{
			bool white=false;
			int cnt=0;
			for(int j=0;j<m;j++)
			{
				if(s[i][j]=='.')
				{
					white=true;
					cnt++;
				}
				else
				{
					white=false;
					
					if(check)
					{
						total+=((cnt/2)*y)+((cnt%2)*x);
					}
					else
						total+=(cnt*x);
					cnt=0;
				}
			}
			if(white)
			{
				if(check)
					{
						total+=((cnt/2)*y)+((cnt%2)*x);
					}
				else
					total+=(cnt*x);
			}
		}
		cout<<total<<endl;
	}
    return 0;
}

