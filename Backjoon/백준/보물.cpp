#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//�ٽ��� ������ * ū��

int main()
{
	int N;
	vector<int> A, B;

	int minimum = 0;
	int num = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		A.push_back(num);
	}
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		B.push_back(num);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());

	for (int i = 0; i < N; i++)
	{
		minimum += A[i] * B[i];
	}
	cout << minimum << "\n";

	return 0;
	
}