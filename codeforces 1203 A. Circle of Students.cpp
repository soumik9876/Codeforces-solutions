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
        int n,one;
        cin>>n;
        vi a;
        for(int i=0,temp; i<n; i++)
        {
            cin>>temp;
            a.eb(temp);
            if(temp==1)
                one=i;
        }
        bool check1=true,check2=true;
        for(int i=one; i<n-1; i++)
        {
            if(a[i+1]!=a[i]+1)
            {
                check1=false;
                break;
            }
        }
        if(check1)
        {
            for(int i=one-1; i>=1; i--)
            {
                if(a[i]!=a[i-1]+1)
                {
                    check1=false;
                    break;
                }
            }
        }
        if(check1==false)
        {
            for(int i=one+1; i<n-1; i++)
            {
                if(a[i+1]!=a[i]-1)
                {
                    check2=false;
                    break;
                }
            }
            if(check2)
            {
                for(int i=one; i>=1; i--)
                {
                    if(a[i]!=a[i-1]-1)
                    {
                        check2=false;
                        break;
                    }
                }
            }
        }
        if(check1 || check2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


