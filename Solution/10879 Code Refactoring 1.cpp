#include <stdio.h>
#include <math.h>

int main()
{
    int n,cases,i,j;
    scanf("%d",&cases);
    for(i=1;i<=cases;i++){
        scanf("%d",&n);
        printf("Case #%d: %d",i,n);
        int count=0;
        for(j=2;j<sqrt(n)+1;j++){
            if(n%j==0){
                printf(" = %d * %d",j,n/j);
                count++;
            }
            if(count==2)
                break;
        }
        printf("\n");
    }
    return 0;
}
