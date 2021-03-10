#include <iostream>
#include <string>
using namespace std;

int main(){
	
	char a[101], b[101];
	int i, j;
	gets(a);
	for( i = 0; a[i] !='\0'; i++) {
		if(a[i] != ' ') {
			if(a[i] >= 65 && a[i] <= 90)
				b[j++] = a[i]+32;
			else
				b[j++] = a[i];
		}	
	}
	b[j] = '\0';
	cout << b;	
		
	return 0;
}
