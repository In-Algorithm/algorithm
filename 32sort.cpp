#include <iostream>
#include <vector>
using namespace std;

int main (){
	
	int n, tmp, idx;
	vector<int> a(n);
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i<n; i++){
		idx = i;
		for(int j=i+1; j<n; j++){
			if(a[j] <a[idx]) idx = j;
		}
		tmp=a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	for(int i =0; i<n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
