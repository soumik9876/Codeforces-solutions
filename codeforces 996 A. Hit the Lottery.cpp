#include<iostream>
using namespace std;
int main()
{
    int n,total=0;
    cin>>n;
    int a[]={1,5,10,20,100};
    for(int i=4;i>=0;i--)
    {
        total+=n/a[i];
        n%=a[i];
    }
    cout<<total<<endl;
    return 0;
}
