//Author - Soumik Roy
//Date & Time - July 26, 2020 9:42 PM
//Problem name - A. Acacius and String
//Problem url - https://codeforces.com/problemset/problem/1379/A
//Time limit - 1000 ms
//Memory Limit - 512 MB    

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
	string s,t="abacaba";
	cin>>n>>s;
	bool type2=false;
	int type1=0;
	vi pos;
	for(int i=0;i<=n-7;i++)
	{
		bool ctype2=false,type3=false;
		for(int j=0;j<7;j++)
		{
			if(s[i+j]=='?')
			{
				ctype2=true;
			}
			if(s[i+j]!='?' && s[i+j]!=t[j])
			{
				type3=true;
				ctype2=false;
				break;
			}
			
		}
		if(!type3 && !ctype2)
		{
			type1++;
		}
		else if (ctype2)
		{
			type2=true;
			pos.eb(i);
		}
	}
	bool ok=false;
	if(!type1 && type2)
	{
		for(auto i: pos)
		{
			int cnt=0;
			string s1=s;
			for(int j=0;j<7;j++)
				s1[i+j]=t[j];
			bool check=true;
			for(int j=0;j<=n-7;j++)
			{
				check=true;
				for(int k=0;k<7;k++)
				{
					if(s1[j+k]!=t[k])
					{
						check=false;
						break;
					}
				}
				if(check)
					cnt++;
			}		
			if(cnt==1)
			{
				s=s1;
				ok=true;
				break;
			}		
		}
	}
	for(int i=0;i<n;i++)
	{
		if(s[i]=='?')
			s[i]='d';
	}
	if(type1==1) ok=true;
	if(!ok)
		cout<<"No"<<endl;
	else
	{
		cout<<"Yes"<<endl;
		cout<<s<<endl;
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

