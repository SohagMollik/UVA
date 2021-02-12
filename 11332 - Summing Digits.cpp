#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,sum;
    while(cin>>n){
        if(n==0)
        break;
      while(n/10!=0)
      {
          sum=0;
          while(n!=0){
           sum=sum+(n%10);
          n/=10;
          }

      }
      cout<<sum<<endl;
    }

}
