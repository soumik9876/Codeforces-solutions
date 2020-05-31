#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    vector<long long> a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        long long temp;
        cin>>temp;
        a.push_back(temp);
        if(!(a[i]%2))
            a[i]--;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
