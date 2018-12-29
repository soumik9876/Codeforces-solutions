#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,total;
    string s;
    scanf("%d ",&n);
    total=n;
    cin>>s;
    for(i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
            total--;
    }
    cout<<n-total<<endl;
    return 0;
}
