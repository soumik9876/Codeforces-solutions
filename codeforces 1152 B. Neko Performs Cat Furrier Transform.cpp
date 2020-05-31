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
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
ll binaryNum[40];
void decToBinary(ll n)
{
    ll i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
}
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll x;
    cin>>x;
    vll op;
    decToBinary(x);
//    for(ll i=0;i<6;i++)
//    cout<<binaryNum[i]<<endl;
    ll cnt=0;
    bool check=false;
    ll digit=ceil(log2(x));
    //cout<<digit<<endl;
    ll target=pow(2,digit)-1;
    while(1)
    {
    ll last=0;
    check=false;
    decToBinary(x);
    for(ll i=0;i<digit;i++)
    {

        if(binaryNum[i]==0)
        {
            check=true;
            last=i+1;
        }
    }
    if(check==true)
    {
        op.pb(last);
        x^=(ll)(pow(2.0,last)-1);
        cnt++;
    }
    else
        break;
    if(x>=target)
        break;

    if(x!=target)
    {
        x++;
        cnt++;
    }
    if(x>=target)
        break;
    }
    cout<<cnt<<endl;
    for(ll i=0;i<op.size();i++)
        cout<<op[i]<< " ";
    cout<<endl;
    //for()

   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}

