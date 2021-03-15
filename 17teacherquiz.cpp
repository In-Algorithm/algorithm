#include <iostream>

using namespace std;

int total (int x) {
	int sum = 0;
	for(int i=1; i<= x; i++){
		sum += i;
	}
	return sum;
}

int main() {
	
	int n, a[10][2], tmp, res;
	
	cin >> n;
	
	for(int i = 0; i<n; i++){
		for(int j=0; j<2; j++){
			cin >> a[i][j];	
		}
		tmp = a[i][0];
		res = total(tmp);
		if(res == a[i][1])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
	}
	
	return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
	int n, sum, m, ans;
	cin >> n;
	for(int i = 1; i<=n; i++) {
		cin >> m >> ans;
		for(int j = 1; j <= m; j++){
			sum +=j;
		}
		if(ans == sum) cout << "YES";
		else cout << "NO";
	}
	return 0;
}
*/
