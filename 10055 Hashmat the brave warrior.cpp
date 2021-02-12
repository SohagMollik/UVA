#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n1,n2,sum1,sum2,sum;
    while(cin>>n1>>n2)
    {


          sum1=max(n1,n2);
          sum2=min(n1,n2);
          sum=sum1-sum2;
          cout<<sum<<endl;



    }
}
