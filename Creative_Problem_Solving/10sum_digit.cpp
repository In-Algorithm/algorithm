#include <iostream>
#include <vector>

using namespace std;

int digit_sum(int x){
	int sum = 0, tmp;
	while(x > 0) {
		tmp = x % 10;
		sum = sum + tmp;
		x = x/10;
	}
	return sum;
}

int main() {
	
	int n, sum, num, max = -2147000000, res;
	cin >> n;
	vector<int> a(n);
	
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	
	for(int i = 0; i < n; i++) {
		
		sum = digit_sum(a[i]);
		
		if(max < sum) {
			max = sum;
			res = a[i];	
		} else if (sum == max) {
			if(a[i] > res)  res = a[i];
		}
	}
	
	cout << res;
	
	return 0;
}
