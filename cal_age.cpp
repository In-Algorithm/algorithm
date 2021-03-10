#include <iostream>

using namespace std;

int main(){
	char a[14];
	
	for(int i =0; i<14; i++){
		cin >> a[i];		
	}
	if((a[7]-48) == 1 || (a[7]-48) == 2){
		cout << (120 - ((a[0]-48)*10 + (a[1]-48))) << " ";
		
		if((a[7]-48) == 1)
			cout << "M";
		else if((a[7]-48) == 2)
			cout << "W";
	}
	else if ((a[7]-48) == 3 || (a[7]-48) == 4) {
		cout << (20 - ((a[0]-48)*10 + (a[1]-48))) << " ";
		
		if((a[7]-48) == 3)
			cout << "M";
		else if((a[7]-48) == 4)
			cout << "W";
	}
	return 0;
}

/*
#include<stdio.h>
int main(){
	char a[20];
	int year, age;
	scanf("%s", &a);
	if(a[7]=='1' || a[7]=='2') year=1900+((a[0]-48)*10+(a[1]-48));
	else year=2000+((a[0]-48)*10+(a[1]-48));
	age=2019-year+1;
	printf("%d ", age);
	if(a[7]=='1' || a[7]=='3') printf("M\n");
	else printf("W\n");
	return 0;
}

*/
