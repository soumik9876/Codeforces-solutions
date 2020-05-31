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
    int y;
    cin>>y;
    y++;

    while(1)
    {
        int a[4],i=0,num=y;
        while(num!=0)
        {
            a[i++]=num%10;
            num/=10;
        }
        bool check=true;

        for(int j=0;j<4;j++)
        {
            for(int k=j+1;k<4;k++)
            {
                if(a[j]==a[k])
                {
                    check=false;
                    break;
                }
            }
            if(!check) break;
        }
        if(check)
        {
            cout<<y<<endl;
            return 0;
        }
        y++;
    }
    return 0;
}
