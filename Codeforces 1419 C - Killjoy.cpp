//Author - Soumik Roy
//Date & Time - September 20, 2020 9:58 AM
//Problem name - C - Killjoy
//Time limit - 1000 ms
//Memory Limit - 262 MB    
//Parsed with ai-virtual-assistant https://github.com/Saurav-Paul/AI-virtual-assistant-python

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
	int n,x,sum=0;
	cin>>n>>x;
	bool zero=true,one=false;;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		sum+=temp;
		if(temp!=x) 
			zero=false;
		if(temp==x) one=true;
	}
	if(zero)
	{
		cout<<0<<endl;
		return;
	}
	ll sum1=x*n;
	if(sum1==sum || one)
	{
		cout<<1<<endl;
		return;
	}
	else
	{
		cout<<2<<endl;
		return;
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

