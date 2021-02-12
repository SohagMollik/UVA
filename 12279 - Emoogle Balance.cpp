#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t=0,n,k;
    while(cin>>n){
         if(n==0)
         break;
        int a=0;
        t++;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            if(k==0){

                a++;
            }

        }
        cout<<"Case"<<" "<<t<<":"<<" "<<n-2*a<<endl;
    }
}
