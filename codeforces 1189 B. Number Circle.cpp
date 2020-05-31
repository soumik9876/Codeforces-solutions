#include<bits/stdc++.h>
#define endl '\n'
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
    ll n;
    vll a,nums;
    cin>>n;
    for(ll i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    sort(all(a),greater<ll> ());
    for(ll i=0;i<n;i+=2)
    {
//        if(i+1<n)
//            nums.eb(a[i+1]);
//        nums.eb(a[i]);
//        if(i+2<n)
//            nums.eb(a[i+2]);
//        i+=2;
        nums.eb(a[i]);
    }
    if(n%2==0)
    {
        for(ll i=n-1;i>=0;i-=2)
            nums.eb(a[i]);
    }
    else
    {
        for(ll i=n-2;i>=0;i-=2)
            nums.eb(a[i]);
    }
    bool check=true;
    //cout<<nums[1]<< " "<<nums[n-1]<<endl;
    for(ll i=0;i<n;i++)
    {
        ll sum;

        if(i==0)
            sum=nums[n-1]+nums[1];
        else if(i==n-1)
            sum=nums[0]+nums[n-2];
        else
            sum=nums[i-1]+nums[i+1];
        //cout<<sum<< " "<<nums[i]<<endl;
        if(sum<=nums[i])
            check=false;
    }
    if(!check)
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(ll i=0;i<n;i++)
            cout<<nums[i]<< " ";
        cout<<endl;
    }
    return 0;
}

