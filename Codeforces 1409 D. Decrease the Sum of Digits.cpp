//Author - Soumik Roy
//Date & Time - September 04, 2020 9:26 PM
//Problem name - D. Decrease the Sum of Digits
//Problem url - https://codeforces.com/contest/1409/problem/D
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
	string n;
	ll s;
	cin>>n>>s;
	ll sz=n.size(),sum=0,need=0;
	for(int i=sz-1;i>=0;i--)
	{
		sum+=(n[i]-'0');
	}
	if(sum<=s)
	{
		cout<<need<<endl;
		return;
	}
	reverse(all(n));
	ll carry=0;
	for(int i=0;i<sz;i++)
	{
		if(n[i]!='0')
		{
			for(int j=i;j<sz;j++)
			{
				
				need=need+((10-(n[j]-'0'+carry))*(ll)pow(10,j));
				sum=sum-(n[j]-'0')+1-carry; 
				carry=1;
				
				if(sum<=s)
				{
					cout<<need<<endl;
					return;
				}
			}
		}
	}
	cout<<need<<endl;
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

