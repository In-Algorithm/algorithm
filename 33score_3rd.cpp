#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n, idx, tmp, cnt = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i <n; i++){
		idx = i;
		for(int j = i; j < n; j++){
			if(a[i] <= a[j]) {
				idx =j;
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;	
			}
		}
	}
	for(int i = 0; i<n; i++) {
		if(a[i] != a[i+1]) cnt++;
		if(cnt == 2) {
			cout << a[i+1];
			break;
		}
	}
	
	
	return 0;
}
