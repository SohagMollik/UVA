#include<algorithm>
#include<cmath>
#include<cstdio>

using namespace std;

int n;
int ar[3100], dar[3100];


int main() {

    while(scanf("%d", &n) == 1) {
            bool joy=true;
        for(int i = 0; i < n; i++){
            scanf("%d", &ar[i]);
        }

        for(int i = 0; i < n - 1; i++){
        dar[i] = abs(ar[i + 1] - ar[i]);
        }

    sort(dar, dar + n - 1);

    for(int i = 0; i < n - 1; i++)

        if(dar[i] != i + 1) {
            joy=false;
        }

        if(joy==false){
    printf("Not jolly\n");
        }

        else{
    printf("Jolly\n");
        }

    }
    return 0;
}

