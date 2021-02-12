#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,a,i=0,j,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        i++;
        for(j=0;j<n;j++){
            cin>>a;
            if(j==n/2)
                ans=a;
        }

        cout<<"Case"<<" "<<i<<":"<<" "<<ans<<endl;

    }
}
