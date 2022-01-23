#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,rev;
    int t,r;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;

        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,m=0;

       for(int k=1;k<=n;k++)
       {
           r=k;
           while(r!=0){

           rev=r%10;
           r=r/10;
           if(rev==0)
            m++;
           else if(rev==1)
            a++;
           else if(rev==2)
            b++;
           else if(rev==3)
            c++;
            else if(rev==4)
            d++;
            else if(rev==5)
            e++;
            else if(rev==6)
            f++;
            else if(rev==7)
            g++;
            else if(rev==8)
            h++;
            else if(rev==9)
            j++;
       }
       }
       cout<<m<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<j<<endl;
    }
}
