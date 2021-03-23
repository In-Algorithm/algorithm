#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n, i, j ,key;
	cin >> n;
	vector<int> arr(n);
	
	for(i =0; i< n; i++) {
		cin >> arr[i];
	}
	
	for(i = 1; i<n; i++) {
		key = arr[i];
		j = i -1;
		while(j >= 0 && arr[j] >  key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	for(i = 0; i< n; i++){
		cout << arr[i] << " ";
	}
	
	
	return 0;
}
