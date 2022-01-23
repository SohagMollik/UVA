#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double l;
        cin>>l;
        double pi=acos(-1);
        double ok=(l/5*l/5)*pi;
        double x=(l*3)/5;
        double y=l*x;
        double z=y-ok;
        cout<<setprecision(2)<<fixed<<ok<<" "<<setprecision(2)<<fixed<<z<<endl;
    }
}
