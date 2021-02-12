#include<bits/stdc++.h>
#include<math.h>
#include<string>
using namespace std;
int main()
{
    string num;
    long long  i,j=1,result;
    while(cin>>num){

        if(num=="0"){
            break;
        }

        else{
                j=1;
               result=0;
            long long len=num.length();
          for(i=len-1;i>=0;i--){
                if(num[i]=='1')
           result=result+(pow(2,j)-1);
          else if(num[i]=='2')
        result=result+2*(pow(2,j)-1);
           j++;

          }

            cout<<result<<endl;
        }
    }
}
