#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0,a[]={5,4,3,2,1};
    cin>>n;
    for(int i=0;i<5;i++)
    {
        cnt+=n/a[i];
        n%=a[i];
    }
    cout<<cnt<<endl;
    return 0;
}
