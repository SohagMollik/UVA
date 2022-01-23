#include<bits/stdc++.h>
using namespace std;
int main ()
{
 long long int n1,n2,count=0,rev1,rev2,r;
  while(cin>>n1>>n2)
  {

      if(n1==0&&n2==0){
        break;
      }
      count=0;
long long carry=0;
      while(n1||n2){

        rev1=n1%10;
        n1=n1/10;
            rev2=n2%10;
            n2=n2/10;
         r=(rev1+rev2+carry);

            if(r>9)count++,carry=1;

             else

             carry=0;


      }
      if(count==0)
      cout<<"No"<<" "<<"carry"<<" "<<"operation"<<"."<<endl;

        else if(count==1)
            cout<<"1"<<" "<<"carry"<<" "<<"operation"<<"."<<endl;
        else
            cout<<count<<" "<<"carry"<<" "<<"operations"<<"."<<endl;



}
return 0;

}
