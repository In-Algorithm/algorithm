#include <bits/stdc++.h>

using namespace std;
vector<int> v;

int main() {
	// N, M, K�� ������ �������� �����Ͽ� �Է¹ޱ�
	cin >> n >> m >> k;
	
	// N���� ���� ������ �������� �����Ͽ� �Է¹ޱ�
	for (int i=0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	} 
	
	sort(v.begin(), v.end());	// �Է� ���� ���� �����ϱ�
	int first = v[n - 1];	// ���� ū ��
	int second = v[n - 2];	// �� ��°�� ū ��
	
	//���� ū ���� �������� Ƚ�� ���
	int cnt = (m / (k+1)) * k;
	result += cnt * first;	// ���� ū �� ���ϱ�
	result += (m - cnt) * second;	// �� ��°�� ū �� ���ϱ�
	
	cout << result << '\n'; ������� ��� 
}
