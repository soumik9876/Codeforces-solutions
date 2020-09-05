//Author - Soumik Roy
//Date & Time - September 05, 2020 12:20 PM
//Problem name - B. Ternary Sequence
//Problem url - https://codeforces.com/contest/1401/problem/B
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
	int a[3],b[3];
	for(int i=0;i<3;i++ ) cin>>a[i];
	for(int i=0;i<3;i++)  cin>>b[i];
	ll soproduct=0;
	if(a[0]>=b[2])
	{
		a[0]=a[0]-b[2];
		b[2]=0;
	}
	else
	{
		b[2]=b[2]-a[0];
		a[0]=0;
	}
	if(a[1]>=b[0])
	{
		a[1]=a[1]-b[0];
		b[0]=0;
	}
	else
	{
		b[0]=b[0]-a[1];
		a[1]=0;
	}
	
	if(a[2]>=b[1])
	{
		soproduct=soproduct+2*b[1];
		a[2]=a[2]-b[1];
		b[1]=0;
		
	}
	else
	{
		soproduct=soproduct+2*a[2];
		b[1]=b[1]-a[2];
		a[2]=0;
	}
	soproduct=soproduct-2*min(a[1],b[2]);
	cout<<soproduct<<endl;
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

