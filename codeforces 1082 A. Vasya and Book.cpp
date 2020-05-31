#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long t,n,x,y,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>d;
        ll start=-1,endd=-1;
        if((long long)(abs(x-y))%d==0)
        {
            cout<<abs(x-y)/d<<endl;
            continue;
        }
        else if((y-1)%d==0)
        {
            start=(ceil((double)(x-1)/d))+(ceil((double)(y-1)/d));
            //cout<<ceil(((double)(x-1)/d))<< " " ;
        }

        else if((n-y)%d==0)
        {
            endd=(ceil((double)(n-x)/d))+(ceil((double)(n-y)/d));
        }
        //cout<<start<< " "<<endd<<endl;
        if(start>=0 && endd>=0)
            start=min(start,endd);
        else
            start=max(start,endd);
        cout<<start<<endl;
    }
    return 0;
}
