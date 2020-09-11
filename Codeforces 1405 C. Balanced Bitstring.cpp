//Author - Soumik Roy
//Date & Time - September 10, 2020 10:00 PM
//Problem name - C. Balanced Bitstring
//Problem url - https://codeforces.com/contest/1405/problem/C
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
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	bool check=true;
	for(int i=0;i<k;i++)
	{
		char c='?';
		for(int j=i;j<n;j+=k)
		{
			if(s[j]!=c)
			{
				if(c=='?') c=s[j];
				else if(s[j]=='?') s[j]=c;
				else
				{
					check=false;
					break;
				}
			}
		}
		if(!check) break;
		for(int j=i;j<n;j+=k)
			s[j]=c;
	}
	int sum=0,question=0;
	for (int i = 0; i < k; i++)
	{
		if(s[i]=='1') sum++;
		else if(s[i]=='0') sum--;
		else question++;
	}
	sum=abs(sum);
	if(question<sum || question%2!=sum%2)
		check=false;
	if(check)
		cout<<"YES"<<endl;
	else
	{
		cout<<"NO"<<endl;
	}
	
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

