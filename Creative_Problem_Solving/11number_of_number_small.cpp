#include <iostream>

using namespace std;

int main() {
	
	int n, tmp, cnt = 0;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		tmp = i;
		while(tmp >= 10) {
			tmp = tmp/10;
			cnt++;
		}
		cnt++;
	}
	
	cout << cnt;
	
	return 0;
}
