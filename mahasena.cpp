#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int e=0, o=0;
    for (int i=0; i<n; i++){
        if (a[i]%2 == 0){
            e++;
        }
        else{
            o++;
        }
    }
    if (e>o){
        cout << "READY FOR BATTLE" << endl;
    }
    else{
        cout << "NOT READY" << endl;
    }
}