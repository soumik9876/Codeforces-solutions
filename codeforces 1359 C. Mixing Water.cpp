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
double h,c,t;
double val(ll res)
{
	return abs(t-(((h*(res+1))+(c*(res)))/(res+res+1)));
}
int main()
{
    KAMEHAMEHA
	int test;
	cin>>test;
	while(test--)
	{
		
		cin>>h>>c>>t;
		if(h+c-2*t>=0)
			cout<<2<<endl;
		else
		{
			double x=(t-h)/(h+c-2*t);
			ll res1=ceil(x);
			ll res2=floor(x);
			
			if(val(res1)>=val(res2))
			{
				res1=(res2*2)+1;
			}
			else
				res1=(res1*2)+1;
			cout<<res1<<endl;
		}
	}
    return 0;
}