#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n, max = -2147000000, min = 2147000000;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i =0; i < n; i++){
		if(max < a[i])
			max = a[i];
		if(min > a[i])
			min = a[i];
	}
	cout << max - min << endl;
	
	return 0;
}
