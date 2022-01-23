#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int xs,ys,xe,ye,xt,yt,xb,yb;
       cin>>xs>>ys>>xe>>ye>>xt>>yt>>xb>>yb;
       if((xs==xt||xs==yt||ys==xt||ys==yt||xs==xb||xs==yb||ys==xb||ys==yb)||(xe==xt||xe==yt||ye==xt||ye==yt||xe==xb||xe==yb||ye==xb||ye==yb))
       cout<<"T\n";
       else
        cout<<"F\n";
   }
}
