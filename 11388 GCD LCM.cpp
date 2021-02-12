#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,l;
        cin>>g>>l;
        if(l%g==0)
            cout<<g<<" "<<l<<endl;
        else
            cout<<-1<<endl;
    }
}
