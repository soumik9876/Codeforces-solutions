#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,j,cnt=1,maxx=1;
    vector<int> a;
    cin>>n;
    cin>>i;
    a.push_back(i);
    for(i=1;i<n;i++)
    {
        cin>>j;
        a.push_back(j);

        if(a[i]<=(2*a[i-1]))
        {
            cnt++;
            if(cnt>maxx)
                maxx=cnt;
        }
        else
            cnt=1;

    }
    cout<<maxx<<endl;
    return 0;
}
