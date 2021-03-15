#include <iostream>

using namespace std;

int main() {
	int a[11], b[11], a_point = 0, b_point = 0, lw = 0;
	for(int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < 10; i++) {
		cin >> b[i];
	}
	for(int i = 0; i<10; i++){
		if(a[i] == b[i]) {
			a_point++;
			b_point++;
		}
		else if (a[i] > b[i]){
			a_point += 3;
			lw = 1;
		}
		else if (b[i] > a[i]){
			b_point+=3;
			lw = 2;
		}		
	}
	cout << a_point << " " << b_point<< endl;
	if(a_point == b_point) {
		if(lw == 1) cout << "A";
		else if (lw == 2) cout << "B";
		else cout << "D";
	}
	else if(a_point < b_point) cout << "B";
	else cout << "A";
	
	return 0;
}
