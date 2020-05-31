#include<iostream>
using namespace std;
int main()
{
    long long i,a[6],total=0;
    string s;
    for(i=1;i<=4;i++)
        cin>>a[i];
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        total+=a[(int)(s[i]-48)];
    }
    cout<<total<<endl;
    return 0;
}
