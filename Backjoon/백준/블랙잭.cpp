//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int num = N;
//	int max = 0;
//	int result = 0;
//	vector<int> arr;
//
//	while (num--)
//	{
//		int num = -1;
//		cin >> num;
//
//		arr.push_back(num);
//	}
//
//	sort(arr.begin(), arr.end());//ī���� ���� �Է¹��� �� �̸� �������ݴϴ�.
//
//	for(int i = 0; i < N-2; i++)
//		for(int j = 1; j < N-1; j++)
//			for (int k = 2; k < N; k++)
//			{
//				result = arr[i] + arr[j] + arr[k];//3���� ī�带 �̾� ���մϴ�.
//				if (result > M)//�� ���� M������ ũ�� �׳� �ѱ�ϴ�.
//					continue;
//				else
//				{
//					if (result > max)//max�� ����
//						max = result;
//					else
//						continue;
//				}
//			}
//
//	cout << max << "\n";
//	return 0;
//}