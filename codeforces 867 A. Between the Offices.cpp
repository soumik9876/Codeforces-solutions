#include<iostream>
using namespace std;
int main()
{
    int n,sf=0,fs=0;
    char temp,c;
    cin>>n;
    cin>>c;
    temp=c;
    n--;
    while(n--)
    {
        cin>>c;
        if(temp>c)
            sf++;
        else if(temp<c)
            fs++;
        temp=c;
    }
    if(sf>fs)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
