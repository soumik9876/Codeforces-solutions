#include<iostream>
using namespace std;
int main()
{
    int n,check=0;
    cin>>n;
    if(n<=9)
        cout<<1<<"\n"<<n<<endl;
    else
    {
        for(int i=9;i>=1;i--)
        {
            if(n%i==0)
            {
                cout<<n/i<<endl;
                for(int j=1;j<=n/i;j++)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
                check=1;
                break;
            }
        }
        if(!check)
        {
            cout<<(n/9)+1<<endl;
            for(int i=1;i<=n/9;i++)
            {
                cout<<9<<" ";
            }
            cout<<n%9<<endl;
            cout<<endl;
        }
    }
    return 0;
}
