#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    int t,l,u;
    cin>>t;
    while(t--)
    {
      cin>>l>>u;

       int n,s=0,count,i,j;
            for(i=l;i<=u;i++){
                count=0;
                for(j=1;j<=sqrt(i);j++){
                    if(i%j==0)
                        count++;

                }
              int tmp=sqrt(i);

              if(tmp==sqrt(i))
                count=count*2-1;

              else
                count=2*count;

              if(count>s){
                s=count;
                n=i;
              }
            }
            cout<<"Between"<<" "<<l<<" "<<"and"<<" "<<u<<","<<" "<<n<<" "<<"has a maximum of"<<" "<<s<<" "<<"divisors."<<endl;

    }
}
