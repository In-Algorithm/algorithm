#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	vector<int> cnt(n+1);
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j = j + i){
			cnt[j]++;
		}
	}
	
	for(int i = 1; i<=n; i++) {
		cout << cnt[i] << " ";
	}
	
	return 0;
}
