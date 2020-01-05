//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Priority_Queue
//{
//private:// ���Ҹ� ������ arr vector, ������ �ε���
//	vector<int> arr;
//	int lastIdx;
//	bool greater;//�⺻������ true��� �����ϸ� �ɵ�
//
//private:
//	void Swap(int i1, int i2) // ���ڷ� ������ �� �ε����� ���� ��ȯ
//	{
//		arr[0] = arr[i1];
//		arr[i1] = arr[i2];
//		arr[i2] = arr[0];
//	}
//
//	void UpHeap(int idx) // ���� Push�� ���� ����
//	{
//		if (Empty() || idx == 1) 
//			return;
//
//		int pIdx = idx / 2; // �θ� ��� ����
//
//		if (greater)
//		{
//			while (true)
//			{
//				if (arr[idx] < arr[pIdx]) // �θ� ����� ���� ũ�ٸ� 
//				{
//					Swap(idx, pIdx);
//
//					idx = pIdx; // �ε��� ����
//					pIdx = pIdx / 2;
//				}
//				else
//					break;
//			}
//		}
//		else
//		{
//			while (true)
//			{
//				if (arr[idx] > arr[pIdx])
//				{
//					Swap(idx, pIdx);
//					idx = pIdx;
//					pIdx = pIdx / 2;
//				}
//				else
//					break;
//			}
//		}
//	}
//
//	void DownHeap(int idx = 1)
//	{
//		int left = idx * 2;
//		int right = idx * 2 + 1;
//
//		if (greater)
//		{
//			if (right <= lastIdx)
//			{
//				if (arr[left] < arr[right]) // �� ���� ���� �����ؾ� ��
//					if (arr[left] < arr[idx])
//					{
//						Swap(left, idx);
//						DownHeap(left);
//					}
//					else
//						return;
//				else
//				{
//					if (arr[right] < arr[idx])
//					{
//						Swap(right, idx);
//						DownHeap(right);
//					}
//					else
//						return;
//				}
//			}
//		}
//		else
//		{
//			if (right <= lastIdx)
//			{
//				if (arr[left] > arr[right])
//					if (arr[left] > arr[idx])
//					{
//						Swap(left, idx);
//						DownHeap(left);
//					}
//					else
//						return;
//				else
//				{
//					if (arr[right] > arr[idx])
//					{
//						Swap(right, idx);
//						DownHeap(right);
//					}
//					else
//						return;
//				}
//			}
//		}
//	}
//public:
//	Priority_Queue(bool g = false)
//	{
//		lastIdx = 0;
//		greater = g;
//		arr.push_back(-1);
//	}
//
//	bool Empty()
//	{
//		if (lastIdx == 0)
//			return true;
//		return false;
//	}
//
//	void Push(int data)
//	{
//		arr.push_back(data); // arr�� ������ ����
//		lastIdx++; // lastIdx �÷��ֱ�
//		UpHeap(lastIdx);
//	}
//
//	void Pop()
//	{
//		if (Empty())
//			return;
//
//		Swap(1, lastIdx--); // ù��° ���� ������ �ε����� ��带 ��ȯ
//		arr.pop_back();
//		DownHeap();
//	}
//
//	int Top()
//	{
//		if (Empty())
//			return -1;
//
//		return arr[1];
//	}
//
//	void PrintArray()
//	{
//		for (int i = 1; i < arr.size(); i++)
//			cout << arr[i] << ' ';
//
//		cout << endl;
//	}
//};
//
//int main()
//{
//	Priority_Queue q(true);
//
//	int n;
//
//	cin >> n;
//
//	while (n--)
//	{
//		int n2;
//		cin >> n2;
//
//		q.Push(n2);
//	}
//
//	q.PrintArray();
//
//	while (!q.Empty())
//	{
//		cout << q.Top() << ' ';
//		q.Pop();
//	}
//
//	return 0;
//}