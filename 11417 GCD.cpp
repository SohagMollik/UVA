#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,g=0;
   while(cin>>n){
        if(n==0)break;
        if(n==2)cout<<2<<endl;
   else{
        g=0;
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(i>j){
            g+=__gcd(j,i);
            }
           else{
            g+=__gcd(i,j);
            }
        }
    }

    cout<<g<<endl;
   }
   }
}
