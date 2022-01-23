#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    char ch[100000];
    int c=0,i,l;
    while(gets(ch)){
            l=strlen(ch);
    for(i=0;i<l;i++){
        if(ch[i]=='"'){
            c++;
            if(c%2==1)
                cout<<"``";

            else
                cout<<"''";

        }
        else
            cout<<ch[i];
    }
    cout<<endl;

    }
    return 0;
}
