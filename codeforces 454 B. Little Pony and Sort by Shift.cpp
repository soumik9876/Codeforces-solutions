
// Problem : B. Little Pony and Sort by Shift
// Contest : Codeforces Round #259 (Div. 2)
// URL : https://codeforces.com/contest/454/problem/B?fbclid=IwAR16CuumtsFQBX_gjXXCDmRq__4m5h1JCXslb96B_NQ7b_r9FuPlyKBY2is
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
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
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	int n;
	cin>>n;
	int cnt=0,pos=n,last=0,mn=INT_MAX,mn1=mn;
	for(int i=0,temp;i<n;i++)
	{
	
		cin>>temp;
		if(temp<last)
		{
			mn1=mn;
			cnt++,pos=i;
			
			
		}
		if(temp>mn1)
			cnt++;
		mn=min(mn,temp);
		last=temp;
	}
	if(cnt>1)
		cout<<-1<<endl;
	else
		cout<<n-pos<<endl;

    return 0;
}

