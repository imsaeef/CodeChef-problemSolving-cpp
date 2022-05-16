#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if (2*a == b){
            cout << "any" << endl;
        } else if (a > b){
            cout << "first" << endl;
        } else {
            cout << "second" << endl;
        }
    }
}