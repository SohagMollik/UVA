#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int t,n1,n2;
   cin>>t;
   while(t!=0){
    cin>>n1>>n2;
    if(n1>n2){
        cout<<">"<<endl;
    }
    else if(n1<n2){
        cout<<"<"<<endl;
    }
    else if(n1==n2){
        cout<<"="<<endl;
    }
    t--;

   }
   return 0;

}
