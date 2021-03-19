#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, i, digit, tmp, cnt= 0;
	cin >> n;
	vector<int> ch(n);
	for(i=1; i<=n; i++){
		tmp = i;
		while(tmp > 0) {
			digit = tmp % 10;
			if(digit == 3) cnt++;
			tmp = tmp /10;
		}
	}
	cout << cnt;
	return 0;
}
