//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//	int menu_num = 0;
//	int account_id[10] = { 0 };
//	int count_index = 0;
//	char name[10][5] = { 0 };
//	int money[10] = { 0 };
//	int check_id = 0;
//	int input_money = 0;
//
//	while (true) {
//		cout << "\n----menu----\n" << "1.���°���\n" << "2.�Ա�\n" << "3.���\n" << "4.�������� ��ü ���\n" << "5.���α׷� ����\n" << "����: ";
//
//		cin >> menu_num;
//
//		cout << "\n";
//
//		switch (menu_num)
//		{
//		case 1:
//			cout << "[���°���]\n" << "����ID: ";
//			cin >> account_id[count_index];
//
//			cout << "\n�̸�: ";
//			cin >> name[count_index];
//			cout << "\n�Աݾ�: ";
//			cin >> money[count_index];
//			count_index++;
//			break;
//		case 2:
//		{
//			cout << "[��  ��]\n" << "����ID: ";
//			cin >> check_id;
//			cout << "\n�Աݾ�: ";
//			cin >> input_money;
//			for (int i = 0; i < 10; i++) {
//				if (check_id == account_id[i]) {
//					money[i] += input_money;
//					cout << "\n�ԱݿϷ�\n";
//					break;
//				}
//			}
//			break;
//		}
//		case 3:
//		{
//			cout << "[��  ��]\n" << "����ID: ";
//			cin >> check_id;
//			cout << "\n��ݾ�: ";
//			cin >> input_money;
//			for (int i = 0; i < 10; i++) {
//				if (check_id == account_id[i]) {
//					money[i] -= input_money;
//					cout << "\n�ԱݿϷ�\n";
//				}
//
//				else {
//					cout << "\n��ݽ���";
//				}
//				break;
//			}
//		case 4:
//		{
//			for (int i = 0; i < count_index; i++) {
//				cout << "����ID: " << account_id[i] << "\n�̸�: " << name[i] << "\n�ܾ�: " << money[i] << endl;
//			}
//			break;
//		}
//
//		case 5:
//			break;
//		default:
//			break;
//			}
//		}
//	}
//	return 0;
//}