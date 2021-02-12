#include<bits/stdc++.h>
using namespace std;
#define mal 100000
bool bal[mal];
int sieve(int n)
{
    int i,j,c=0;
    for(i=1;i<=n;i++)bal[i]=true;
    for(i=2;i*i<=n;i++){
        if(bal[i]==true){
            for(j=i;j<=n;j+=i)
                c++;
        }
    }
   // cout<<n<<" : "<<c<<endl;
   return c;
}
int main()
{
    int n;
    while(cin>>n){
        if(n==0)break;
        else{
            sieve(n);
        }
    }
}
