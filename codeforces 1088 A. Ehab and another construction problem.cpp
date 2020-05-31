#include<iostream>
using namespace std;
int main()
{
    int x,a,b,exists=0;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0 && i*j>x && i/j<x)
            {
                a=i;
                b=j;
                exists=1;
                break;
            }

        }
        if(exists==1)
                break;
    }
    if(exists==0)
        cout<<-1<<endl;
    else
        cout<<a<<" "<<b<<endl;
    return 0;
}
