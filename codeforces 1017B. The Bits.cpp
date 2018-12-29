#include<iostream>
using namespace std;
long long mark[4];
int main()
{

    long long n,i,j,cnt=0;
    string a,b;
    cin>>n;
    cin>>a>>b;
//    for(i=0;i<n;i++)
//    {
//        if(a[i]=='0')
//        {
//            for(j=0;j<n;j++)
//            {
//                if((b[i]!='1' || b[j]!='1') && a[j]=='1' && i!=j)
//                    cnt++;
//            }
//        }
//    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='0' && b[i]=='0')
            mark[0]++;
        else if(a[i]=='0' && b[i]=='1')
            mark[1]++;
        else if(a[i]=='1' && b[i]=='0')
            mark[2]++;
        else if(a[i]=='1' && b[i]=='1')
            mark[3]++;
    }
    cout<<(mark[0]*mark[2])+(mark[0]*mark[3])+(mark[1]*mark[2])<<endl;
    return 0;
}
