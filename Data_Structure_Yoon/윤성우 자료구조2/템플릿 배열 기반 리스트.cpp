//#include <iostream>
//using namespace std;
//
//#include "���ø� �迭 ��� ����Ʈ.h"
//
//class Point {
//	int xpos;
//	int ypos;
//public:
//	Point(int xpos,int ypos):xpos(xpos),ypos(ypos) {}
//};
//
//int main() {
//	ArrayList<Point> list;
//	int data;
//
//	list.LInsert(new Point(1,1));
//	list.LInsert(new Point(1, 1));
//	list.LInsert(new Point(1, 1));
//	list.LInsert(new Point(1, 1));
//	list.LInsert(new Point(1, 1));
//	
//
//	cout << "���� �������� �� : " << list.LCount() << "\n";
//
//	if (list.LFirst()) {
//		cout << list.GetData() << "\n";
//
//		while (list.LNext()) {
//			cout << list.GetData() << "\n";
//		}
//	}
//
//	if (list.LFirst()) {
//		if (list.GetData() == 22) {
//			list.LRemove();
//		}
//
//		while (list.LNext()) {
//			if (list.GetData() == 22) {
//				list.LRemove();
//			}
//		}
//	}
//}