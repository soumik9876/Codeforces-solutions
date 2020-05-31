#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int cnt=1;
    for(int i=0;i<n;i+=cnt)
    {
        cout<<s[i];
        cnt++;
    }
    cout<<endl;
    return 0;
}
