#include<bits/stdc++.h>
using namespace std;
#define N 1000000
 int prime[N];
 void sieve()
 {
    for(int i=2;i<=N;i++){
    prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;

    for(int i=2;i<sqrt(N)+1;i++){
        if(prime[i]==1){
            for(int j=2*i;j<=N;j+=i){
                prime[j]=0;
            }
        }
    }

 }
int main()
{
    sieve();
    int n;
   while(cin>>n){
    if(n==0)break;
    else{
        int ok,temp,ans;
        for(int i=2;i<n;i++){
                ok=0;
             ans=n-i;
            if(prime[ans]==1){
                if(prime[i]==1){
                    temp=i;
                    ok=1;
                    break;
                }
            }
        }
        if(ok==1)cout<<n<<" = "<<temp<<" + "<<ans<<endl;
        else cout<<"Goldbach's conjecture is wrong."<<endl;
    }
   }


}



