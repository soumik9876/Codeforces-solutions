#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[130],b[130],j=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int x=a[n-1];
    int y;
//    if(x==a[n-2])
//    {
//        cout<<x<<" "<<x;
//        return 0;
//    }
    for(int i=n-1;i>=0;i--)
    {
        if(x%a[i]!=0 || a[i]==a[i-1])
        {
            y=a[i];
            break;
        }
    }
//    if(j==-1)
//        y=1;
//    else
//        y=b[j];
    //j--;
    //sort(b,b+j);
//    for(int i=0;i<=j;i++)
//        cout<<b[i]<<" ";
//    cout<<endl;

    cout<<x<<" "<<y<<endl;
    return 0;
}
