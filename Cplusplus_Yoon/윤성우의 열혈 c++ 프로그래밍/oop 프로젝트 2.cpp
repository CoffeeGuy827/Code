//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int NAME_LEN = 20;
//
//void SM();
//void MA();
//void DM();
//void WM();
//void SAAI();
//
//enum { M = 1, D, W, I, E };
//
////typedef struct
////{
////	int accID;
////	int balance;
////	char cusName[NAME_LEN];
////} Account;
//
//class Account
//{
//	int accID;
//	int balance;
//	char * cusName;
//public:
//	Account(int accID, int balance) : accID(accID), balance(balance)
//	{
//		cusName = NULL;
//	}
//	void setName(const char * name)
//	{
//		int len = strlen(name + 1);
//		cusName = new char[len];
//		strcpy(cusName, name);
//	}
//	int getID() { return accID; }
//	int getB() { return balance; }
//	char * getName() { return cusName; }
//	void changeB(int money, char sign)
//	{
//		if (sign == '+')
//		{
//			balance += money;
//		}
//		else if (sign == '-')
//		{
//			balance -= money;
//		}
//	}
//	~Account()
//	{
//		delete[]cusName;
//	}
//};
//
//Account* accArr[100];
//int accNum = 0;
//
//int main()
//{
//	int choice = 0;
//
//	while (1)
//	{
//		SM();
//		cout << "����: ";
//		cin >> choice;
//		cout << endl;
//
//		switch (choice)
//		{
//		case M:
//			MA();
//			break;
//		case D:
//			DM();
//			break;
//		case W:
//			WM();
//			break;
//		case I:
//			SAAI();
//			break;
//		case E:
//			return 0;
//		default:
//			cout << "Illegal selection.." << endl;
//		}
//	}
//	return 0;
//}
//
//void SM()
//{
//	cout << "----menu----" << endl;
//	cout << "1. ���°���" << endl;
//	cout << "2. �� ��" << endl;
//	cout << "3. �� ��" << endl;
//	cout << "4. �������� ��ü ���" << endl;
//	cout << "5. ���α׷� ����" << endl;
//}
//
//void MA()
//{
//	int id;
//	char name[NAME_LEN];
//	int balance;
//
//	cout << "[���°���]" << endl;
//	cout << "����ID: "; cin >> id;
//	cout << "�� ��: "; cin >> name;
//	cout << "�Աݾ�: "; cin >> balance;
//	cout << endl;
//
//	accArr[accNum] = new Account(id, balance);
//	accArr[accNum]->setName(name);
//
//	accNum++;
//}
//
//void DM()
//{
//	int money;
//	int id;
//	cout << "[��  ��]" << endl;
//	cout << "����ID: "; cin >> id;
//	cout << "�Աݾ�: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i]->getID() == id)
//		{
//			accArr[i]->changeB(money, '+');
//			cout << "�ԱݿϷ�" << endl << endl;
//			return;
//		}
//	}
//	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
//}
//
//void WM()
//{
//	int money;
//	int id;
//	cout << "[��  ��]" << endl;
//	cout << "����ID: "; cin >> id;
//	cout << "��ݾ�: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i]->getID() == id)
//		{
//			if (accArr[i]->getB() < money)
//			{
//				cout << "�ܾ׺���" << endl << endl;
//				return;
//			}
//
//			accArr[i]->changeB(money, '-');
//			cout << "��ݿϷ�" << endl << endl;
//			return;
//		}
//	}
//	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
//}
//
//void SAAI()
//{
//	for (int i = 0; i < accNum; i++)
//	{
//		cout << "����ID: " << accArr[i]->getID() << endl;
//		cout << "�� ��: " << accArr[i]->getName() << endl;
//		cout << "�� ��: " << accArr[i]->getB() << endl << endl;
//	}
//}