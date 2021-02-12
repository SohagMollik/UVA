#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    long long int t,x,n,a,b;
   //long double x,n,a,b;
  cin>>t;
  while(t--)
  {
      cin>>x;
      a=(double)((1+8*x)/4);
      b=(double)sqrt(a);
      n=(double)(b-0.5);
      cout<<(double)floor(n)<<endl;
  }
}
