#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n, pre, now, cnt, max;
	cin >> n;
	cin >> pre;
	
	cnt = 1;
	max = 1;
	for(int i = 1; i<n; i++){
		cin >> now;
		if(now>=pre) {
			cnt++;
			if(cnt > max)
				max = cnt;
		}
		else cnt =1;	
		pre = now;
	}
	cout << max;
	return 0;
}
