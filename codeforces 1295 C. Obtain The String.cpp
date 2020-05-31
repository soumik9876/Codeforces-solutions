
// Problem : C. Obtain The String
// Contest : Educational Codeforces Round 81 (Rated for Div. 2)
// URL : https://codeforces.com/problemset/problem/1295/C
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
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    KAMEHAMEHA
//    #ifdef_soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	int t;
	cin>>t;
	while(t--)
	{
		string s,t;
		cin>>s>>t;
		vector< vi > pos(27);
		vi cur(27);
		int sz=s.size(),tz=t.size(),cnt=1,last=0;
		bool check=true;
		for(int i=0;i<sz;i++)
		{
			pos[s[i]-96].eb(i);
		}
		for(int i=0;i<tz;i++)
		{
			int ch=t[i]-96;
			if(pos[ch].size()==0)
			{
				check=false;
				break;
			}
			if(cur[ch]>=pos[ch].size())
			{
				for(int j=0;j<27;j++)
					cur[j]=0;
				last=0;
				cnt++;
				last=pos[ch][cur[ch]];
				cur[ch]++;
			}
			else if(pos[ch][cur[ch]]<last)
			{
				int ind=upper_bound(all(pos[ch]),last)-pos[ch].begin();
				//cout<<t[i]<<" "<<ind<<" "<<pos[ch].size()<<" "<<cnt<<" "<<cur[ch]<<endl;
				if(ind<pos[ch].size())
				{
					last=pos[ch][ind++];
					cur[ch]=ind;
				}
				else
				{
					for(int j=0;j<27;j++)
						cur[j]=0;
					last=0;
					cnt++;
					last=pos[ch][cur[ch]];
					cur[ch]++;
				}
			}
			//cout<<pos[ch].size()<<" "<<cur[ch]<<endl;
			else
			{
				last=pos[ch][cur[ch]];
				cur[ch]++;
			}
		}
		if(check)
			cout<<cnt<<endl;
		else
			cout<<-1<<endl;
	}
    return 0;
}

