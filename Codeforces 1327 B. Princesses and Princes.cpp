//Author - Soumik Roy
//Date & Time - September 15, 2020 9:57 PM
//Problem name - B. Princesses and Princes
//Problem url - https://codeforces.com/contest/1327/problem/B
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
	int n,k,marriedgirl=0,mboy=0;
	cin>>n;
	vi daughter;
	bool taken[n+1]={};
	for(int i=0;i<n;i++)
	{
		int j;
		cin>>j;
		bool check=false;
		for(int k=0,temp;k<j;k++)
		{
			cin>>temp;
			if(!taken[temp] && !check)
			{
				taken[temp]=true;
				check=true;
				marriedgirl++;
				mboy++;
			}
		}
		if(!check) daughter.eb(i+1);
	}
	if(daughter.size())
	{
		for(int i=1;i<=n;i++)
		{
			if(!taken[i])
			{
				cout<<"IMPROVE"<<endl;
				cout<<daughter[0]<<" "<<i<<endl;
				return;
			}
		}
	}
	cout<<"OPTIMAL"<<endl;
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

