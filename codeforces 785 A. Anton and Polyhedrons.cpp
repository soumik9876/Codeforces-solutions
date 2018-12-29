#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0,p[]={4,6,8,12,20};
    string s,s1[]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
    cin>>n;
    while(n--)
    {
        cin>>s;
        for(int i=0;i<5;i++)
        {
            if(s==s1[i])
            {
                cnt+=p[i];
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
