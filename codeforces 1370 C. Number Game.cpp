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
int mem[1000000];
int turns(int n)
{
	int cnt=0;
	if(n==1)
		return 0;
	if(n%2 || n==2)
		return 1;
	
	else
	{
		bool found=false;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				if(i%2)
				{
					found=true;
					if(cnt==0)
						cnt=turns(n/i)+1;
					else if(cnt%2==0)
						cnt=turns(n/i)+1;
				}
				if((n/i)%2)
				{
					found=true;
					if(cnt==0)
						cnt=turns(i)+1;
					if(cnt%2==0)
						cnt=turns(i)+1;
				}
			}
		}
		if(!found)
			cnt+=2;
	}
	return cnt;
}
void solve()
{
	int n;
	cin>>n;
	int cnt=0,num=n;
	cnt=turns(n);
	//cout<<cnt<<endl;
	if(cnt%2)
		cout<<"Ashishgup"<<endl;
	else
		cout<<"FastestFinger"<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	//memset(mem,-1,sizeof(mem));
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}