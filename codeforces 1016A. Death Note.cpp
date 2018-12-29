#include<iostream>
using namespace std;
int main()
{
    int n,m,temp=0,i,a[200000],cnt=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        temp+=a[i];
        cnt=0;
        if(temp>=m)
        {
            cnt=(temp/m);
            temp%=m;
        }
        cout<<cnt<<" ";
    }
    cout<<endl;
    return 0;
}
