
// Problem : A. Orac and LCM
// Contest : Codeforces - Codeforces Round #641 (Div. 1)
// URL : https://codeforces.com/problemset/problem/1349/A
// Memory Limit : 256.000000 MB 
// Time Limit : 3000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

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
#define num 200000
bool isprime[num+100];
vll primes;
void sieve()
{
	//primes.eb(2);
	for(ll i=2;i<=num;i++)
	{
		if(!isprime[i])
		{
			primes.eb(i);
			for(ll j=i*i;j<=num;j+=i)
			{
				isprime[j]=true;
			}
		}
	}
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	ll n;
	sieve();
	cin>>n;
	vll a;
	//for(int i=0;i<=10;i++)
		//cout<<primes[i]<<endl;
	for(ll i=0,temp;i<n;i++)
	{
		cin>>temp;
		a.eb(temp);
	}
	vector< pll > factors;
	for(auto i: primes)
	{
		ll mn=INT_MAX,mx1=INT_MAX;
		vi f;
		for(int j=0;j<n;j++)
		{
			if(mx1==0)
				break;
			if(0)
			{
				if(mn<INT_MAX)
					mx1=mn;
				mn=0;
				continue;
			}
			ll cnt=0;
			
			while(a[j]%i==0)
			{
				cnt++;
				a[j]/=i;
			}
			//f.eb(cnt);
			if(mn<INT_MAX)
			{
				if(mn>=cnt)
				{
					mx1=mn;
					mn=cnt;
				}
				else
					mx1=min(mx1,cnt);
			}
			else
				mn=min(mn,cnt);
		}
		//sort(all(f));
		//if(f.size()>1)
		if(mx1>=INT_MAX)
			mx1=mn;
		factors.eb(i,mx1);
	}
	ll ans=1;
	//cout<<ans<<endl;
	for(auto i: factors)
	{
		//cout<<i.F<<" "<<i.S<<endl;
		ans*=pow(i.F,i.S);
	}
	cout<<ans<<endl;
    return 0;
}

