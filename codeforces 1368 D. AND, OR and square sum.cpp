// Problem : D. AND, OR and square sum
// Contest : Codeforces - Codeforces Global Round 8
// URL : https://codeforces.com/contest/1368/problem/D
// Memory Limit : 512.000000 MB 
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
void solve()
{
	ll n;
	vll a;
	cin>>n;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		a.eb(temp);
	}
	sort(all(a));
	ll total=0;
	vll one(22);
	for(int i=0;i<n;i++)
	{
		int cnt=0,num=a[i];
		while(num)
		{
			one[cnt++]+=(num%2);
			num/=2;
		}
		cnt++;
	}
	
	for(int i=0;i<n;i++)
	{
		ll num=0;
		for(int j=0;j<22;j++)
		{
			//cout<<j<<" "<<one[j]<<endl;
			if(one[j])
				num+=pow(2,j);
			one[j]=max(0LL,one[j]-1);
		}
		total+=(num*num);
		
	}
	cout<<total<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}

