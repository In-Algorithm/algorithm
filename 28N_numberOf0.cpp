#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, i, j, tmp, cnt = 0;
	cin >> n;
	vector<int> ch(n+1);
	
	for(i = 2; i <= n; i++){
		tmp = i;
		j=2;
		while(1){
			if(tmp%j==0){
				tmp=tmp/j;
				ch[j]++;
			}
			else j++;
			if(tmp==1) break;
		}
	}
	if(ch[2] != 0 && ch[5] != 0) {
		while(1) {
			if(ch[2] != 0){
				ch[2]--;
				if(ch[5] != 0) {
					ch[5]--;
					cnt++;
				} else break;
					
			} else break;			
		}
	}
	cout << cnt;
	return 0;
}
//모범답안
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, i, j, tmp, cnt1 = 0, cnt2 = 0;
	cin >> n;
	vector<int> ch(n+1);
	
	for(i = 2; i <= n; i++){
		tmp = i;
		j=2;
		while(1){
			if(tmp%j==0){
				if(j==2) cnt1++;
				else if (j == 5) cnt2++;
				tmp=tmp/j;
				
			}
			else j++;
			if(tmp==1) break;
		}
	}
	if(cnt1<cnt2) cout << cnt1;
	else cout << cnt2;
	return 0;
}

*/
