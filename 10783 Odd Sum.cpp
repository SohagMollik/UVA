#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int t,a,b,sum=0,i,j;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>a>>b;
       sum=0;
       for(j=a;j<=b;j++){

        if(j%2!=0)
            sum+=j;
       }
       cout<<"Case"<<" "<<i<<":"<<" "<<sum<<endl;
   }

}
