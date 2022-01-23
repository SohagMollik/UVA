#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,i,j,mx,mn,ans;
    cin>>t;
    while(t!=0){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        mx=a[0];
        mn=a[0];
        for(i=0;i<n;i++)
        {
         if(a[i]>mx){
            mx=a[i];
         }
         else if(a[i]<mn){
            mn=a[i];
         }
        }

        ans=((mx-mn)*2);
        cout<<ans<<endl;
        t--;
    }
}
