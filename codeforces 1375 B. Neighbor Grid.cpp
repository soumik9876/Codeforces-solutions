
// Problem : B. Neighbor Grid
// Contest : Codeforces - Codeforces Global Round 9
// URL : https://codeforces.com/contest/1375/problem/B
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
void solve()
{
	int n,m;
	cin>>n>>m;
	int mat[n+1][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>mat[i][j];
	}
	bool check=true;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int val=0;
			if(i>0) val++;
			if(j>0) val++;
			if(i<n-1) val++;
			if(j<m-1) val++;
			if(mat[i][j]>val)
			{
				check=false;
				break;
			}
			mat[i][j]=val;
		}
		if(!check)
			break;
	}
	if(check)
	{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cout<<mat[i][j]<<" ";
			cout<<endl;
		}
	}
	else
		cout<<"NO"<<endl;
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

