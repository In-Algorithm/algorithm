#include <iostream>

using namespace std;

int main() {
	int n, m, num, max = -2147000000, cnt = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> num;
		if(num > m) cnt++;
		else cnt = 0;
		if(cnt > max) max = cnt;
	}
	if (max <= 0) cout << "-1";
	else cout << max;
	return 0;
}
