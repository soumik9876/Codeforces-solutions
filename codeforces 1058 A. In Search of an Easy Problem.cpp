#include<iostream>
using namespace std;
int main()
{
    int n,i;
    bool check=true;
    cin>>n;
    while(n--)
    {
        cin>>i;
        if(i==1)
            check=false;
    }
    if(check)
    cout<<"EASY\n";
    else
        cout<<"HARD\n";
    return 0;
}
