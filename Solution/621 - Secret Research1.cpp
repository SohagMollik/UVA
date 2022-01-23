#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        int l = s.size();
        if(s[l-2] == '3' && s[l-1] == '5')cout << "-" << endl;
        else if(s[0] == '9' && s[l-1] == '4')cout << "*" << endl;
        else if(s[0] == '1' && s[1] == '9' && s[2] == '0')cout << "?" << endl;
        else cout << "+" << endl;
    }
    return 0;
}
