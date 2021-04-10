#include <iostream>

using namespace std;

int main() {
	
	int n, m, sum = 0;
	cin >> n >> m;
	for(int i = n; i<=m; i++){
		sum += i;
		if(i < m)
			cout << i << " + ";
		else
			cout << i;
	}
	cout <<" = "<< sum;
	return 0;
}
