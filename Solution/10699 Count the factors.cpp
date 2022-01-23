#include<bits/stdc++.h>
using namespace std;
#define max 1000000
bool prime[max];
int factor[max];
int z=0;
void sieve()
{

    int i,j;
    for(i=1;i<=max;i++)prime[i]=true;
    for(i=4;i<=max;i+=2)prime[i]=false;
    for(i=3;i*i<=max;i++){
        if(prime[i]==true){
            for(j=i*i;j<=max;j+=i){
               prime[j]=false;
            }

        }
    }

    factor[z]=2;
     z=1;
    for(i=3;i<=max;i++){
        if(prime[i]==true)
            factor[z++]=i;
    }

}

int main()
{
    int n;
    sieve();
    while(cin>>n&&n!=0){
        int ok=0;
        for(int k=0;k<z;k++){
        if(n%factor[k]==0)
            ok++;

        }
        cout<<n<<" : "<<ok<<endl;



    }
}
