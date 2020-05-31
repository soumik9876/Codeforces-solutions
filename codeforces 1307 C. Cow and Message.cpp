
// Problem : C. Cow and Message
// Contest : Codeforces Round #621 (Div. 1 + Div. 2)
// URL : https://codeforces.com/problemset/problem/1307/C
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
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	string s;
	cin>>s;
	ll mx1=1,mx2=1,cnt=1;
	char cur='.';
	vi alpha[27];
	for(int i=0;i<s.size();i++)
	{
		alpha[s[i]-96].eb(i);
		mx2=max(mx2,(ll)alpha[s[i]-96].size());
		if(s[i]!=cur)
		{
			mx1=max(mx1,cnt);
			cnt=1;
			cur=s[i];
		}
		else
		{
			cnt++;
		}
	}
	if(cnt>mx1)
	{
		mx1=cnt;
	}
	//cout<<mx2<<endl;
	ll x=mx2,mx=0;
	for(int i=1;i<27;i++)
	{
		ll c=0;
		
			for(int j=1;j<27;j++)
			{
				//if(i==j)
					//continue;
				c=0;
				for(auto a : alpha[i])
				{
					ll pos=lower_bound(all(alpha[j]),a)-alpha[j].begin();
					if(i==j)
						pos++;
					c+=(alpha[j].size()-pos);
					//cout<<c<<" "<<i<<" "<<j<<" "<<a<<" "<<pos<<endl;
				}
				mx=max(mx,c);
			}
		
	}
	cout<<max(mx,x)<<endl;
    return 0;
}

