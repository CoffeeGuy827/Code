#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
using namespace std;

//���ڸ��� 0���� ������ ������ �������� �� ������ ����
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		char N[7] = { 0, };
		char change[7] = { 0, };
		char result_arr[7] = { 0, };
		bool flag = true;
		int index = 0;
		cin >> N;//�׽�Ʈ ���̽��� �Է� �޽��ϴ�.

		int num1 = atoi(N);//�Է¹��� ���ɸ� ���ڷ� ��ȯ�մϴ�.

		for (int i = strlen(N) - 1; i >= 0; i--)
		{
			change[index] = N[i];
			index++;
		}//���ڸ� �������ϴ�.

		int num2 = atoi(change);//������ ����� ���ڷ� �����մϴ�.

		int result = num1 + num2;//���մϴ�.
		sprintf(result_arr, "%d", result);//���� ���ڸ� ���ڿ��� �ٲߴϴ�.

		index = strlen(result_arr) - 1;
		for (int i = 0; i < strlen(result_arr) / 2; i++)
		{
			if (result_arr[i] != result_arr[index])
				flag = false;
			index--;
		}//��Ī�Ǵ� ������ �Ǵ��մϴ�.

		if (flag == false)
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";

		flag = true;
		index = 0;
	}
}