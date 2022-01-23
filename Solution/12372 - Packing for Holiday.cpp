#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,l,w,h,i=0;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        i++;
        cin>>l>>w>>h;
        if(l>20||w>20||h>20)
            cout<<"Case"<<" "<<i<<":"<<" "<<"bad"<<endl;
        else
            cout<<"Case"<<" "<<i<<":"<<" "<<"good"<<endl;
    }
}
