#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a[1001],maxx=0,t,t1,total=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(maxx<a[i])
            maxx=a[i];
    }
    t=1;
    for(i=0;i<n;i++)
    {
        if(a[i]<t)
            total+=t-1-a[i];
        else if(a[i]>t)
            total+=a[i]-t+1;
        t1=t;
    }
    //cout<<maxx<<endl;
    for(t=2;t<=maxx;t++)
    {
        int temp=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<t)
            {
                temp+=t-1-a[i];
                if(temp>total)
                    break;
            }
            else if(a[i]>t)
            {
                temp+=a[i]-t-1;
                if(temp>total)
                    break;
            }
        }
        //cout<<total<<endl;
        if(temp<total)
        {
            total=temp;
            t1=t;
        }
    }

    cout<<t1<<" "<<total<<endl;
    return 0;
}
