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
		ll n;
		cin>>n;
		vll a;
		while(n)
		{
			if(n&(n-1))
			{
				a.eb(n);
				break;
			}
			int p=log2(n);
			p=pow(2,p);
			a.eb(p);
			n-=p;
		}
		ll total=0;
		for(auto i: a)
		{
		
			while(i)
			{
				total+=i;
				i/=2;
			}
		}
		cout<<total<<endl;
	}
    return 0;
}