// Problem : D. Two Divisors
// Contest : Codeforces - Educational Codeforces Round 89 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1366/problem/D
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec 
 
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
#define len 10000000
//bool notprime[len+10];
int minfac[len+100];
void sieve()
{
    minfac[1]=2;
	minfac[2]=2;
	for(ll j=4;j<=len;j+=2)
	{
		minfac[j]=2;
	}
	for(ll i=3;i<=len;i+=2)
	{
		if(!minfac[i])
		{
			minfac[i]=i;
			for(ll j=i*i;j<=len;j+=(2*i))
			{
				minfac[j]=i;
			}
		}
	}
}
int main()
{
    //KAMEHAMEHA
	int n;
	vi a;
	
	sieve();
	//for(int i=0;i<20;i++)
		//cout<<minfac[i]<<endl;
	scanf("%d",&n);
	vi ans1(n+1),ans2(n+1);
	for(int i=0,temp;i<n;i++)
	{
		scanf("%d",&temp);
		int found=0,a1=1,a2=1;
		while(temp>1)
		{
			int fac=minfac[temp];
			//if(minfac[temp]==0)
			    //fac=temp;
			if(!found)
				a1=fac,found++;
			else
				a2*=fac;
			while(temp%fac==0)
				temp/=fac;
		}
		if(a1>1 && a2>1)
		{
			ans1[i]=a1;
			ans2[i]=a2;
		}
		
	}
	for(int i=0;i<n;i++)
	{
		if(!ans1[i] || !ans2[i])
			cout<<-1<<" ";
		else
			cout<<ans1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		if(!ans1[i] || !ans2[i])
			cout<<-1<<" ";
		else
			cout<<ans2[i]<<" ";
	}
	cout<<endl;
    return 0;
}