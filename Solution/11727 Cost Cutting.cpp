#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int t,a[3],i,p=1;
   cin>>t;
   while(t!=0){
        for(i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        cout<<"Case"<<" "<<p<<":"<<" "<<a[1]<<endl;
        p++;
    t --;
   }
   return 0;
}
