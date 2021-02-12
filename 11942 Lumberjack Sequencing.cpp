#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,a,b,c,d,e,f,g,h,i,j;
   cin>>t;
   cout<<"Lumberjacks:"<<endl;
   while(t--){
      cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
      if(a>b&&b>c&&c>d&&d>e&&e>f&&f>g&&g>h&&h>i&&i>j||a<b&&b<c&&c<d&&d<e&&e<f&&f<g&&g<h&&h<i&&i<j)
        cout<<"Ordered"<<endl;
      else
        cout<<"Unordered"<<endl;
   }
}
