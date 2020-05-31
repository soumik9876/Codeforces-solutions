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
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,odd=0;
        vll a,segs;
        cin>>n>>k;


        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            if(temp%2)
            {
                odd++;
                segs.eb(i);
            }
        }


        if(odd>=k &&((odd%2 && k%2) || (odd%2==0 && k%2==0)))
        {
            cout<<"YES"<<endl;
            int start=n-k-2+(n%2);
            for(int i=start;i<k;i++)
                cout<<segs[i]<< " ";
            cout<<n;
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}


