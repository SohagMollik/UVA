#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int n,i,sum,temp;
   cout<<"PERFECTION OUTPUT"<<endl;
   while(cin>>n){
   temp=n;
   sum=0;
   for(i=1;i<n;i++){

    if(n%i==0)
        sum+=i;

   }

   if(n==0){
    //cout<<"END OF OUTPUT"<<endl;
    break;
   }
     printf("%5d  ",n);
     if(temp==sum)
       cout<<"PERFECT"<<endl;
    else if(temp>sum)

      cout<<"DEFICIENT"<<endl;

    else if(temp<sum)

      cout<<"ABUNDANT"<<endl;

   }
   cout<<"END OF OUTPUT"<<endl;

}
