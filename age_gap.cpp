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
