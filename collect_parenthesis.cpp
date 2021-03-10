#include <iostream>
#include <string>
using namespace std;

int main(){
	
	char a[31];
	
	int i , cnt=0;
		
	cin >> a;
	
	for(i = 0; a[i] != '\0'; i++){
		if(cnt >= 0) {
			if(a[i] == '(' )
				cnt ++;
			else if(a[i]==')')
				cnt --;	
		}
		else if (cnt <= 0)
			break;
	}
	if (cnt == 0)
		cout << "YES";
	else
		cout << "NO";
		
	return 0;
}
