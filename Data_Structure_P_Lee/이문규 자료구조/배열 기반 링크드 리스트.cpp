//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* next;
//
//	Node(int data) : data(data), next(nullptr) {}
//};
//
//class Array_LinkedList {
//public:
//	int NumofData;
//	int MaxofData;
//	int arr[100];
//
//	Array_LinkedList(int NumofData) : NumofData(NumofData),MaxofData(100) {}
//	// ���������� �迭�� �ٷ�鼭 ó���ؾ��� ���ܴ� �ε��� ����
//	void add(int index, int data) {// add �� ���� : �迭�� �� á�����
//		if (NumofData == MaxofData)
//			return;
//		else {
//			//�ش� �ε������� ��ĭ�� ����
//			//����
//			for (int i = index; i < NumofData; i++) {
//				arr[i + 1] = arr[i];
//			}
//			arr[index] = data;
//		}
//	}
//	int remove(int index) {
//		if (index < 0 || index >= MaxofData)
//			return -1;
//
//		int subData = arr[index];
//		for (int i = index; i < NumofData - 1; i++) {
//			arr[i] = arr[i + 1];
//		}
//
//		return subData;
//	}
//};
//
