#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[110],total=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i+=2)
    {
        total+=a[i+1]-a[i];
    }
    cout<<total<<endl;
    return 0;
}
