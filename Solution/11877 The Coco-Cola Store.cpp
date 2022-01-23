#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0)
            break;
         int m=n%2;
         int c;
         if(m==0)
           c=n/2;
         else
           c=(n-1)/2;
         cout<<c<<endl;
    }
}
