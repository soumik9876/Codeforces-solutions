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
    string a,b,c;
    cin>>a>>b>>c;
    if(a[0]>b[0])
        swap(a,b);
    if(c[0]<b[0])
    {
        swap(b,c);
        if(a[0]>b[0])
            swap(a,b);
    }
    //cout<<a<< " "<<b<< " "<<c<<endl;
    if(a==b && b==c)
    {
        cout<<0<<endl;
        return 0;
    }
    if(a==b || b==c || a==c)
    {
        cout<<1<<endl;
        return 0;
    }
    if((a[1]==b[1] && a[0]+1==b[0]) && (c[1]==b[1] && b[0]+1==c[0]))
    {
        cout<<0<<endl;
        return 0;
    }
    if((a[1]==b[1] && (b[0]==a[0]+2 || b[0]==a[0]+1)) || (c[1]==b[1] && (c[0]==b[0]+2 || c[0]==b[0]+1)) || (c[1]==a[1] && (c[0]==a[0]+1 || c[0]==a[0]+2)))
    {
        cout<<1<<endl;
    }
    else
        cout<<2<<endl;
    return 0;
}


