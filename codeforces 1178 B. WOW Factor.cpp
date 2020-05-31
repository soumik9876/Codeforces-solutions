#include<bits/stdc++.h>
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
#define ull                   unsigned long long
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
    ll total=0;
    cin>>s;
    ll sz=s.size();
    vector <ll > pref(sz),suff(sz);
	for(int i = 1 ; i < sz; i++){
		suff[i] = suff[i-1];
		if(s[i]=='v' and s[i-1]=='v')
			suff[i] += 1;

	}
	for(int i = sz-2 ; i >=0 ; i--){
		pref[i] = pref[i+1];
		if(s[i]=='v' and s[i+1]=='v')
			pref[i] ++ ;
	}

    for(int i=0;i<sz;i++)
    {
        if(s[i]=='o' and suff[i] and pref[i]){
			total += (suff[i] * pref[i]);
		}
	}
    cout<<total<<endl;
    //cout<<currentw[0]<< " "<<currento[0]<<" "<<currentw[2]<<endl;
    return 0;
}


