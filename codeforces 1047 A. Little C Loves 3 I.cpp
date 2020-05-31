#include<iostream>
using namespace std;
bool checkdiv(int n);
int main()
{
    long long n;
    cin>>n;
    if(n%3==0)
    {
        if(n%9==0)
            cout<<(n/3)-1<<" "<<(n/3)-1<<" "<<(n/3)+2<<endl;
        else
            cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
    }
    else
    {
        if((n/3)%3==1)
        cout<<n/3<<" "<<(n/3)+1<<" "<<(n/3)+(n%3)-1<<endl;
        else if((n/3)%3==2)
            cout<<(n/3)-1<<" "<<(n/3)<<" "<<(n/3)+(n%3)+1<<endl;
        else if((n/3)%3==0)
            cout<<(n/3)-1<<" "<<(n/3)+1<<" "<<(n/3)+(n%3)<<endl;
    }
    return 0;
}
