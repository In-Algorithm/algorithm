#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
	
	int n, pre, now, pos;
	cin >> n;
	vector<int> a(n);
	
	cin >> pre;
	
	for (int i =0; i<n-1; i++){
		cin >> now;
		pos = abs(pre - now);
		if( pos > 0 && pos < n && a[pos]==0) a[pos]=1;
		else {
			cout << "NO";
			return 0;
		}
		pre = now;
		
	}
	cout << "YES";
	return 0;
}
