#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,k,p,i=0,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        i++;
        if(n>k){

        if(n==p){
        cout<<"Case"<<" "<<i<<":"<<" "<<k<<endl;
        }
         else if(n<k+p){
            s=((k+p)-n);
          cout<<"Case"<<" "<<i<<":"<<" "<<s<<endl;
         }
         else if(n==k+p){
        cout<<"Case"<<" "<<i<<":"<<" "<<n<<endl;
         }
        else if(n>k+p){
        cout<<"Case"<<" "<<i<<":"<<" "<<k+p<<endl;
        }
        }
        else
           cout<<"Case"<<" "<<i<<":"<<" "<<"not possible"<<endl;

    }
}
