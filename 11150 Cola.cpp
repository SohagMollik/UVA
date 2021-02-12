#include<bits/stdc++.h>
using namespace std;
int total(int n,int b){
if(n==0)
    return 0;
else
    return n+total((n+b)/3 , (n+b)%3);

}
int main()
{
    int n;
    while(cin>>n){
        if(n%2==1)
            printf("%d\n",total(n,0));

        else
            printf("%d\n",total(n,2));


    }
}
