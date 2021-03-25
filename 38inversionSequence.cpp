#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n, pos, i;
	
	cin >> n;
	vector<int> a(n), b(n);
	
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for(i = n-1; i>=0; i--){
		pos = i;
		for(int j = 0; j <= a[i]; j++) {
			b[pos] = b[pos+1];
			pos++;
		}
		b[pos] = i;
	}
	for(int i = 0; i<n; i++){
		cout << b[i] << " ";
	}	
	
	return 0;
}
