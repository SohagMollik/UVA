#include<stdio.h>
#include<string>
#define ll long long
#define LEN 1110
using namespace std;
int main()
{
  ll sum,m,i;
  char ch[LEN];
  while(scanf("%c\n",&ch)){
    if(strcmp(ch,"0")==0)
        break;
    ll len=strlen(ch);
    sum=0;
    m=0;
    for(i=0;i<len;i++){
        sum=m*11+ch[i]-48;
        m=sum%11;
    }
    if(m==0)
       printf("%c is a multiple of 11.\n",ch);
    else
   printf("%c is not a multiple of 11.\n",ch);
  }
}
