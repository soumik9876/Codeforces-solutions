#include<iostream>
using namespace std;
int main()
{
    int n,a[101],maxx=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxx)
            maxx=a[i];
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=(maxx-a[i]);
    }
    cout<<total<<endl;
    return 0;
}
