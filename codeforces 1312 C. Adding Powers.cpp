
// Problem : C. Adding Powers
// Contest : Codeforces - Educational Codeforces Round 83 (Rated for Div. 2)
// URL : https://codeforces.com/problemset/problem/1312/C
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
int main()
{
    KAMEHAMEHA
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vll a;
		for(ll i=0,temp;i<n;i++)
		{
			cin>>temp;
			a.eb(temp);
		}
		sort(all(a),greater<ll> ());
		ll num=1,p=0;
		while(num<a[0])
		{
			num*=k;
			p++;
		}
		bool check=true;
		while(1)
		{
			int cnt=0,pos;
			//cout<<p<<" "<<num<<endl;
			for(int i=0;i<n;i++)
			{
				if(a[i]>=num)
					cnt++,pos=i;
				//cout<<a[i]<<endl;
			}
			if(cnt==1)
				a[pos]-=num;
			p--;
			if(p<0)
				break;
			num/=k;
			if(cnt>1)
			{
				check=false;
				break;
			}
			
		}
		for(int i=0;i<n;i++)
		{
			if(a[i])
			{
				check=false;
				break;
			}
		}
		if(check)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
    return 0;
}

