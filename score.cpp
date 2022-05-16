// team 1 goals A
// team 2 goals B


// final 
// team 1 goals C
// team 2 goals D

// if C >= A and D >= B======possible to win any team 
// ==============

#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int A, B, C, D;
		cin >> A >> B >> C >> D;
		if ( C >= A && D >= B ){
			cout << "possible" << endl;
		} else {
			cout << "impossible" << endl;
		}
	}
}