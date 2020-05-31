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
    ll n,cnt=0;
    string s;
    cin>>n>>s;
    for(ll i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            if(s[i]=='R')
            {
                if(i==n-1)
                {
                    s[i]='B',cnt++;
                    continue;
                }
                if(s[i+1]=='G')
                    s[i]='B';
                else if(s[i+1]=='B')
                    s[i]='G';
                else
                    s[i]='B';
            }
            else if(s[i]=='G')
            {
                if(i==n-1)
                {
                    s[i]='R',cnt++;
                    continue;
                }
                if(s[i+1]=='G')
                    s[i]='B';
                else if(s[i+1]=='B')
                    s[i]='R';
                else
                    s[i]='B';
            }
            else if(s[i]=='B')
            {
                if(i==n-1)
                {
                    s[i]='G',cnt++;
                    continue;
                }
                if(s[i+1]=='G')
                    s[i]='R';
                else if(s[i+1]=='B')
                    s[i]='G';
                else
                    s[i]='G';
            }
            cnt++,i++;
        }
    }
    cout<<cnt<<endl<<s<<endl;
    return 0;
}


