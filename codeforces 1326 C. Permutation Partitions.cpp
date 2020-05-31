
// Problem : C. Permutation Partitions
// Contest : Codeforces Global Round 7
// URL : https://codeforces.com/problemset/problem/1326/C
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   998244353
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
	ll n,k;
	cin>>n>>k;
	vll a;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		a.eb(temp);
	}
	ll mx=0,total=1,last=0,found=0;
	mx=(n*n-(n-k)*(n-k)+n-(n-k))/2;
	for(int i=0;i<n;i++)
	{
		if(a[i]>n-k )
		{
			if(found)
				total=(total*(i-last))%MOD;
			else
				found++;
			last=i;
		}
		
	}
	cout<<mx<<" "<<total<<endl;
    return 0;
}



