#include<iostream>
using namespace std;
int main()
{
    int anton=0,n;
    char c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>c;
        if(c=='A')
            anton++;
    }
    if(anton>n/2)
        cout<<"Anton\n";
    else if(anton<n/2)
        cout<<"Danik\n";
    else
    {
        if(n%2==0)
            cout<<"Friendship\n";
        else
            cout<<"Danik\n";

    }
    return 0;
}
