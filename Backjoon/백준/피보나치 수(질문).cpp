#include <iostream>
using namespace std;

//�� �ð� �ʰ��� �ߴ°��ΰ�?

int Fibo(int n);

int main() {
	int N = 0;
	cin >> N;

	cout << Fibo(N) << endl;

	return 0;
}

int Fibo(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return Fibo(n - 1) + Fibo(n - 2);
	}
}

