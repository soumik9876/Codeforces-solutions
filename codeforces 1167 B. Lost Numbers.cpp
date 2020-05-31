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
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll nums[]={4 , 8, 15, 16, 23, 42},n,one,two,three,four,five,six,temp;
    cout<<"? "<<1<< " "<<2<<endl;
    cout << flush;
    cin>>n;
    for(ll i=0;i<6;i++)
    {
        for(ll j=0;j<6;j++)
        {
            if(i==j)
                continue;
            //cout<<nums[i]<< " "<<nums[j]<<endl;
            if(nums[i]*nums[j]==n)
            {
                one=nums[i];
                two=nums[j];
            }
        }
    }
    //cout<<"One and two " <<one << " "<<two<<endl;
    cout<<"? "<<2<< " "<<3<<endl;
    cout << flush;
    cin>>n;
    for(ll i=0;i<6;i++)
    {
        for(ll j=0;j<6;j++)
        {
            if(i==j)
                continue;
            //cout<<nums[i]<< " "<<nums[j]<<endl;
            if(nums[i]*nums[j]==n)
            {
                three=nums[i];
                temp=nums[j];
            }
        }
    }
    if(one==three)
    {
        swap(one,two);
        swap(three,temp);
    }
    if(one==temp)
    {
        swap(one,two);
    }
    if(two==three)
        swap(three,temp);
//    three=n/two;
    cout<<"? "<<4<< " "<<5<<endl;
    cout << flush;
    cin>>n;
    for(ll i=0;i<6;i++)
    {
        for(ll j=0;j<6;j++)
        {
            if(i==j)
                continue;
            if(nums[i]*nums[j]==n)
            {
                four=nums[i];
                five=nums[j];
            }
        }
    }
    cout<<"? "<<5<< " "<<6<<endl;
    cout << flush;
    cin>>n;
    for(ll i=0;i<6;i++)
    {
        for(ll j=0;j<6;j++)
        {
            if(i==j)
                continue;
            if(nums[i]*nums[j]==n)
            {
                six=nums[i];
                temp=nums[j];
            }
        }
    }
    if(four==six)
    {
        swap(four,five);
        swap(six,temp);
    }
    if(four==temp)
    {
        swap(four,five);
    }
    if(five==six)
        swap(six,temp);
    cout<<"! "<<one<< " "<<two << " "<<three<< " "<< four<< " "<<five<< " "<<six<<endl;
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

