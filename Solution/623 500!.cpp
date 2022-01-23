#include<bits/stdc++.h>
using namespace std;
void fact(int n)
{
    int dp[10000],i,j;
        dp[0]=1;
        int len=1;
        for(i=2;i<=n;i++){
                int carry=0;
        for(j=0;j<len;j++){
            int mul=i*dp[j]+carry;
            int rem=mul%10;
            dp[j]=rem;
            carry=mul/10;
        }

           while(carry!=0){
            len++;
            int rem=carry%10;
            dp[len-1]=rem;
            carry/=10;
           }
        }
        cout<<n<<"!"<<endl;
     for(int k=len-1;k>=0;k--){
        cout<<dp[k];
     }
      cout<<endl;
    }


int main()
{
    int n;
    while(cin>>n){
        fact(n);
    }
}
