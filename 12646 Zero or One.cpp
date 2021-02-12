#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b&&b==c&&a==c)cout<<"*"<<endl;
        else if(a==b&&b!=c&&a!=c)cout<<"C"<<endl;
        else if(a==c&&b!=c&&b!=a)cout<<"B"<<endl;
        else if(b==c&&a!=c&&a!=b)cout<<"A"<<endl;

    }
}
