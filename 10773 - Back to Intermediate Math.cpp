#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    int t,i=0;
    double result,t1,t2,t3,t4,d,v,u;
    cin>>t;
    while(t--)
    {
        i++;
        cin>>d>>v>>u;
        t1=d/sqrt(u*u-v*v);
        //t2=d/sqrt(t1);
        t4=d/u;
        result=t1-t4;
        std::cout<<"Case"<<" "<<i<<":"<<" "<<std::setprecision(3)<<result<<endl;

    }
}
