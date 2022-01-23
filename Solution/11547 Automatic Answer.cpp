#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
  int t,n,ans,temp;
  cin>>t;
  while(t!=0){
    cin>>n;
    ans=((((n*567/9)+7492)*235)/47-498);
    temp=(ans/10)%10;
    cout<<abs(temp)<<endl;
    t--;
  }
}
