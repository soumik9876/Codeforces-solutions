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
		int n,one=0,mone=0,zero=0;
		vi a;
		cin>>n;
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			a.eb(temp);
			
		}
		bool check=true;
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			if((temp>a[i] && one==0) || (temp<a[i] && mone==0))
			{
				check=false;
			}
			if(a[i]==1)
				one++;
			else if(a[i]==-1)
				mone++;
			
		}
		if(check)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
    return 0;
}

