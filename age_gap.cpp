#include <iostream>

using namespace std;

int main(){
  int n, a[100], max = -100000000, min = 100000000;
  
  cin >> n;
  
  for (int i =0; i<n; i++){
  	cin >> a[i];
  }
  
  for (int i = 0; i < n; i++) {
  	if(max < a[i])
  		max = a[i];
  	if(min > a[i])
  		min = a[i];
  }
  cout << max - min;
  
  
  return 0;
}


/*
#include<iostream>
using namespace std;
int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, a, max=-2147000000, min=2147000000;
	cin>>n;
	for(i=1; i<=n; i++){
		cin>>a;
		if(a>max) max=a;
		if(a<min) min=a;
	}
	cout<<max-min;
	return 0;
}
*/
