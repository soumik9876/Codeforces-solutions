#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min((k*l)/(n*nl),min((c*d)/n,p/(n*np)))<<endl;
    return 0;
}
