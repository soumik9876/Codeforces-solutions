//Author - Soumik Roy
//Date & Time - September 15, 2020 10:19 PM
//Problem name - C. Game with Chips
//Problem url - https://codeforces.com/contest/1327/problem/C
//Time limit - 1000 ms
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
	int n,m,k,total=0;
	cin>>n>>m>>k;
	total=(n-1)+(m-1);
	string ans="";
	for(int i=0;i<n-1;i++)
	 	ans+='U';
	for(int j=0;j<m-1;j++)
		ans+='L';
	for(int i=0;i<2*k;i++)
	{
		int x,y;
		cin>>x>>y;
	}
	total+=((n*(m-1))+(n-1));
	bool dir=true;
	for(int i=0;i<n;i++)
	{
		dir^=1;
		for(int j=0;j<m-1;j++)
		{
			if(!dir)
				ans+='R';
			else ans+='L';
		}
		if(i<n-1)
			ans+='D';
	}
	cout<<total<<endl;
	cout<<ans<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	//cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

