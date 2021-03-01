#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(t--){
        double c,f;
        cin>>c>>f;
        double z=9.00/5.00;
        double far=((z*c)+32.00);
        double ok=(f+far);
        double y=(5.00*ok);
        double ans=((y-160.00)/9.00);
        i++;
        cout<<"Case "<<i<<": "<<setprecision(2)<<fixed<<ans<<endl;
    }
}
