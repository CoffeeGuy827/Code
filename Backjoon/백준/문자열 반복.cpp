#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	int T = 0, R = 0, index = -1;
	char S[20] = { 0 };
	char S_result[160] = { '\0', };

	cin >> T;

	for (int i = 0; i < T; i++) {//i�� �׽�Ʈ ���̽��� Ƚ���� �ش�
		cin >> R >> S;
		for (int j = 0; j < 20; j++) {//���ڿ� �� �ϳ��� ����
			if (S[j] == 0) {
				break;
			}
			for (int k = 0; k < R; k++) { // ���ڸ� �ݺ��� Ƚ��
				++index;
				S_result[index] = S[j];
			}
		}
		index = -1;
		cout << S_result << endl;
		char S_result[160] = { '\0', };
	}

	return 0;
}