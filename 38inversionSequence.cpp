#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n, pos, i, j;
	
	cin >> n;
	vector<int> a(n), b(n);
	
	for(i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	for(i = n; i>=1; i--){
		pos = i;
		for(int j = 1; j <= a[i]; j++) {
			b[pos] = b[pos+1];
			pos++;
		}
		b[pos] = i;
	}
	for(i = 1; i<=n; i++){
		cout << b[i] << " ";
	}	
	
	return 0;
}
