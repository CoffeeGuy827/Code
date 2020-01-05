#include <iostream>
using namespace std;

long long Fibo(int n);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N = 0;
	cin >> N; //�� ��° ���� ������ �Է� �޽��ϴ�

	cout << Fibo(N) << endl;

	return 0;
}
long long Fibo(int n) {
	long long n1 = 1, n2 = 1;
	long long n3 = 0;//n3�� ������̰� n1�� n2��� �����װ� ������ �Ӵϴ�
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 1;
	}
	else {
		for (int i = 0; i < n - 2; i++) {
			n3 = n1 + n2;//����� ����
			n1 = n2;
			n2 = n3;// n1,n2 ����
		}
	}

	return n3;
}