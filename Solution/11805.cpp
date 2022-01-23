#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p,d,i=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        i++;
        d=k+p;
        while(d>n){
            d=d-n;
        }
        cout<<"Case"<<" "<<i<<":"<<" "<<d<<endl;
    }
}
