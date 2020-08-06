
// Problem : D. Binary String To Subsequences
// Contest : Codeforces - Codeforces Round #661 (Div. 3)
// URL : https://codeforces.com/contest/1399/problem/D
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
void solve()
{
	int n;
	string s;
	cin>>n>>s;
	vi a(n) , one , zero ;
    int cnt = -1 ;

    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            if(one.size() == 0){
                cnt ++ ;
                zero.push_back(cnt) ;
                a[i] = cnt ;
            }
            else {
                int last = one.back() ;
                one.pop_back() ;
                zero.push_back(last) ;
                a[i] = last ;

            }
        }
		
        else{
            if(zero.size() == 0){
                cnt ++ ;
                one.push_back(cnt) ;
                a[i] = cnt ;
            }
            else{
                int last = zero.back() ;
                zero.pop_back()  ;
                one.push_back(last) ;
                a[i] = last ;
            }

        }
    }
	
    cout << cnt + 1 << endl ;
    for(auto x : a)
		 cout << x + 1 << " " ;
    cout << endl ;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

