#include <iostream>

using namespace std;

int main() {
	int n, a[101], cnt = 0, max;
	
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	max = a[n];
	for (int i = n-1; i >= 1; i--) {
		if(a[i] > max){
			max = a[i];
			cnt++;
		}
			
	}
	cout << cnt;
	
	return 0;
}
