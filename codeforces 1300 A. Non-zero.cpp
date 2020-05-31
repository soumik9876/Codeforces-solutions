
// Problem : A. Non-zero
// Contest : Codeforces Round #618 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1300/A
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 

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
	int t;
	cin>>t;
	while(t--)
	{
		int n,temp,sum=0,zero=0,ans=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			sum+=temp;
			if(!temp)
				zero++;
		}
		ans+=zero;
		sum+=zero;
		if(sum==0)
			ans++;
		cout<<ans<<endl;
	}
    return 0;
}

