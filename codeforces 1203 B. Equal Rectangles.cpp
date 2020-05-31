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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vi a;
        cin>>n;
        for(int i=0,temp;i<4*n;i++)
        {
            cin>>temp;
            a.eb(temp);
        }
        sort(all(a));
        bool check=true;
        int x=0,y=(4*n)-1,p=a[x]*a[y];
        if(a[x]!=a[x+1] || a[y]!=a[y-1])
            check=false;
        x+=2,y-=2;
        if(check)
        {
            while(x<(2*n))
            {
                if(a[x]!=a[x+1] || a[y]!=a[y-1] || (a[x]*a[y])!=p)
                {
                    check=false;
                    break;
                }
                x+=2,y-=2;
            }
        }
        if(check)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


