#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int towers,floors,lowest,highest,k,ta,fa,fb,tb,total=0;
    cin>>towers>>floors>>lowest>>highest>>k;
    while(k--)
    {
        cin>>ta>>fa>>tb>>fb;
        total=0;
        if(ta==tb)
        {
            cout<<abs(fa-fb)<<endl;
            continue;
        }
        if(fa>highest)
        {
            //cout<<fa<<" "<<highest<<" "<<total<<endl;
            total+=fa-highest;
            fa=highest;
            //cout<<total<<endl;
        }

        else if(fa<lowest)
        {
            total+=lowest-fa;
            fa=lowest;
        }
        //cout<<total<<endl;
        total+=abs(ta-tb)+abs(fa-fb);
        cout<<total<<endl;
    }
    return 0;
}
