//#include <iostream>
//using namespace std;
//
//void HanoiTowerMove(int num, char from, char by, char to)
//{
//	if (num == 1) {
//		cout << "����1�� " << from << "���� " << to << "�� �̵� \n";
//	}
//	else {
//		HanoiTowerMove(num - 1, from, to, by);
//		cout << "����" << num << "�� " << from << "���� " << to << "�� �̵� \n";
//		HanoiTowerMove(num - 1, by, from, to);
//	}
//}
//
//int main()
//{
//	HanoiTowerMove(3, 'A', 'B', 'C');
//	return 0;
//}