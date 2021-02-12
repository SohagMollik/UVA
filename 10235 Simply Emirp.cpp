#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(cin>>n){
            int t=n;
        int c1,c2,rev=0,j;
        while(n!=0){
            int temp=n%10;
            rev=rev*10+temp;
            n/=10;
        }
        c1=0;
        for(i=1;i<=sqrt(rev)+1;i=i+1){
            if(rev%i==0)
                c1++;
        }
        c2=0;
        for(j=1;j<=sqrt(t)+1;j+=1){
            if(t%j==0)
                c2++;
        }

         if(t==2||t==3||t==5||t==7||t==11)
            cout<<t<<" "<<"is prime."<<endl;
        else if(c1==1&&c2==1&&t!=rev){
            cout<<t<<" "<<"is emirp."<<endl;
        }
        else if(c2>1&&c1>=1){
            cout<<t<<" "<<"is not prime."<<endl;
        }
        else {
            cout<<t<<" "<<"is prime."<<endl;
        }
    }
}
