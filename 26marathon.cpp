#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, cnt;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i< n; i++){
		cin >> a[i];
	}
	cout << "1 ";
	for(int i = 1; i< n; i++){
		cnt = 0;
		for(int j = i-1; j>=0; j--){
			if(a[j]>=a[i]) cnt++;
		}
		cout << cnt+1 << " ";
	}
	return 0;
}
