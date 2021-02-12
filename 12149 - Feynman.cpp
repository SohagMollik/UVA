#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i;
  while(cin>>n){
   long long int sum=0;
    if(n==0)
        break;

    for(i=1;i<=n;i++)
        sum=sum+(i*i);
       cout<<sum<<endl;
  }
}
