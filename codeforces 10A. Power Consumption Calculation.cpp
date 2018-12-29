#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p1,p2,p3,t1,t2,start,endd,temp,n,total=0,interval;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    cin>>start>>endd;
    total=(endd-start)*p1;
    temp=endd;
    n-=1;
    while(n--)
    {
        cin>>start>>endd;
        interval=start-temp;
        if(interval<=t1)
            total+=interval*p1;
        else if(interval>t1 && interval<=t1+t2)
            total+=(t1*p1)+((interval-t1)*p2);
        else if(interval>(t1+t2))
            total+=(t1*p1)+(t2*p2)+((interval-(t1+t2))*p3);
        total+=(endd-start)*p1;
        temp=endd;
    }
    cout<<total<<endl;
    return 0;
}
