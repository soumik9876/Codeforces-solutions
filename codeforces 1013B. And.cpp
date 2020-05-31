#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
string toBin(int n);
int and(string s1,string s2);
int main()
{
    int n,x,i,*a,cnt=0;
    cin>>n>>x;
    a=new int[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
            cnt++;
        else if(and(toBin(a[i]),toBin(x))==a[i-1])
        {
            cnt++;
            a[i]=and(toBin(a[i]),toBin(x));
        }
    }
    if(cnt==0)
}
string toBin(int n)
{
    string num;
    int cnt=0;
    while(n!=0)
    {
        num.push_back((n%2)+48);
        n/=2;
    }
    reverse(num.begin().num.end());
    return num;
}
int and(string s1,string s2)
{
    int ans;
    if(s1.length()<s2.length())
        swap(s1,s2);
    for(int i=0;i<s1.length();i++)
    {
        ans=((s1[i]-48)*(s2[i]-48))*pow(2,i);
    }
    return ans;
}
