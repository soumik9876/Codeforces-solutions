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
    ll q;
    cin>>q;
    while(q--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        vi alphas(27),alphap(27),alphat(27);
        for(auto i:s)
            alphas[i-96]++;
        for(auto i:p)
            alphap[i-96]++;
        for(auto i:t)
            alphat[i-96]++;
        bool check=true;
        for(int i = 0 ; i < 27 ; i++)
		{
		    if(alphas[i]+alphap[i] < alphat[i] or alphas[i] > alphat[i]){
                check = false;
                break ;
            }
		}
        if(check){
            int lens = (int)s.size();
            int lent = (int)t.size();
            int x = 0 , y = 0 , cnt = 0;
            while(x < lens and y < lent){
                if(s[x] == t[y]){
                    cnt ++;
                    x++ , y ++;
                }
                else
                    y++ ;
            }
            if(cnt!=lens)
                check=false;
        }
        if(check )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

