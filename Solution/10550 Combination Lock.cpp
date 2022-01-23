#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int in,c1,c2,c3,ans,tem,flag,s,t;
    while(cin>>in>>c1>>c2>>c3){
        if(in==0&&c1==0&&c2==0&&c3==0){
            break;
        }
        if(in>c1){
            ans=in-c1;
        }
        else{
            ans=(in-c1)+40;

        }
        if(c2>c1){
            tem=c2-c1;
        }
            else{
                tem=(c2-c1)+40;
            }

        if(c2>c3){
            flag=c2-c3;
        }
            else{
                flag=(c2-c3)+40;
            }

        t=(ans+tem+flag)*9;
        s=t+1080;
     cout<<s<<endl;
    }

}
