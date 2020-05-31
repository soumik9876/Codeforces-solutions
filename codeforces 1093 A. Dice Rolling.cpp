#include<iostream>
using namespace std;
int main()
{
    int t,x,a[]={2,3,4,5,6,7};
    cin>>t;
    while(t--)
    {
        int total=0;
        cin>>x;
        for(int i=5;i>=0;i--)
        {
            if(x%a[i]==1)
                continue;
            total+=x/a[i];
            x%=a[i];
        }
        cout<<total<<endl;
    }
    return 0;
}
