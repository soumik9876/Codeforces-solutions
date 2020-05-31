
// Problem : C. Petya and Exam
// Contest : Codeforces Round #610 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1282/C
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

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
    int m;
    cin>>m;
    while(m--)
    {
        ll n,t,a,b;
        cin>>n>>t>>a>>b;
        vector< pll > mand;
        bool state[n];
        ll easy = 0 , hard = 0 ,fe=0,fh=0;
        for(int i=0;i<n;i++)
        {
            cin>>state[i];
            if(state[i]) hard ++;
            else easy ++ ;
        }
        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            mand.eb(temp,i);
        }
        sort(all(mand));
        ll mx=0;
        
        for(int i=0;i<n;i++)
        {
            //if(total<mand[i].F)
            //{
              //  mx=max(mx,i);
            //}
			ll req=(fh*b)+(fe*a),temp=0;
			if(mand[i].F-1>=req)
				temp=i;
			ll ex = mand[i].first-req- 1;
                //cout<<req<<" "<<mand[i].F<<" "<<ex<<" "<<mx<<endl;
                if(ex > 0)
                {
                    ll cnt = min(ex/a,easy-fe) ;
                    ex -= ( cnt * a);
                    ll cnt2 = min( ex/b , hard - fh );
                    temp = temp+cnt + cnt2 ;
                }
			mx=max(mx,temp);
            if(state[mand[i].S])
                fh++;
            else
				fe++;
             
        }
        ll req=(fh*b)+(fe*a),temp=0;
		if(t>=req)
			temp=n;
                //cout<<req<<" "<<t<<" "<<ex<<" "<<mx<<endl;
                
		mx=max(mx,temp);
           
       // for(int i=mx)
        cout<<mx<<endl;
    }
    return 0;
}

