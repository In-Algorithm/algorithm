#include <iostream>

using namespace std;

int main() {
	
	char a[31];
	int cnt = 0;
	cin >> a;
	
	for(int i =0; a[i] != '\0'; i++){
		if(a[i] == '(') {
			cnt++;
		} else if(a[i] == ')'){
			cnt--;
			if(cnt < 0) {
				cout << "NO" <<endl;
				return 0;	
			}
		}	
	}
	
	if(cnt == 0) {
		cout << "YES" << endl;	
	}
	else {
		cout << "NO" << endl;	
	}
	
	return 0;
}
