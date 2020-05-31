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
    ll n,m,k;
    vll a;
    cin>>n>>m>>k;
    for(ll i=0,temp;i<m;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    ll current=k,cnt=0,op=0,last=-1;
    for( ; m > 0; ){
		ll pos = lower_bound(all(a),current)-a.begin();
		if(a[pos] > current)
			pos--;

		int temp = pos - last;
		if(temp > 0){
			op ++ ;
			last = pos;
			cnt += temp;
			current += temp ;
			m-=temp;
		}
		else{
            ll d=1;
            if(pos+1<=a.size()-1)
                d=max(1LL,(a[pos+1]-current)/k);
            //cout<<d<<endl;
			current+=(k*d);

		}
    }
    cout<<op<<endl;
    return 0;
}

