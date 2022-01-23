#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,row,col;
    while(cin>>n){
        if(n==0)break;
         else{
           long long int sq=ceil(sqrt(n));
           long long int r=sq*sq-n;
        if(r<sq){
            col=r+1;
            row=sq;
        }
        else if(r==sq){
            col=sq;
            row=2*sq-r-1;
        }
        else{
            col=2*sq-r-1;
            row=sq;
        }
        cout<<col<<" "<<row<<endl;
    }
    //cout<<ceil(sqrt(12));
    }
}



