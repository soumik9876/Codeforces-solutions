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
        ll sum=0,n,k,last=0,seg=0;
        cin>>n>>k;
        vll cumisum,segs,a;
        segs.eb(n);
        for(int i=1,temp;i<=n;i++)
        {
            cin>>temp;
            a.eb(temp);
        }
//        if(a[n-1]%2==0)
//            sum=a[n-1];
        for(int i=n-1;i>=0;i--)
        {
            sum+=a[i];
            if(sum%2)
            {
                //cout<<seg<<" "<<i<<endl;
                segs.eb(i);
                sum=0,seg++;
            }
        }
        //cout<<seg<<endl;
        if(seg>=k &&((seg%2 && k%2) || (seg%2==0 && k%2==0)))
        {
            cout<<"YES"<<endl;
            for(int i=k-1;i>=0;i--)
                cout<<segs[i]<< " ";
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}


