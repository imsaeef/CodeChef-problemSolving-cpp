#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int a, b;
    cin >> a >> b;
    if ((a + b) <= x){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}