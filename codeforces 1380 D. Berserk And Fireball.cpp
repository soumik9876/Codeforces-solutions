//Author - Soumik Roy
//Date & Time - July 16, 2020 8:56 PM
//Problem name - D. Berserk And Fireball
//Problem url - https://codeforces.com/problemset/problem/1380/D
//Time limit - 2000 ms
//Memory Limit - 256 MB    

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
	ll n,m,x,k,y;
	cin>>n>>m>>x>>k>>y;
	vll a(n),b(m);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for (int i = 0; i < m; i++)
	{
		cin>>b[i];
	}
	ll posa=0,posb=0,cnt=0,mx=0,prev=0,total=0;
	bool check=true;
	while (posa<n)
	{
		if(posb<m && a[posa]==b[posb])
		{
			ll temp=0;
			if(cnt<k && max(prev,a[posa])<mx)
			{
				check=false;
				break;
			}
			if(k*y>=x)
			{
				temp=(cnt/k);
				temp*=x;
				temp+=((cnt%k)*y);
				
			}
			else
			{
				if(mx<max(prev,a[posa]))
					temp=cnt*y;
				else
				{
					temp=x+((cnt-k)*y);
				}
			}
			mx=0;
			total+=temp;
			cnt=0;
			prev=a[posa];
			posb++;
		}
		else
		{
			cnt++;
			mx=max(a[posa],mx);
		}
		posa++;
	}
	if(posb<m)
	{
		check=false;
	}
	if(cnt)
	{
		ll temp=0;
		if(cnt<k && prev<mx)
		{
			check=false;
		}
		if(k*y>=x)
		{
			temp=(cnt/k);
			temp*=x;
			temp+=((cnt%k)*y);
			
		}
		else
		{
			if(mx<prev)
				temp=cnt*y;
			else
			{
				temp=x+((cnt-k)*y);
			}
		}
		total+=temp;
	}
	if(check)
		cout<<total<<endl;
	else
		cout<<-1<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	//cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

