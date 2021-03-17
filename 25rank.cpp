#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n, pos;
	
	cin >> n;
	vector<int> score(n);
	vector<int> rank(n);
	for(int i = 0; i < n; i++){
		cin >> score[i];
		rank[i] =1;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j< n; j++){
			if(score[j] > score[i]) rank[i]++;
		}
	}
	for(int i =0; i<n; i++) {
		cout << rank[i] << " ";
	}
	
	return 0;
}
