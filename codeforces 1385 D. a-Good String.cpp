//Author - Soumik Roy
//Date & Time - July 20, 2020 12:23 PM
//Problem name - D. a-Good String
//Problem url - https://codeforces.com/problemset/problem/1385/D
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
string s;
int brute(int left,int right,char c)
{
	if(left==right)
	{
		return s[left]!=c;		
	}
	int cnt=0,ans1=0,ans2=0,mid=(left+right)>>1;
	for(int i=left;i<=mid;i++)
	{
		if(s[i]!=c)
			cnt++;
	}
	ans1=cnt+brute(mid+1,right,c+1);
	cnt=0;
	for(int i=mid+1;i<=right;i++)
	{
		if(s[i]!=c)
			cnt++;
	}
	ans2=cnt+brute(left,mid,c+1);
	return min(ans1,ans2);
}
void solve()
{
	int n;
	
	cin>>n>>s;
	int ans=brute(0,n-1,'a');
	cout<<ans<<endl;
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
