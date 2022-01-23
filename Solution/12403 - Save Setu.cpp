#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int t,sum=0,x=0;
   cin>>t;
   char s[100];
   for(int i=0;i<t;i++)
   {
       cin>>s;
       if(strcmp(s,"donate")==0){
        cin>>x;
       sum+=x;
       }
       if(strcmp(s,"report")==0)
        cout<<sum<<endl;

   }
}
