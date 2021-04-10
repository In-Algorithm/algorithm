#include <iostream>

using namespace std;

int main() {
	int age;
	char a[14] = {0,};
	for(int i = 0; i < 14; i++){
		cin >> a[i];	
	}
	
	if(a[7] == '1' || a[7] == '2') {
		age=120-((a[0]-'0') *10 + (a[1]-'0'));
		if(a[7] =='1') {
			cout << age << " " << "M"<< endl;
		}
		else	cout << age << " " << "W"<< endl;
	}
	else {
		age=20-((a[0]-'0') *10 + (a[1]-'0'));
		if(a[7] =='3') {
			cout << age << " " << "M"<< endl;
		}
		else	cout << age << " " << "W"<< endl;
	}
	
	
	return 0;
}
