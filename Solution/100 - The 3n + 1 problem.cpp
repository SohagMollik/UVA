#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,x,y,max,k;
    while(cin>>i>>j)
    {
        max=0;
       x= (i>j)?i:j;
       y= (i<j)?i:j;
       for(k=y;k<=x;k++)
       {
           int n=k,count=1;
           while(n>1)
           {
               if(n%2)
                n=3*n+1;
               else
                n=n/2;
               count++;
           }
           if(count>=max)
            max=count;
       }
       cout<<i<<" "<<j<<" "<<max<<endl;
    }
}
