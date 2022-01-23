#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==0&&b==0&&c==0)
            break;
            int temp;
        if(a>b&&a>c){
            temp=(b*b)+(c*c);
            if((a*a)==temp)
                cout<<"right\n";
            else
                cout<<"wrong\n";
        }
        else if(b>a&&b>c){
            temp=(a*a)+(c*c);
            if((b*b)==temp)
                cout<<"right\n";
            else
                cout<<"wrong\n";
        }
        else{
             temp=(b*b)+(a*a);
            if((c*c)==temp)
                cout<<"right\n";
            else
                cout<<"wrong\n";
        }
    }
}
