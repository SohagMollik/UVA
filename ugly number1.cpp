#include <iostream>
#define MAX 1500

using namespace std;

long int min(long int x, long int y, long int z) {

    if(x<=y) {
        if(x<=z) {
            return x;
        } else {
            return z;
        }
    } else {
        if(y<=z) {
            return y;
        } else {
            return z;
        }
    }
}

long int uglyNumber(int count) {

    long int arr[MAX], val;
    int i2, i3, i5, lastIndex;
    arr[0] = 1;
    i2 = i3 = i5 = 0;
    lastIndex = 1;

    while(lastIndex<=count-1) {

        val = min(2*arr[i2], 3*arr[i3], 5*arr[i5]);

        arr[lastIndex] = val;
        lastIndex++;

        if(val == 2*arr[i2]) {
            i2++;
        }
        if(val == 3*arr[i3]) {
            i3++;
        }
        if(val == 5*arr[i5]) {
            i5++;
        }
    }

    return arr[lastIndex-1];

}

int main() {

    long int num;
    int count=1500;

    num = uglyNumber(count);

    cout<<"The 1500'th ugly number is"<<" "<<'<num>'<<endl;

    return 0;
}
