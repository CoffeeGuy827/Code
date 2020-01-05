#ifndef __�迭��ݸ���Ʈ__
#define __�迭��ݸ���Ʈ__
#define MAX_LEN 1000
class ArrayList {
	int data[MAX_LEN];
	int CurIndex;
	int NumOfData;
public:
	ArrayList() : CurIndex(-1), NumOfData(0) {};
	void LInsert(int data) {
		if (NumOfData > MAX_LEN) {
			cout << "������ ���� �Ұ�" << "\n";
			return;
		}
		data[NumOfData] = data;
		NumOfData++;
	}

	bool LFirst() {
		if (NumOfData == 0) {
			cout << "����� �����Ͱ� �����ϴ�\n";
			return false;
		}
		CurIndex = 0;
		return true;
	}
	bool LNext() {
		if (CurIndex == NumOfData - 1) {
			cout << "���� �����Ͱ� �������� �ʽ��ϴ�\n";
			return false;
		}
		CurIndex++;
		return true;
	}

	int LRemove() {
		if (NumOfData == 0) {
			cout << "�� �̻� ������ �����Ͱ� �����ϴ�\n";
			return 0;
		}
		int subData = data[CurIndex];
		for (int i = CurIndex; i < NumOfData - 1; i++) {
			data[i] = data[i + 1];
		}
		NumOfData--;
		CurIndex--;
		return subData;
	}
	int LCount() {
		return NumOfData;
	}

};

#endif // !__�迭��ݸ���Ʈ__
