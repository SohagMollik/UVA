#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    char s[2009];
    int i=0;

    while(gets(s)){
            i++;
            if(strcmp(s,"#")==0)
                break;
       else if(strcmp(s,"HELLO")==0)
            cout<<"Case"<<" "<<i<<":"<<" "<<"ENGLISH"<<endl;
        else if(strcmp(s,"HOLA")==0)
            cout<<"Case"<<" "<<i<<":"<<" "<<"SPANISH"<<endl;
        else if(strcmp(s,"HALLO")==0)
         cout<<"Case"<<" "<<i<<":"<<" "<<"GERMAN"<<endl;
        else if(strcmp(s,"BONJOUR")==0)
        cout<<"Case"<<" "<<i<<":"<<" "<<"FRENCH"<<endl;
        else if(strcmp(s,"CIAO")==0)
        cout<<"Case"<<" "<<i<<":"<<" "<<"ITALIAN"<<endl;
        else if(strcmp(s,"ZDRAVSTVUJTE")==0)
         cout<<"Case"<<" "<<i<<":"<<" "<<"RUSSIAN"<<endl;

        else

        cout<<"Case"<<" "<<i<<":"<<" "<<"UNKNOWN"<<endl;


    }
}
