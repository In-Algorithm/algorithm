#include <iostream>

using namespace std;

int reverse(int x){
	
	int tmp, rev = 0;
	while (x > 0) {
		tmp = x % 10;
		rev = rev*10 + tmp;
		x = x / 10;
	}
	return rev;
	
}

bool isPrime(int x) {
	if(x==1) return false;
	bool flag =true;
	for(int i = 2; i < x; i++) {
		if(x%i ==0){
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	
	int n, i, num, tmp;
	
	cin >> n;
	for(i = 0; i<n; i++){
		cin >> num;
		tmp = reverse(num);
		if(isPrime(tmp) ) cout << tmp << " ";
	}
	
	return 0;
}
