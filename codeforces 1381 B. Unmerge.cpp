//Author - Soumik Roy
//Date & Time - July 24, 2020 4:06 PM
//Problem name - B. Unmerge
//Problem url - https://codeforces.com/problemset/problem/1381/B
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
void solve()
{
	int n;
	cin>>n;
	vi a(2*n);
	for(int i=0;i<2*n;i++)
		cin>>a[i];
	vi subsets;
	int mx=a[0],cnt=1;
	for(int i=1;i<2*n;i++)
	{
		if(a[i]>mx)
		{
			mx=a[i];
			subsets.eb(cnt);
			cnt=0;
		}
		cnt++;
	}
	subsets.eb(cnt);
	
	int total=subsets.size(),sum=n;
	bool sos[total+1][sum+1]={};
	for(int i=0;i<=total;i++)
		sos[i][0]=true;
	for(int i=1;i<=sum;i++)
		sos[0][i]=false;
	for(int i=1;i<=total;i++) 
	{
		for(int j=1;j<=sum;j++)
		{
			if(subsets[i-1]>j)
				sos[i][j]=sos[i-1][j];
			else
				sos[i][j]=sos[i-1][j]||sos[i-1][j-subsets[i-1]];
		}
	}
	
	if(sos[total][sum])
		cout<<"YES"<<endl;
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

