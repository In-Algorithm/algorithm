#include <iostream>

using namespace std;

int main() {
	
	int a, b, i, sum = 0;
	
	cin >> a >> b;
		
	for(i=a; i<=b; i++)
	{
		if(i!=b)
			cout << i << "+";
		else
			cout << i;
		sum+=i;
	}
	cout << "=" << sum;
	return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
	
	int a, b, i, sum = 0;
	
	cin >> a >> b;
		
	for(i=a; i<b; i++)
	{
		cout << i << "+";
			sum+=i;
	}
	cout <<i<<"=" << sum+i;
	return 0;
}
*/
