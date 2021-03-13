#include <iostream>

using namespace std;

int digit_num(int x){
	
	int tmp, cnt = 0;
	
	for(int i=1; i <= x; i++){
		
		tmp = i;
		while(tmp > 0){
			tmp= tmp/10;
			cnt++;
		}
	}
	return cnt;
}

int main() {
	
	int n, cnt;
	cin >> n;
	
	cnt = digit_num(n);
	cout << cnt;
	
	return 0;
}
