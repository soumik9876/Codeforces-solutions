#include<iostream>
using namespace std;
int main()
{
    int n,i,j,cnt=0;
    cin>>n;
    string s[510];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(s[i][j]=='X' && s[i-1][j-1]=='X' && s[i-1][j+1]=='X' && s[i+1][j-1]=='X' && s[i+1][j+1]== 'X')
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
