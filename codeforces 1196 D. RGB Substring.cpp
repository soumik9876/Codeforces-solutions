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
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        string t[]= {"RGB","GBR","BRG"};
        string s;
        cin>>s;
        int track=0,RGB=0,GBR=0,BRG=0,mn=INT_MAX;
        for(int i=0; i<k; i++)
        {
            if(s[i]!=t[0][track])
                RGB++;
            if(s[i]!=t[1][track])
                GBR++;
            if(s[i]!=t[2][track])
                BRG++;
            track++;
            if(track==3)
                track=0;
        }
        mn=min({RGB,GBR,BRG,mn});
        for(int i=1; i<n-k+1; i++)
        {
            int temp=RGB;
            RGB=BRG,BRG=GBR,GBR=temp;
            if(s[i-1]!='R')
                GBR--;
            if(s[i-1]!='G')
                BRG--;
            if(s[i-1]!='B')
                RGB--;
            if(s[i+k-1]!=t[0][(k-1)%3])
                RGB++;
            if(s[i+k-1]!=t[1][(k-1)%3])
                GBR++;
            if(s[i+k-1]!=t[2][(k-1)%3])
                BRG++;

            mn=min({RGB,GBR,BRG,mn});
        }
        cout<<mn<<endl;
    }

    return 0;
}
