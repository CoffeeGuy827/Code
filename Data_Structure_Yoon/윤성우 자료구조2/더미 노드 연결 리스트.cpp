//#include <iostream>
//using namespace std;
//
//
//#include "���� ��� ���� ����Ʈ.h"
//
////FInsert�� SInsert�� �ĺ��ڸ� ã�� �� ���ٴ� ������ �߻���.
//void FInsert(LinkedList* list,int data) {
//	Node* newNode = new Node(data);
//
//	newNode->next = list->head->next;
//	list->head->next = newNode;
//	(list->NumOfData)++;
//}
//
//void SInsert(LinkedList* list, int data) {
//	Node* newNode = new Node(data);
//	Node* pred = list->head;
//
//	while (pred->next != nullptr && list->comp(data, pred->next->data) != 0) {
//		pred = pred->next;
//	}
//
//	newNode->next = pred->next;
//	pred->next = newNode;
//	(list->NumOfData)++;
//}
//
//int WhoIsPrecede(int d1, int d2) {
//	if (d1 < d2)
//		return 0;
//	else
//		return 1;
//}
//int main() {
//	LinkedList list;
//
//	list.SetSortRule(WhoIsPrecede);
//
//	list.LInsert(11); list.LInsert(11);
//	list.LInsert(22); list.LInsert(22);
//	list.LInsert(33);
//
//	cout << "���� ������ �� : " << list.LCount() << "\n";
//
//	if (list.LFirst()) {
//		if (list.cur->data == 22) {
//			list.LRemove();
//		}
//		
//		while (list.LNext()) {
//			if (list.cur->data == 22) {
//				list.LRemove();
//			}
//		}
//	}
//
//	cout << "���� ������ �� : " << list.LCount() << "\n";
//
//	return 0;
//}