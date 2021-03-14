#include <iostream>

using namespace std;
int a[60], b[60];
int main() {
	
	char str[101];
	cin >> str;
	for (int i=0; str[i]!= '\0'; i++) {
		if(a[i] >= 65 && a[i] <= 90) {
			a[str[i] - 64]++;
		}
		else
			a[str[i] -70]++;
	}
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++){
		if(b[i] >= 65 && b[i] <= 90) {
			b[str[i] - 64]++;
		}
		else
			b[str[i] -70]++;
	}
	for(int i=1; i<=52; i++){
		if(a[i] != b[i]) {
			cout << "NO";
			exit(0);
		}
			
	}
	cout << "YES";
	
	return 0;
}
