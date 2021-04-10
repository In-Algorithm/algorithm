#include <iostream>

using namespace std;

int main() { 

	int n, sum = 0;
	cin >> n;
	cout << "1";
	for(int i=2; i< n; i++){
		if(n%i == 0){
			sum += i;
			cout << " + " << i;
		}
	}
	cout << " = " << sum+1 << endl;
	
	return 0;
}
