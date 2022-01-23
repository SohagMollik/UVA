#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int r,n,i=0,s;
  while(cin>>r>>n)
  {

      if(r==0&&n==0)
          break;
      i++;
      s=(r-1)/n;
      if(s>26)
        cout<<"Case"<<" "<<i<<":"<<" "<<"impossible"<<endl;
      else
    cout<<"Case"<<" "<<i<<":"<<" "<<s<<endl;

  }
}
