
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,f,a,b,c,sum=0,i;
    cin>>t;
    while(t--){
            int sum=0;
        cin>>f;
        for(i=0;i<f;i++)
        {
            cin>>a>>b>>c;
            sum=sum+(a*c);
        }
        cout<<sum<<endl;
    }
}
