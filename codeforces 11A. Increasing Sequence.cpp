#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,b[2004],cnt=0,diff;
        cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=1;i<n;i++)
        {
            if(b[i]==b[i-1])
            {
                b[i]+=d;
                cnt++;
            }
            else if(b[i]<b[i-1])
            {
                diff=b[i-1]-b[i];
                b[i]+=((int)(diff/d)+1)*d;
                cnt+=((int)(diff/d)+1);
            }
        }
    cout<<cnt<<endl;
    return 0;
}

