#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,i,a[1001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int total=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            total+=a[i];
        }
        double average=total/n;
        double b=0;
        for(i=1;i<=n;i++){
        if(a[i]>average)
           b++;

        }
        double result=((b*100)/(double)n);
        printf("%0.3lf%%\n",result);

    }
}

