//#include <iostream>
//using namespace std;
//
//#include "������ ���� ���� ����Ʈ.h"
//
//
//int main() {
//	CLinkedList list;
//	
//	list.LInsert(1); list.LInsert(2);
//	list.LInsert(3); list.LInsertFront(4);
//	list.LInsertFront(5);
//
//	cout << "���� ������ �� : " << list.LCount() << "\n";
//
//	if (list.LFirst()) {
//		if (list.cur->data == 4) {
//			list.LRemove();
//		}
//		
//		while (list.LNext()) {
//			if (list.cur->data == 4) {
//				list.LRemove();
//				break;
//			}
//		}
//	}
//
//	cout << "���� ������ �� : " << list.LCount() << "\n";
//
//	system("pause");
//	return 0;
//}