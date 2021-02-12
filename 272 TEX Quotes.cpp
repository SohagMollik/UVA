#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char ch[1024];
    long int total;
    while(gets(ch));{
        if(ch=='"'){

           total++;
           if(total%2==1){
        cout<<"``";
           }
        else if(total%2==0){
            cout<<"''";
        }
        }
        else
            cout<<ch;
    }


}
