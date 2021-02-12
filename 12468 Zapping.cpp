#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,dif1,dif2;
    while(cin>>a>>b){
        if(a==-1&&b==-1)
            break;
        else{
            if(a>b){
                dif1=a-b;
                dif2=(b-0)+(99-a)+1;
                if(dif1>dif2)
                    cout<<dif2<<endl;
                else
                    cout<<dif1<<endl;
            }
            else{
                dif1=b-a;
                dif2=(a-0)+(99-b)+1;
                if(dif1>dif2)
                     cout<<dif2<<endl;
                else
                     cout<<dif1<<endl;

            }
        }
    }
}

